#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    int n;
    scanf("%d ",&n);
    char texto[60];
    int i;
    for(i=0;i<n;i++){
        gets(texto);
        char temp[60];
        int x=strlen(texto);
        int j;
        int aux=0;
        if(texto[0]!=' '){
            temp[aux]=texto[0];
            aux++;
        }
        for(j=1;j<x;j++){
            if(texto[j-1]==' ' && texto[j]!=' '){
                temp[aux]=texto[j];
                aux++;
            }
        }
        if(strlen(temp)==0){
            temp[0]==' ';
        }
        temp[aux]='\0';
        printf("%s\n",temp);
    }
    return 0;
}