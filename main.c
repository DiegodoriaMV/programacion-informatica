#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mostrarVector (int datos[],int tamanio);
//void mostrarPalabra();
void cargarVector(int datos[],int tamanio);
void ordenarVector(int datos[],int tamanio);

int main()
{
    char usuario [10][10]= {"jose", "ariana","zues","mercedes","carla"}; //este puede ser tomado por string ; es una palabra
    int nota[10] = {8,5,2,10,3};
    int i;
    int j;

    mostrarVector(nota ,5);


    /*
     for(i=0;i<5;i++)
    {
        printf("\n alumno %s nota : %d \n" , usuario[i] , nota[i]);
    }
*/
    for (i=0; i<5; i++)
    {
        for(j=0; j <4; j++)
        {
          if( strcmp(usuario[i],usuario[j]) == -1)
            {
                int aux = nota[i];
                    nota[i]= nota[j];
                    nota[j]= aux;

                    char auxString[10];
                    strcpy(auxString , usuario[i]);
                    strcpy( usuario[i], usuario[j]);
                    strcpy( usuario[j], auxString);
            }

        /*
            printf("%d => %d  \n",nota[i],nota[j]);
          //mal  if(usuario[i] < usuario[j])
          int resultado;
            resultado = strcmp("hola", "hola");
            printf("iguales :%d", resultado);
            resultado = strcmp("hola", "hola");
            printf("\n primera :%d", resultado);
            resultado = strcmp("hola", "hola");
            printf("\n segunda :%d", resultado);
            resultado = strcmp("hola", "hola");

            resultado = strcmp("A", "a");//-1
            printf("\n La A :%d", resultado);
            resultado = strcmp("a", "b");
            printf("\n La a-b :%d", resultado);
            resultado = strcmp("b", "a");
            printf("\n La b-a :%d", resultado);


            resultado = strcmp(usuario[i],usuario[j]);
    */
        }


    }

    /*
    //metodo de ordenamiento por nota
    for (i=0; i<5; i++)
    {
        for(j=0; j <4; j++)
        {
            printf("%d => %d  \n",nota[i],nota[j]);
            if(nota[i] < nota[j])
            {
                int aux = nota[i];
                    nota[i]= nota[j];
                    nota[j]= aux;

                    char auxString[10];
                    strcpy(auxString , usuario[i]);
                    strcpy( usuario[i], usuario[j]);
                    strcpy( usuario[j], auxString);
            }
        }
    }

    */

    /*


    //cambio de arrays en paralelo
    for(i=0;i<5;i++)
    {
        //usuario[i][10]= " ";
        strcpy(usuario[i]," ");
        nota[i] = 0;
    }
    */

    // carga secuencial de arrays en paralelo
    for(i=0;i<5;i++)
    {
        printf("\n ingrese usuario #%d : ",i+1);
        //scanf("%s",usuario[i]);
        gets(usuario[i]);

    }
    for(i=0;i<5;i++)
    {
        printf("\n alumno #%s : ",usuario);


    }



/*
    printf("ingrese el usuario \n");
    scanf("%s",usuario[0]);

    printf("ingrese el usuario \n");
    scanf("%s",usuario[1]);

    int tamanio = strlen(usuario[8]);
    printf("tamaño :%d \n",tamanio);

    strcpy(usuario[0],"hola");

    printf("test %s \n" , usuario[0]);
    printf("test %s \n" , usuario[1]);



    printf("hello %s \n" , usuario[1]);
    */
    return 0;

}
void mostrarVector (int datos[],int tamanio)
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        printf("nota : %d \n", datos[i]);
    }
}

void cargarVector(int datos[],int tamanio);
{
    int i;
    for(i=0;i<tamanio;i++)
    {
        datos[i]=-1;

    }
}
}


