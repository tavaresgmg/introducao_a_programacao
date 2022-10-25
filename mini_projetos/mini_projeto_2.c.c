#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct polinomio{
    char *id;    //string com o nome do polinomio
    int p;       // grau do polinomio
    double *coef;   // vetor de coeficientes do polinomio
} Poly;

Poly *aloca_poly(Poly *Polinomios, int tam);

double *aloca_coef(int tam);

char *aloca_string(int tam);

void limpa_str(char *str);

int maior_coef(Poly *P, int tam);

void imprime_polys(Poly *Polinomios, int tam);

void imprime_poly(Poly P);

Poly encontra_poly(Poly *P, int tam, char *str);

Poly soma_poly(Poly p1, Poly p2, Poly pr);

Poly sub_poly(Poly p1, Poly p2, Poly pr);

Poly zerar_coefs(Poly P);

void libera_polys(Poly *Polinomios, int tam);

int main(){
    Poly p1, p2, pr; 
    Poly *Polinomios = NULL; 
    int n, i, c = 0,o=0; 
    char str[100], str2[100];
    char *ler, *coef;

    scanf("%d%*c", &n);
    
    for(c=0;c<n;c++){
        limpa_str(str);

        scanf("%[^:]%*c ", str);

        Polinomios = aloca_poly(Polinomios,c); 

        Polinomios[c].id = aloca_string(strlen(str));

        strcpy(Polinomios[c].id,str);

        limpa_str(str);  

        scanf("%[^\n]%*c", str);

        Polinomios[c].p = -1;

        ler = str;

        while (*ler != '\0') { 
            if (*ler == '^') { 
                ler++; 
                if (atoi(ler) > Polinomios[c].p) Polinomios[c].p = atoi(ler);
            }
            ler++;
        }
        
        Polinomios[c].coef = aloca_coef(Polinomios[c].p);
        
        ler = str; 
        coef = ler; 
        
        while (*ler != '\0') {
            if (*ler == '+' || *ler == '-') coef = ler;
            if (*ler == '^') {
                ler++;
                Polinomios[c].coef[atoi(ler)] = atof(coef); 
            }
            ler++;
        }
    }

    pr.p = maior_coef(Polinomios, c);
    pr.coef = (double *) calloc(sizeof(double),2*(pr.p+1));

    scanf("%d%*c", &n);

    for(o=0;o<n;o++) {
        zerar_coefs(pr);

        limpa_str(str);

        for (i = 0; ; i++) {
            scanf("%c", &str[i]);
            if (str[i] == '+' || str[i] == '-') {
                
                *ler = str[i]; 
                str[i] = '\0'; 
                
                p1 = encontra_poly(Polinomios,c,str);
                if (!p1.coef) {
                    printf("Polinomio Invalido!\n");
                    break;
                }

                scanf("%[^\n]%*c", str2);
                p2 = encontra_poly(Polinomios, c, str2);
                if (!p2.coef) {
                    printf("Polinomio Invalido!\n");
                    break;
                }
                
                if (ler[0] == '-') pr = sub_poly(p1,p2,pr);
                else pr = soma_poly(p1, p2, pr);
                
                imprime_poly(pr);
                break;
            }
        }
    }

    free(pr.coef);
    libera_polys(Polinomios,c);

    return 0;
}

Poly *aloca_poly(Poly *Polinomios, int tam) {
    Polinomios = (Poly *) realloc(Polinomios, sizeof(Poly)*(1+tam));
    if(!Polinomios) {
        printf("Ocorreu um erro na memória!\n");
        return NULL;
    }
    return Polinomios;
}

double *aloca_coef(int tam) {
    double *coef = NULL;
    coef = (double *) calloc(sizeof(double),tam+1);
    if (!coef) {
        printf("Ocorreu um erro na memória!\n");
        return NULL;
    }
    return coef;
}

