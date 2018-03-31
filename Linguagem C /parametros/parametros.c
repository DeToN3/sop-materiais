#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char *args[]){

    int i = 0;
    
    printf("|-------------------------|\n");
    printf("|   Argumentos recebidos  |\n");
    printf("|-------------------------|\n");
    printf("| # | Valor               |\n");
    printf("|-------------------------|\n");

    for(i = 0; i < argc; i++){
        printf("| %d | %s\n",(i+1),args[i]);
    }
    printf("|-------------------------|\n");

    return 0;
}
