#include <stdio.h>
#include <math.h>  
#include <stdlib.h>
#include <string.h> 

int main(int argc, char **argv){
    FILE *arq, *coparq;
    char aux[5000];
    char sstring[5000];
    //arq = fopen(argv[1],"r");
    while(!feof(arq)){
        fgets(sstring,5000,arq);

        printf("%s", sstring);
        /*
        if(arq != NULL){
        coparq = fopen(argv[2],"w");
        if(!feof(arq)){
            fputs(sstring, coparq);
            fclose(coparq);
            fclose(arq);
        }else{
            printf("Não foi possivel abrir o arquivo!");
        }
        */
    }
    
    return 0;
}