#include<stdio.h>
#include <string.h>
int main(){
    char n, d[200];
    int i,j;
    scanf("%c",&n);
    scanf("%s",d);
    while(1){
        if (n == '0' && (strcmp(d, "0") == 0)){
            break;
        }
        int x = strlen(d);
        for(i=0;i<x;i++){
            if(d[i]==n){
                for(j=i;j<x;x++){
                    d[i]=d[i+1];
                }
                d[x-1]=0;
                i--;
                x--;
            }
        }
        for(i=0;i<x-1;i++){
            if(d[i]=='0'){
                for(j=i;j<x;j++){
                    d[j]=d[j+1];
                }
                d[x-1]=0;
                x--;
                i--;
            }else{
                break;
            }
        }
        if(n == 0){
            d[0]='0';
            d[1]='\0';
        }
        printf("%s\n",d);
        scanf("%c",&n);
        scanf("%s",d);
    }
    return 0;
    
}