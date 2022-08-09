#include <stdio.h>

void str_prefixo(int n, char *s, char *p);

int main(){

    char str[500], prefixo[500];
    int n,k;

    scanf("%d", &n);

    while(n--){
        scanf("%d%*c", &k);
        scanf("%[^\n]%*c", str);
        str_prefixo(k,str, prefixo);
        printf("%s\n", prefixo);
    }

    return 0;
}

void str_prefixo(int n, char *s, char *p){

    int i;
    

    for(i=0;i<n;i++){

        p[i]= s[i];
    }
    p[n]='\0';

}
