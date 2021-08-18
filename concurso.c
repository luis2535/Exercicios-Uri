#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n,l,c,i,j;
    char *texto = (char *) malloc(sizeof(char) * 70000);
    while(scanf("%d %d %d ", &n,&l,&c) != EOF){
        scanf("%[^\n]",texto);
        int tamanho[n];
        int x=0;
        while(texto[x]!='\0'){
            x++;
        }
        int aux=0,cont=0;
        for(i=0;i<x;i++){
            if(texto[i]==' '|| i == x-1){
                tamanho[aux]=cont;
                aux++;
                cont=0;
            }else{
                cont++;
            }
        }
        int soma=0;
        int linhas=0;
        for(i=0;i<n;i++){
            soma+=tamanho[i];
            if(soma>c){
                linhas++;
                i--;
                soma=0;
            }else if(soma == c){
                linhas++;
                soma=0;
            }else{
                soma++;
                if (soma==c){
                    linhas++;
                    soma=0;
                }
            }
            if(i==n-1 && soma>0){
                linhas++;
            }
        }
        int paginas=linhas/2;
        if(linhas%2!=0){
            paginas++;
        }
        printf("%d\n",paginas);
    }
    return 0;
}