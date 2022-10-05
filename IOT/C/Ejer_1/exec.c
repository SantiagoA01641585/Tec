#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Prueba\n");

    int pid = fork();
    
    if(pid == 0){
        printf("Soy el proceso hijo\n");
        execl("/workspace/Tec/IOT/C/Ejer_1/hola", "hola", NULL);
        printf("Esto no debe de ejecutarse\n");
    } 
    
    else {
        printf("Soy el proceso padre\n");
    }
    return 0;
}