#include <stdio.h>
int main(){
    int x,y;
    scanf("%d",&x);
    scanf("%d",&y);
    if(y<=x){
        while(y<=x){
            scanf("%d",&y);
        }
    }
    int cont=1, aux=x;
    while(aux<=y){
        x++;
        aux+=x;
        cont++;
    }
    printf("%d\n",cont);
    return 0;
}