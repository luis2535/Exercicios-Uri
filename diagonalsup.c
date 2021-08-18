#include<stdio.h>
int main(){
    double M[12][12];
    int i,j,cont=0;
    char t;
    double soma=0,media=0;
    scanf("%c",&t);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
           if(i<j){
                soma+=M[i][j];
                cont++;
           }
        }
    }
    if(t=='S'){
        printf("%.1lf\n",soma);
    }else if(t=='M'){
        media=soma/cont;
        printf("%.1lf\n",media);
    }
    return 0;
}