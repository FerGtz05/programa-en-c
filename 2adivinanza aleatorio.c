//ESCRITURA EN UN ARCHIVO DE ACCESO ALEATORIO
/*nota y advertencia en la linea 18*/

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
    printf("Introduzca numero de la adivinanza"
           " (1 a 10, 0 para terminar la entrada)\n? ");
    scanf("%d", &numerodeadivinanza.numero);

    while (numerodeadivinanza.numero !=0){
     printf("%-10d %-50s %-20s %-20s %-20s %-20s" , "numero", "adivinanza", "opcion 1", "opcion 2", "opcion 3" "  respuesta");
     fscanf(stdin, "%d %s %s %s %s %s", numerodeadivinanza.num, numerodeadivinanza.adivinanza, numerodeadivinanza.opcion1, numerodeadivinanza.opcion2, numerodeadivinanza.opcion3, numerodeadivinanza.respuesta);

     fseek( adi, (numerodeadivinanza.numero - 1) *
     sizeof( struct adivinanza), SEEK_SET);

     fwrite(&numerodeadivinanza, sizeof(struct adivinanza), 1, adi);

     printf("Introdusca numero de la adivinanza\n?");
     scanf("%d", &numerodeadivinanza.numero);
    }
    fclose(adi);
}
return 0;
}
