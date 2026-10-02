#include <stdio.h>

//cambio
#include <stdlib.h>
//

#define MAX 20

// cambio int seguidores;
char *mensaje2=NULL;
// cambio static int maxValue;
char *mensaje="HOLA MUNDO";

int main(int argc, char **argv) {
    // cambio int i;
    // cambio int j=5;
    printf("%s", mensaje);
    mensaje2=(char *)malloc(sizeof(char)*MAX);

    //cambio
    if (mensaje2==NULL) {
        printf("Error al asignar memoria");
        return 1;
    }

    free(mensaje2);

    return 0;
}