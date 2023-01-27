#include <stdio.h>
#include <stdlib.h>

int v1[10];

void f(){
    int i;
    for(i=0 ; i<100; i++){
        v1[i] = i;
    
    }
}


void g(){
    int v2[10];
    int i;

    for(i=0; i<100; i++){
        v2[i] = i;
    }
}

int main(){
    if (rand() % 2){
        f();
    }else {g();
    }
    return 0;
}