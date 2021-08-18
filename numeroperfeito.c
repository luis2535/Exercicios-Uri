#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,aux=0,j;
    for(i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        for(j=1;j<x;j++){
            if(x%j==0){
                aux+=j;
            }
        }
        if(aux == x){
            printf("%d eh perfeito\n",x);
        }else{
            printf("%d nao eh perfeito\n",x);
        }
        aux=0;
    }
    return 0;
}