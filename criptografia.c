#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    int n,i,j;
    char *texto = (char *) malloc(sizeof(char) * 1000);
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        gets(texto);
        int x=0;
        while(texto[x]!='\0'){
            x++;
        }
        for(j=0;j<x;j++){
            if((texto[j]>= 65 && texto[j]<= 90) || (texto[j]>=97 && texto[j]<=122)){
                texto[j]=texto[j]+3;
            }
        }
        char *aux = (char *) malloc(sizeof(char) * 1000);
        strcpy(aux,texto);
        for(j=0;j<x;j++){
            texto[j]=aux[x-j-1];
        }
        int z=x/2;
        for(j=z;j<x;j++){
            texto[j]=texto[j]-1;
        }
        printf("%s\n",texto);
    }
    return 0;
}