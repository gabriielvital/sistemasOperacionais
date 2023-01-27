#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;
int main(int argc, char **argv){
    FILE *arq;
    char *achado;
    char sstring[1000];
    int i=1;
    arq = fopen(argv[2],"r");
    if(arq != NULL){
        while(!feof(arq)){
            fgets(sstring,1000,arq);
            achado = strstr(sstring,argv[1]);
            if(achado != NULL){
                printf("Achado!\n");
                printf("\nFrase: %s\n",sstring);
                printf("A linha é : %d ,\n A String é :%s\n",i,achado);
                }else{
            i++;
            }
        }
        fclose(arq);
    }else{
        printf("Não foi possivel abrir o arquivo!\n");
    }
    return 0;
}