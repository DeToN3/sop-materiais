#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    
    //Declaracao de variaveis
    int   inteiro = 0;
    float decimal = 0;
    int   flag    = 1;
    //Declaracao de String em C
    char nome_arquivo_saida[100] = "saida.txt";
    
    //Declaracao de um arquivo
    FILE *arquivo;

    //ABRIR O ARQUIVO PARA ESCRITA, opção "r"
    arquivo=fopen(nome_arquivo_saida,"w");

    inteiro = 10;
    decimal = 89.0008;

    //Escreve primeira linha
    fprintf(arquivo, "%d %f\n", inteiro,decimal);

    inteiro = 99;
    decimal = -8.10059;

    //Escreve segunda linha
    fprintf(arquivo, "%d %f\n", inteiro,decimal);

    //FECHAR O ARQUIVO
    fclose(arquivo);

    return 0;
}