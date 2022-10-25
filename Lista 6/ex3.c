#include <stdio.h>
#include <string.h>

int encontra_pais(char s1[], char s2[]);

struct sistema_papai_noel {
    char pais[20];
    char frase[25];
};

typedef struct sistema_papai_noel feliz_natal;

int main() {

    int i;
    char pais_requerido[20] = {0};
    feliz_natal p1[24] = {"brasil", "Feliz Natal!", "alemanha", "Frohliche Weihnachten!", "austria", "Frohe Weihnacht!", "coreia", "Chuk Sung Tan!", "espanha", "Feliz Navidad!", "grecia", "Kala Christougena!", "estados-unidos", "Merry Christmas!", "inglaterra", "Merry Christmas!", "australia", "Merry Christmas!", "portugal", "Feliz Natal!", "suecia", "God Jul!", "turquia", "Mutlu Noeller", "argentina", "Feliz Navidad!", "chile", "Feliz Navidad!", "mexico", "Feliz Navidad!", "antardida", "Merry Christmas!", "canada", "Merry Christmas!", "irlanda", "Nollaig Shona Dhuit!", "belgica", "Zalig Kerstfeest!", "italia", "Buon Natale!", "libia", "Buon Natale!", "siria", "Milad Mubarak!", "marrocos", "Milad Mubarak!", "japao", "Merii Kurisumasu!"};
    
    while (scanf("%[^\n]%*c", pais_requerido) != EOF) {

        for (i = 0; i < 24; i++) {
            if (encontra_pais(p1[i].pais , pais_requerido) == 1) {
                printf("%s\n", p1[i].frase);
                break;
            }
        }
        if (i == 24) printf("-- NOT FOUND --\n");
    }

    return 0;
}

int encontra_pais(char s1[], char s2[]) {
 
    int i;
    int tam;
 
    if (strlen(s1) != strlen(s2)) return 0;
 
    tam = strlen(s1);
    
    for (i = 0; i < tam; i++) {
        if (*(s1+i) != *(s2+i)) return 0;
    }
 
    return 1;
}