#include <stdio.h>
 
int main(){
    int dia, mes, ano, var, var1,var2;
 
    scanf("%i%i%i", &dia,&mes,&ano);
 
    if ((ano > 2036) || (ano < 1900)){
        printf("DATA FORA DO INTERVALO ESTIPULADO");
    }
    else if ((mes > 12) || (dia > 31)) { 
        printf("DATA INVALIDA");
    } 
    else if ((mes == 2) && (dia == 30) || (dia == 31)){
        printf("DATA INVALIDA");
    }
    else if ((mes == 4)||(mes == 6)||(mes == 9)||(mes == 11) && (dia == 31)){
        printf("DATA INVALIDA");
    
    }else if ((mes < 1) || (dia < 1)){
        printf("DATA INVALIDA");
    } else {
        if ((dia == 29) && (mes == 2)){
            var = ano%4;
            var1 = ano%100;
            var2 = ano%400;
                if ((var == 0)&&(var1>0)){
                    printf("%i/%i/%i", dia, mes, ano);    
                }
                else if ((var == 0)&&(var1 == 0)&&(var2 == 0 )){
                    printf("%i/%i/%i", dia, mes, ano);    
                } else {
                    printf("DATA INVALIDA");
                }
        } else {
            printf("%i/%i/%i", dia, mes, ano);
        }
    }
 
 
 
    return 0;
}
