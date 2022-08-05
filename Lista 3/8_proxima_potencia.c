#include <stdio.h>
#include <math.h>
 
int next_power(int num,int exp);
 
/**
* Função que calcula a potencia de p mais próximo a n.
* @param num valor inteiro
* @param exp valor da potencia
* @param base valor da base 
* @return retorna o valor da potencia mais proxima.
*/
 
int main () {
    int num,exp,base,pot;
 
    scanf("%d%d", &num, &exp);
 
    base = next_power(num, exp);
 
    pot = pow(base,exp);
 
    printf("%d -> %d^%d = %d", num,base,exp,pot);
 
    return 0;
}
 
int next_power(int num,int exp){
    int base,teste,teste2,ant2,aux1,aux2,i=1,ant;
 
    while(1){
        teste = pow(i,exp);
        
        if (teste>num) break;
        ant = i;
        ant2 = teste;
        i++;
    }
    teste = ant2;
    teste2 = pow(ant+1,exp);
 
    aux1 = num - teste;
    aux2 = teste2 - num;
 
    if(aux1<aux2) base = ant;
    else if(aux1>aux2) base = ant+1;
 
    return base;
}