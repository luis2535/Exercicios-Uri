#include <stdio.h>
int main(){
    int t;
    int i;
    scanf("%d",&t);
    int v[t];
    int cont = 0;
    for(i=0;i<t;i++){
    int pa,pb;
    double g1,g2;
    int aux1, aux2;
    scanf("%d %d %lf %lf",&pa,&pb,&g1,&g2);
        while(pa<=pb){
            aux1=pa + ((pa*g1)/100);
            aux2=pb + ((pb*g2)/100);
            pa=aux1;
            pb=aux2;
            cont++;
            if(cont>100){
                break;
            }
        }
        v[i]=cont;
        cont=0;
    }
    for(i=0;i<t;i++){
        if(v[i]==101){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n",v[i]);
        }
    }
    return 0;
}