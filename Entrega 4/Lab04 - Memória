//Cassio Luis Junqueira Mellem Filho - 32089694
//Eric Felipeli César Dias Pereira - 41911296
//João Vitor Lima Lipert - 32088876
//o Código foi rodado utilizando gcc no linux

#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/shm.h>
#include <unistd.h>

#define chave 32088876

int main() {

    int idMem;  
    int* mem;  
    int tamanho = 4;    
    char* caminho = "/";

    if ((idMem = shmget(ftok(caminho, chave), tamanho, IPC_CREAT | IPC_EXCL | 0640)) == -1) {
        perror("Falha ao criar");
        exit(1);
    }

    mem = shmat(idMem, 0, 0);
    if (mem == (int*)-1) {
        perror("Falha ao acoplar");
        exit(1);
    }

    *mem = 1;

    printf("Pid do pai - %d:", getpid());
    printf("%d\n", *mem);
    pid_t pid;
    pid = fork();
    wait(NULL);
    if (pid == 0) {
        *mem = *mem + 2;
        printf("Pid do filho - %d:", getpid());
        printf("%d\n", *mem);

    }
    else {
        *mem = *mem * 4;
        printf("Pai, valor final - %d:", getpid());
        printf("%d\n", *mem);

    }

    return 0;
}
