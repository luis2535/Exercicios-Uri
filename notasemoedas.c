#include <stdio.h>
int main(){
    double notas[12]= {100, 50, 20, 10, 5, 2,1, 0.50, 0.25, 0.10, 0.05, 0.01};
    double valor;
    int i;
    scanf("%lf",&valor);
    for(i = 0; i<12 ; i++){
        int n=0;
        if(valor>=notas[i]){
            n=valor/notas[i];
            valor = valor - n*notas[i];
            if(notas[i]<2){
                valor = valor + 0.00001;
            }
        }
        if(notas[i]==100){
            printf("NOTAS:\n");
        }
        if(notas[i]==1){
            printf("MOEDAS:\n");
        }
        if(notas[i]>1){
            printf("%d nota(s) de R$ %.2lf\n",n,notas[i]);
        }else{
            printf("%d moeda(s) de R$ %.2lf\n",n,notas[i]);
        }
    }
    return 0;
}