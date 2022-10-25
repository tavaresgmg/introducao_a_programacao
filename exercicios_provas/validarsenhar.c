#include <stdio.h>
int main(){
    int senha;
    char tipo;
    
    scanf("%i %c", &senha, &tipo);

    if (tipo = 'A'){
        if (senha <= 99999){
            printf("SENHA INVALIDA: %i - MINIMO 6 DIGITOS", senha);
        }   
        if ((senha > 99999) && (senha <= 999999)){
            printf("ACESSO PERMITIDO A CATEGORIA A");
        }
        if (senha > 999999){
            printf("ACESSO NEGADO");
        }
    }
    else if (tipo = 'G'){
        if (senha <= 999999){
            printf("SENHA INVALIDA: %i - MINIMO 7 DIGITOS", senha);
        }   
        else if ((senha > 999999) && (senha <= 9999999)){
            printf("ACESSO PERMITIDO A CATEGORIA G");
        }
        else if (senha > 9999999){
            printf("ACESSO NEGADO");
        }

    }
    else if (tipo = 'U'){
        if (senha <= 9999999){
            printf("SENHA INVALIDA: %i - MINIMO 8 DIGITOS", senha);
        }   
        else if ((senha > 9999999) && (senha <= 99999999)){
            printf("ACESSO PERMITIDO A CATEGORIA U");
        }
        else if (senha > 99999999){
            printf("ACESSO NEGADO");
        }	
	}

    return 0;
}
