#include <stdio.h>
int main(){
    float n1,n2,n3,n4;
    float media;
    scanf("%f %f %f %f",&n1, &n2, &n3, &n4);
    media = (n1*2 + n2*3 + n3*4 + n4*1)/10;
    if(media>=7.0){
        printf("Media: %.1f\n",media);
        printf("Aluno aprovado.\n");
    }else if(media<5){
        printf("Media: %.1f\n",media);
        printf("Aluno reprovado.\n");
    }else{
        printf("Media: %.1f\n",media);
        printf("Aluno em exame.\n");
        float n5;
        float mediaexame;
        scanf("%f",&n5);
        mediaexame = (media+n5)/2;
        printf("Nota do exame: %.1f\n",n5);
        if(mediaexame > 5){
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n",mediaexame);
        }else{
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n",mediaexame);
        }

    }
    return 0;
}