#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int trabaja;

void holaMundo(int signalNumber){
    if (signalNumber == 10){
        printf("Es la senal 10\n");
    }
    else{
        printf("Es otra senal\n");
    }
    trabaja = 0;
}

void nomematas(int sig){
    printf("jajajaja, no me matas\n");
}

int main(){
    trabaja = 1;

    signal(12, holaMundo);
    signal(10, holaMundo);
    signal(2, nomematas);

    while(trabaja){
        printf("Estoy trabajando\n");
        sleep(1);
    }
    printf("Nunca llega\n");

    return 0;
}