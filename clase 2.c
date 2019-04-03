#include <stdio.h>
#include <stdlib.h>

void saludar (void);
int dameNumero(void);
float sacarPromedio(int suma ,int cantidad);
void tomarDato(int numero);
int main()
{
    int edad;
    float altura;
    int contador;
    int suma;
    float promedio;
    int numero;
    int limite;
    saludar();
/*
    printf("\n ingrese su edad: ");
    scanf(" %d",&edad);

    printf("\n ingrese su altura: ");
    scanf(" %f",&altura);
*/
    contador = 0;
    suma = 0;
    limite = dameNumero();

    while(contador < limite)
    {
        printf("\n ingrese su numero: ");
        scanf(" %d",&numero);
        contador++;
        suma = suma + numero;
    }
    //promedio = (float)suma / contador;

    premedio = sacarPromedio( suma , contador);
    printf(" el promedio es: %f \n" ,promedio);



/*   printf(" su edad es: %d \n",edad);
     printf(" su altura es: %f" ,altura);
*/
    return 0;
}


void saludar (void)
{
        printf("hola mundo C");
}

int dameNumero(void)
{
    int cantidad;
     printf("\n ingrese la cantidad de iteraciones: ");
        scanf(" %d",&cantidad);
    return cantidad;
}
float sacarPromedio(int suma ,int cantidad)
{
    float promedio;
      promedio = (float)suma / cantidad;
      return promedio;

}
