#include <stdio.h>
#include <stdlib.h>
#include <string.h>
        
void le_poli(double M[][2], int t);
void monta_poli(double p1[][2], double * pr, int t);
void soma_poli(double * p1, double * p2, double * pr, int m_e);
void sub_poli(double * p1, double * p2, double * pr, int m_e);
void print_poli(double * p, int m_e);
        
int main() {
        
    int i, j, entradas,n_termos_1, n_termos_2, maior_e;
    double poli_1[50][2], poli_2[50][2];
    double * poli1_f, * poli2_f, * poli_r;
    char soma_ou_sub;
        
    scanf("%d%*c", &entradas);
        
    for (i = 0; i < entradas; i++) {
        
        memset(poli_1, 0, sizeof(double)*(50*2));
        memset(poli_2, 0, sizeof(double)*(50*2));
        
        scanf("%c", &soma_ou_sub);
        
        scanf("%d", &n_termos_1);
        
        le_poli(poli_1, n_termos_1);
            
        scanf("%d", &n_termos_2);
        
        le_poli(poli_2, n_termos_2);
        
        maior_e = 0;

        for (j = 0; j < n_termos_1; j++) {
            if (*(*(poli_1+j)+1) > maior_e) maior_e = *(*(poli_1+j)+1);
        }

        for (j = 0; j < n_termos_2; j++) {
            if (*(*(poli_2+j)+1) > maior_e) maior_e = *(*(poli_2+j)+1);
        }
        
        
        poli1_f = malloc(sizeof(double) * (maior_e + 1));
        poli2_f = malloc(sizeof(double) * (maior_e + 1));
        poli_r = malloc(sizeof(double) * (maior_e + 1));
        
        memset(poli1_f, 0, sizeof(double)*(maior_e+1));
        memset(poli2_f, 0, sizeof(double)*(maior_e+1));
        memset(poli_r, 0, sizeof(double)*(maior_e+1));
        
        monta_poli(poli_1, poli1_f, n_termos_1);
        monta_poli(poli_2, poli2_f, n_termos_2);
        
        if (soma_ou_sub == '+') soma_poli(poli1_f, poli2_f, poli_r, maior_e);
        else sub_poli(poli1_f, poli2_f, poli_r, maior_e);
        
        print_poli(poli_r, maior_e);
        
        }
        
        return 0;
}
        
void le_poli(double M[][2], int t) {
        
    int i;
        
    for (i = 0; i < t; i++) scanf("%lf%lf", *(M+i), *(M+i)+1);
        
    scanf("%*c");
        
    }
        
void monta_poli(double p1[][2], double * pr, int t) {
    int i;
        
    for (i = 0; i < t; i++) {
        *(pr+((int)*(*(p1+i)+1))) = *(*(p1+i));
    }
}
        
void soma_poli(double * p1, double * p2, double * pr, int m_e) {   
    int i;
        
    for (i = 0; i < (m_e+1); i++) {
        *(pr+i) = *(p1+i) + *(p2+i);
    }
}
        
void sub_poli(double * p1, double * p2, double * pr, int m_e) {
    int i;
        
    for (i = 0; i < (m_e+1); i++) {
        *(pr+i) = *(p1+i) - *(p2+i);
    }
}
        
void print_poli(double * p, int m_e) {    
    int i;
    int ver = 0;
    char sinal;
        
    for (i = m_e; i >= 0; i--) {
        if (*(p+i) == 0) continue;
     
        if (i == 0) {
            if (*(p+i) > 0) printf("+");
            printf("%.2lf", *(p+i));
            continue;
        }
    
        if (*(p+i) > 0) {
            printf("+");
        }
        printf("%.2lfX^%d", *(p+i), i);
     
    }
    printf("\n");
}
        