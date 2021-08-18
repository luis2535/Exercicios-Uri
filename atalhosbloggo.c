#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char texto[60];
    int i, troca1=0, troca2=0;
    while(gets(texto)!= NULL){
        char textofinal[1000];
        int aux=0;
        int x=strlen(texto);
        for(i=0;i<x;i++){
            if(texto[i]=='_'){
                if(troca1==0){
                    textofinal[aux]='<';
                    aux++;
                    textofinal[aux]='i';
                    aux++;
                    textofinal[aux]='>';
                    aux++;
                    troca1=1;
                }else{
                    textofinal[aux]='<';
                    aux++;
                    textofinal[aux]='/';
                    aux++;
                    textofinal[aux]='i';
                    aux++;
                    textofinal[aux]='>';
                    aux++;
                    troca1=0;
                }
            }else if(texto[i]=='*'){
                if(troca2==0){
                    textofinal[aux]='<';
                    aux++;
                    textofinal[aux]='b';
                    aux++;
                    textofinal[aux]='>';
                    aux++;
                    troca2=1;
                }else{
                    textofinal[aux]='<';
                    aux++;
                    textofinal[aux]='/';
                    aux++;
                    textofinal[aux]='b';
                    aux++;
                    textofinal[aux]='>';
                    aux++;
                    troca2=0;
                }
            }else{
                textofinal[aux]=texto[i];
                aux++;
            }
        }
        textofinal[aux]='\0';
        int y=strlen(textofinal);
        printf("%s\n",textofinal);
    }
    return 0;
}