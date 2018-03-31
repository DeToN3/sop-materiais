#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main(){
    
    //Declaracao de variaveis
    int   inteiro = 0;
    float decimal = 0;
    int   flag    = 1;
    //Declaracao de String em C
    char nome_arquivo_entrada[100] = "meu_arquivo.xyz";
    
    //Declaracao de um arquivo
    FILE *arquivo;

    //ABRIR O ARQUIVO PARA LEITURA, opção "r"
    arquivo=fopen(nome_arquivo_entrada,"r");

    while(1){

        //Realiza a leitura de um inteiro e decimal
        flag = fscanf(arquivo, "%d %f", &inteiro,&decimal);

        //Verifica se realizou a leitura corretamente
        // Se for menor que 0 finalizou o arquivo
        if(flag < 0){
            break;
        }

        //Imprime em tela o valor inteiro e decimal lido do arquivo
        printf("%d %f\n",inteiro,decimal);
    }

    //FECHAR O ARQUIVO
    fclose(arquivo);

    return 0;
}