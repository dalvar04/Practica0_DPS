#include <stdio.h>
#include <stdlib.h>

#define MAX 20

char *mensaje2=NULL;
char *mensaje="HOLA MUNDO";

int main(int argc, char **argv) {

    printf("%s", mensaje);
    mensaje2=(char *)malloc(sizeof(char)*MAX);

    if (mensaje2==NULL) {
        printf("Error al asignar memoria");
        return 1;
    }

    free(mensaje2);

    return 0;
}