char *aloca_string(int tam) {
    char *str;
    str = (char *) malloc(sizeof(char)*(tam+1));
    if (!str) {
        printf("Ocorreu um erro na memória!\n");
        return NULL;
    }
    return str;
}

void imprime_polys(Poly *Polinomios, int tam) {
    int i, j, confere;

    for (i = 0; i < tam; i++) {
        confere = 0;
        printf("%s: ", Polinomios[i].id);
        for (j = 0; j <= Polinomios[i].p; j++) {
            if (Polinomios[i].coef[j] != 0) {
                
                if (Polinomios[i].coef[j] < 0) {
                    printf("%.0lfx^%d", Polinomios[i].coef[j], j);
                    if (confere == 0) confere = 1;
                }
                
                else if (confere == 0) {
                    printf("%.0lfx^%d", Polinomios[i].coef[j], j);
                }

                else printf("+%.0lfx^%d", Polinomios[i].coef[j], j);
            }
        }
        printf("\n");
    }
}

int maior_coef(Poly *P, int tam) {
    double m_coef;
    int i;

    for (i = 0; i < tam; i++) {
        if (i == 0) m_coef = P[i].p;
        else {
            if (P[i].p > m_coef) m_coef = P[i].p;
        }
    }
    return m_coef;
}

void imprime_poly(Poly P) {
    int i, confere = 0;
    
    for (i = 0; i <= P.p; i++) {
        if (P.coef[i] != 0) {
            if (P.coef[i] < 0) {
                printf("%.0lfx^%d", P.coef[i], i);
                if (confere == 0) confere = 1;
            }
            else if (confere == 0) {
                printf("%.0lfx^%d", P.coef[i], i);
                confere = 1;
            }
            else printf("+%.0lfx^%d", P.coef[i], i);
        }
    }

    printf("\n");
}

void limpa_str(char *str) {
    int i;

    for (i = 0; i < strlen(str); i++) str[i] = '\0';
}

Poly encontra_poly(Poly *P, int tam, char *str) {
    int i, j;

    Poly Poli;

    for (i = 0; i < tam; i++) {
        if (strcmp(P[i].id,str) == 0) {
            Poli = P[i];
            return Poli;
        }
    }
    Poli.coef = NULL;  
    return Poli;
}

Poly soma_poly(Poly p1, Poly p2, Poly pr) {
    int i;

    for (i = 0; i <= p1.p; i++) {
        if (p1.coef[i] != 0) {
            if (p2.coef[i] != 0 && p2.p <= i) {
                pr.coef[i] = p1.coef[i] + p2.coef[i];
            }
            else {
                pr.coef[i] = p1.coef[i];
            }
        }
    }

    for (i = 0; i <= p2.p; i++) {
        if (p2.coef[i] != 0) {
            if (p1.coef[i] == 0 || p1.p < i) {
                pr.coef[i] = p2.coef[i];
            }
        }
    }

    return pr;
}

Poly sub_poly(Poly p1, Poly p2, Poly pr) {
    int i;

    for (i = 0; i <= p1.p; i++) {
        if (p1.coef[i] != 0) {
            if (p2.coef[i] != 0 && p2.p <= i) {
                pr.coef[i] = p1.coef[i] - p2.coef[i];
            }
            else {
                pr.coef[i] = p1.coef[i];
            }
        }
    }

    for (i = 0; i <= p2.p; i++) {
        if (p2.coef[i] != 0) {
            if (p1.coef[i] == 0 || p1.p < i) {
                pr.coef[i] = p2.coef[i] * (-1);
            }
        }
    }

    return pr;
}

Poly zerar_coefs(Poly P) {
    int i;

    for (i = 0; i <= P.p; i++) {
        P.coef[i] = 0;
    }
    return P;
}

void libera_polys(Poly *Polinomios, int tam) {
    int i;

    for (i = 0; i < tam; i++) {
        if (Polinomios[i].id) free(Polinomios[i].id);
        if (Polinomios[i].coef) free(Polinomios[i].coef);
    }

    free(Polinomios);
}