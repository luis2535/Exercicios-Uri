#include <stdio.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    while(n!=0 && d!=0){
        int i,j;
        int v[d][n];
        int x[n];
        for(i=0;i<n;i++){
            x[i]=0;
        }
        for(i=0;i<d;i++){
            for(j=0;j<n;j++){
                scanf("%d",&v[i][j]);
                x[j]+=v[i][j];
            }
        }
        int aux=0;
        for(i=0;i<n;i++){
            if(x[i]==d){
                aux=1;
            }
        }
        if(aux==1){
            printf("yes\n");
        }else{
            printf("no\n");
        }
        scanf("%d %d",&n,&d);
    }
    return 0;
}