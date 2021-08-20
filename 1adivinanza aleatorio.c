//CREACION DE ARCHIVO ALEATORIO
/*ya quedo al 100*/

#include <stdio.h>

struct adivinanza {
int numero;
char adivinanza[1000];
char opcion1[1000];
char opcion2[1000];
char opcion3[1000];
char respuesta[1000];
int opjugador;
};

int main()
{

    int num;
    struct adivinanza enblanco = {0, "", "", "", "", "", 0};

    FILE *adi;

    if ( (adi = fopen("C:\\examen1\\adivinanza.txt", "wb")) == NULL){
    printf("Imposible crear archivo.\n");
    }
else{
    for (num=1;num<=10;num++){
        fwrite (&enblanco, sizeof (struct adivinanza), 1, adi);
    }
    fclose(adi);
    printf("Archivo creado con exito.\n");
    }
return 0;
}
