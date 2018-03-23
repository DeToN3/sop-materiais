#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>


int main(int argc, char **argv)
{
    char *name = argv[0];
    int pid = fork();
    if (pid == 0) {
        printf("    ->Filho de %s tem PID %d\n", name, pid);
    } else {
        printf("Meu filho é %d\n", pid);
        printf("Vou esperar o meu filho executar...\n");
        wait(NULL);
        printf("Filho terminou\n");
    }
    return 0; 
}
