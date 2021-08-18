#include <stdio.h>
int main(){
    int horas, velocidade;
    float gasto;
    scanf("%d",&horas);
    scanf("%d",&velocidade);
    gasto = (velocidade*horas)/12.0;
    printf("%.3f\n",gasto);
    return 0;
}