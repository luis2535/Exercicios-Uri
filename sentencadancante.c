#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char texto[50];
    int i,troca=0;
    while(gets(texto) != NULL){
        int x=0;
        while(texto[x]!='\0'){
            x++;
        }
        for(i=0;i<x;i++){
            if(texto[i]==' '){
                texto[i]=' ';
            }else if(texto[i]>=65 && texto[i]<=90){
                if(troca==0){
                    troca=1;
                }else{
                    texto[i]=texto[i]+32;
                    troca=0;
                }
            }else if(texto[i]>=97 && texto[i]<=122){
                if (troca==0){
                    texto[i]=texto[i]-32;
                    troca=1;
                }else{
                    troca = 0;
                }
            }
        }
        troca=0;
        printf("%s\n",texto);
    }
    return 0;
}