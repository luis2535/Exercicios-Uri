#include <stdio.h>
int main(){
    int h1, m1, h2, m2;
    int hora, minuto;
    scanf("%d %d %d %d",&h1,&m1,&h2,&m2);
    if((h1==h2) && (m1==m2)){
        hora=24;
        minuto=0;
    }else if((h1==h2) && (m1<m2)){
        hora=h1-h2;
        minuto=m2-m1;
    }else if((h1==h2) && (m1>m2)){
        hora=23;
        minuto=60-(m1-m2);
    }else if((h1<h2) && (m1<=m2)){
        hora = h2-h1;
        minuto = m2-m1;
    }else if((h1<h2) && (m1>m2)){
        hora = h2 - h1 - 1;
        minuto = 60 - (m1-m2);
    }else if((h1>h2) && (m1<=m2)){
        hora = 24-(h1-h2);
        minuto = m2 - m1;
    }else{
        hora = 24 -(h1 - h2)-1;
        minuto = 60 -(m1 -m2);
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hora,minuto);
    return 0;
}