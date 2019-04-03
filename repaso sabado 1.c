#include <stdio.h>
#include <stdlib.h>

int pedirNumero(void);
float sacarPromedio(int suma , int cantidad);
int sacarAprobacion(int notaMinima, int nota);

int main()
{
    int elnumeroIngresado;
    float promedio;
    int estaAprobado;

    elnumeroIngresado = pedirNumero();
    printf("EL LA NOTA ES %d \n",elnumeroIngresado);

    promedio = sacarPromedio(94,5);
    printf("EL PROMEDIO FUE %f",promedio);

    estaAprobado = sacarApronacion(6,elnumeroIngresado);
        if(estaAprobado == 1)
        {
            printf("\n aprobo");
        }
        else
        {
            printf("\n desaprobado");
        }


}

int pedirNumero(void)
{
     int miNumero;
     int numAlumnos;
     int sumaTodos;
     sumaTodos = 0;
     numAlumnos = 0;
     while (numAlumnos < 5)
    {
         printf("ingrese la nota :");
         scanf("%d",&miNumero);

        while(miNumero < 0 || miNumero > 10)
        {
            printf("ingrese numero :");
            scanf("%d",&miNumero);
        }

    sumaTodos = sumaTodos + miNumero;

        numAlumnos++;
    }

}

float sacarPromedio(int suma , int cantidad)
{
    float retorno;
    retorno = (float)suma/cantidad;
    return retorno;

}

int sacarAprobacion(int notaMinima, int nota)
{
    int retorno;
    int sumaAprobados;
    int sumaDesaprobados;
    sumaAprobados = 0;
    sumaDesaprobados = 0;
    if(nota>= notaMinima)
    {
        retorno = 1;
        sumaAprobados++;
    }
    else
    {
        retorno = 0;
        sumaDesaprobados++;
    }
    return retorno;
}
