#include <stdio.h>
int main(){
    int t,i;
    scanf("%d",&t);
    long long v[t],n[t];
    for(i=0;i<t;i++){
        scanf("%lld",&n[i]);
        long long f1=0,f2=1;
        if(n[i]==0){
            v[i]=0;
        }else if(n[i]==1){
            v[i]=1;

        }else {
            int j;
            long long f;
            for(j=1;j<n[i];j++){
                f=f1+f2;
                f1=f2;
                f2=f;
            }
            v[i]=f;
        }
        
    }
    for(i=0;i<t;i++){
        printf("Fib(%lld) = %lld\n",n[i],v[i]);
    }
    return 0;
}
