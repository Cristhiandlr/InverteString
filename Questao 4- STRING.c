#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    char palavra[30], palimetro[30];
    int l,x,tamanho;

    printf("Digite a palavra desejada: ");
    fflush(stdin);
    gets(palavra);
    tamanho=strlen(palavra)-1;
    x=0;
    for (l=tamanho; l>=0; l--){
            palimetro[x]=palavra[l];
            x++;
    }
    palimetro[x]='\0';
    printf("%s", palimetro);




    return (0);

}
