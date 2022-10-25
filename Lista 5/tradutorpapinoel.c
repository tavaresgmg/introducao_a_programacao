#include <stdio.h>

int main(){
    char str[100];
    char L[24][100]={
        "brasil"
        ,"alemanha"
        ,"austria"
        ,"coreia"
        ,"espanha"
        ,"grecia"
        ,"estados-unidos" 
        ,"inglaterra"
        ,"australia"
        ,"portugal"
        ,"suecia"
        ,"turquia" 
        ,"argentina" 
        ,"chile"
        ,"mexico" 
        ,"antardida" 
        ,"canada"
        ,"irlanda" 
        ,"belgica"
        ,"italia"
        ,"libia"
        ,"siria"
        ,"marrocos" 
        ,"japao"
    };
    char FN[24][100]={
        "Feliz Natal!",
        "Frohliche Weihnachten!",
        "Frohe Weihnacht!",
        "Chuk Sung Tan!",
        "Feliz Navidad!",
        "Kala Christougena!",
        "Merry Christmas!",
        "Merry Christmas!",
        "Merry Christmas!",
        "Feliz Natal!",
        "God Jul!",
        "Mutlu Noeller",
        "Feliz Navidad!",
        "Feliz Navidad!",
        "Feliz Navidad!",
        "Merry Christmas!",
        "Merry Christmas!",
        "Nollaig Shona Dhuit!",
        "Zalig Kerstfeest!",
        "Buon Natale!",
        "Buon Natale!",
        "Milad Mubarak!",
        "Milad Mubarak!",
        "Merii Kurisumasu!"
    };
    int i;

    while(1){
        if (scanf("%s", str)==EOF);
        for(i=0;i<24;i++){
            if(strcmp(str,L[i])==0) break;
        }
        if(i==24){
            printf("--NOT FOUND--");
        } else {
            printf("%s", FL[i]);
        }
    }



    return 0;
}