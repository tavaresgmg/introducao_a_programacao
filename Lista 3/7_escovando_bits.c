#include <stdio.h>

/**
 * Imprime os bits dos n bytes endereçados por end_byte.
 * @param end_byte endereço do primeiro byte a ser impresso
 * @param quantidade de bytes a serem impressos
 */

void print_bytes( const void * end_byte, double n );
void print_bits(unsigned char *p_byte);

int main(){
    double n;
    unsigned char uc;
    unsigned short us;
    unsigned int ui;
    float ff;

    scanf("%lf", &n);

    uc = n;
    us = n;
    ui = n;
    ff = n;

    print_bytes(&uc, 1);
    print_bytes(&us, 2);
    print_bytes(&ui, 4);
    print_bytes(&ff, 4);
    print_bytes(&n,8);

    return 0;
}

void print_bytes( const void * end_byte, double n ){
    int i;
    unsigned char *p = (unsigned char *) end_byte;
    
    while(n--){
        print_bits(p);
        printf(" ");
        p++;
    }
    printf("\n");
}

void print_bits(unsigned char *p_byte){
    unsigned char B = *p_byte;

    int i;
    int peso = 128;

    for(i=0;i<8;i++){
        printf("%d", B/peso);
        B%=peso;
        peso/=2;
    }
}