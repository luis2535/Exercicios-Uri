#include <stdio.h>
int main(){
    int n;
    int x,y;
    int cont=0;
    int i;
    scanf("%d",&n);
    int v[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&x,&y);
        if (x%2==0){
            x++;
        }
        int j;
        for(j=0;j<y;j++){
            cont+=x;
            x+=2;
        }
        v[i]=cont;
        cont=0;
    }
    for(i=0;i<n;i++){
        printf("%d\n",v[i]);
    }
    return 0;
}