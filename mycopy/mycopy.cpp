#include <stdio.h>
#include <stdlib.h> 

int main(int argc, char **argv){
    FILE *arq,*copyarq;
    char sstring[5000];
    arq = fopen(argv[1],"r");
    copyarq = fopen(argv[2],"w");
    if(arq != NULL){
        while(!feof(arq)){
            fgets(sstring,5000,arq);
            fputs(sstring, copyarq);
            }
        fclose(arq);
    }else{
    printf("Não foi possivel abrir o arquivo!");
    }
    return 0;
}