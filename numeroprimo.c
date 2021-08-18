#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,cont=0,j;
    for(i=0;i<n;i++){
        int x;
        scanf("%d",&x);
        for(j=1;j<=x;j++){
            if(x%j==0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d eh primo\n",x);
        }else{
            printf("%d nao eh primo\n",x);
        }
        cont=0;
    }
    return 0;
}