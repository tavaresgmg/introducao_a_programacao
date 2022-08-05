#include <stdio.h>
void converteEmNotasMoedas(int n, int *cem, int *cinquenta, int *dez, int *um);

int main (){
    int cem,cinquenta,dez,um,n;

    scanf("%d", &n);

    converteEmNotasMoedas(n,&cem,&cinquenta,&dez,&um);

    printf("NOTAS DE 100 = %d\nNOTAS DE 50 = %d\nNOTAS DE 10 = %d\nMOEDAS DE 1 = %d\n", cem,cinquenta,dez,um);



    return 0;
}
void converteEmNotasMoedas(int n, int *cem, int *cinquenta, int *dez, int *um){

    *cem = n/100;
    n = n%100;
    *cinquenta = n/50;
    n = n%50;
    *dez = n/10;
    n = n%10;
    *um = n;

return 0;
}