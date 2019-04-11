#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CANTIDAD_ALUMNOS 4

void getString(char mensaje[], char input[]);
int getStringLetras(char mensaje[],char input);
int getStringNumeros(char mensaje[],char input);
int main()
{
    char nombres[CANTIDAD_ALUMNOS] [50] = {"Agustin","Alan","Fede","Lean"}; // x2 []
    char apellido[CANTIDAD_ALUMNOS] [50] = {"MORATO","TINTE","MIRANDA","CARDENAS"};
    int edad[CANTIDAD_ALUMNOS] = {18,21,31,25};
    int notas[CANTIDAD_ALUMNOS] = {2,6,10,9};

    int i;
    for (i = 0; i< CANTIDAD_ALUMNOS; i++)
    {
        if(nombres[i] != -1)
        {
            printf("\nSu nombre es : %s \n Su apellido es : %s\n Su edad es : %i\n Su nota es %i\n",nombres[i],apellido[i],edad[i],notas[i]);
        }
    }
    char unNombre[50];

    //getString("\n\n ingrese el nombre",unNombre);

    //  printf("EL NOMBRE ES : %s", unNombre);

    strcpy(nombres[0],unNombre);

     for (i = 0; i< CANTIDAD_ALUMNOS; i++)
    {
       getString("\n\n ingrese nombre : ",nombres [i]);
    }

    for (i = 0; i< CANTIDAD_ALUMNOS; i++)
    {
        if(nombres[i] != -1)
        {
            printf("\nSu nombre es : %s \n Su apellido es : %s\n Su edad es : %i\n Su nota es %i\n",nombres[i],apellido[i],edad[i],notas[i]);
        }
    }



 /*
    printf("INGRESE SU NOMBRE\n ");
    scanf("%[^\n]",&nombre); //hace que no se corte en el espacio
    printf("SU nombre es %s",nombre);
*/

    printf("\n\nAarrays en paralelo");
    return 0;
}

    void getString(char mensaje[], char input[])
    {
        printf(mensaje);
        scanf("%s",input);

    }
/*
      int getStringLetras(char mensaje[],char input);
    {
        char aux[];
        getString(mensaje,aux);
    }
  */
/*
  int esSoloLetras(char palabra[])
  {
      int i;
      //while/for

      if (palabra[] != " ")
      {
          if(palabra[i] < "a" && palabra[] > "z")
          {

          }
      }
  }
*/
