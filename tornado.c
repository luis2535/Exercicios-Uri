#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    while(n!=0){
        int i,v[n];
        for(i=0;i<n;i++){
            scanf("%d",&v[i]);           
        }
        int aux = 0, cont=0,cont1=0;
        for(i=0;i<n;i++){
            if((v[i]==1)){
                if(cont==0){
                    cont1==aux;
                }
                cont+=aux/2;
                aux=0;
            }else if (v[i]==0){
                aux++;
                if(i==(n-1)){
                    if(aux==1 && (cont1+1)%2==0){
                        cont++;
                    }else if(aux%2==0 || aux != n){
                        cont+=aux/2;
                    }else{
                        cont+=(aux/2) + 1;
                    }
                }           
        }
        }
        printf("%d\n",cont);
        scanf("%d",&n);
    }
    return 0;
}