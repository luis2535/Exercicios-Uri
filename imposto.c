#include <stdio.h>
int main(){
    double salario;
    scanf("%lf",&salario);
    double aux;
    double imposto;
    if(salario<=2000){
        printf("Isento\n");
    }else if (salario <=3000){
        aux= salario - 2000;
        imposto=aux*0.08;
        printf("R$ %.2lf\n",imposto);
    }else if(salario <=4500){
        aux = salario - 3000;
        imposto=aux*0.18 + 1000*0.08;
        printf("R$ %.2lf\n",imposto);
    }else{
        aux= salario - 4500;
        imposto = aux*0.28 + 1500*0.18 +1000*0.08;
        printf("R$ %.2lf\n",imposto);
    }
    return 0;
}