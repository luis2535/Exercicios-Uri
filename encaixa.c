#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char a[1010];
    char b[1010];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%s %s",a,b);
        int x=strlen(a);
        int y=strlen(b);
        char temp[y];
        int j=0,aux=0;
        for(j=(x-y);j<x;j++){
            temp[aux]=a[j];
            aux++;
        }
        int z=strncmp(temp,b,y);
        if(z==0){
            printf("encaixa\n");
        }else{
            printf("nao encaixa\n");
        }

    }
    return 0;
}