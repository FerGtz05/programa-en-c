//LECTURA DE ARCHIVO DE ACCESO ALEATORIO

#include <stdio.h>

struct adivinanza {
int numero;/*ya no me acuerdo para que era este*/
int num;//numero de la adivinanza
char adivinanza[1000];
char opcion1[1000];
char opcion2[1000];
char opcion3[1000];
char respuesta[1000];
int opjugador;//lo que el jugador elige
};

int main()
{
    FILE *adi;

    struct adivinanza numerodeadivinanza = {0, "", "", "", "", "", 0};

     if ( (adi = fopen("C:\\examen\\adivinanza.txt", "rb+")) == NULL){
    printf("Imposible crear archivo.\n");
    }
else{
    printf("%-10d %-50s %-20s %-20s %-20s %-20s" , "numero", "adivinanza", "opcion 1", "opcion 2", "opcion 3" "  respuesta");

    while(!feof(adi)){
        fread(&numerodeadivinanza, sizeof (struct adivinanza), 1, adi);
    if (numerodeadivinanza.adivinanza != 0){
        printf("%-10d %-50s %-20s %-20s %-20s %-20s\n",
        numerodeadivinanza.num, numerodeadivinanza.adivinanza,
        numerodeadivinanza.opcion1, numerodeadivinanza.opcion2,
        numerodeadivinanza.opcion3, numerodeadivinanza.respuesta);
    }
    }
    fclose(adi);
    }

return 0;
}
