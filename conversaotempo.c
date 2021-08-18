#include <stdio.h>
int main(){
    int tempo, horas=0, minutos=0, segundos=0;
    scanf("%d",&tempo);
    if(tempo >=3600){
        horas = tempo/3600;
        tempo = tempo - horas*3600;
    }
    if (tempo >= 60){
        minutos = tempo/60;
        tempo = tempo - minutos*60;
    }
    if (tempo > 0){
        segundos = tempo;    
    }
    printf("%d:%d:%d\n",horas,minutos,segundos);
    return 0;
}