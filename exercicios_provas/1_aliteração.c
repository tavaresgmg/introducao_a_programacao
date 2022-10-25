#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    
    int tam, ali;
    char str[5101];
    char *letraatual, *letraant, espaco;
    

    while (fgets(str, 5101, stdin)){
        ali = 0;
        tam = 0;
        espaco = '\0';
        letraatual = str;
        letraant = NULL;

        while (*letraatual != '\n') {
            
            if (!letraant || (*letraant == ' ' && *letraatual != ' ')) {
                if (espaco == tolower(*letraatual))
                    tam++;
                else {
                    if (tam > 1)
                        ali++;

                    tam = 1;
                    espaco = tolower(*letraatual);
                }
            }
            letraant = letraatual;
            letraatual++;
        }
        if (tam > 1) ali++;

        printf("%d\n", ali);
    }

    return 0;
}
