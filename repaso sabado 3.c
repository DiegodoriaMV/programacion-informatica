#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int dameEdad(int *edad, char *mensaje); //puntero direccion a memoriaprin
int dameEdadDos(int* edad, char *mensaje); //firma
int dameEdadTres(int* edad, char *mensaje);

int dameEdadConIntentos(int* edad, char *mensaje ,int intentos);

int main()
{
    int miEdad;
    int seCargo;
    int contador = 0;
    do
    {
        seCargo = dameEdadTres(&miEdad, "\n que edad tenes? :");
        contador++;
    }while(seCargo ==0);

    int resp = dameEdadDos(); //dameEdadtres();
    if resp(resp == 0)
    {
        //se le terminaron los intentos
    }
/*

    if(contador <3)
    {
    printf("la edad ingresada es : %d", miEdad);
    }
    else
    {
        printf("perdio")
    }

*/
    /*
    seCargo = dameEdadDos(&miEdad, "\n que edad tenes? :");
    */

    return 0;

}

int dameEdadConIntentos(int* edad, char *mensaje ,int intentos)
{

}
int dameEdadTres(int* edad, char *mensaje)
{
    char cadenaCargada[20]; //
    int sePudo =1;
    int i;
    printf(mensaje);
    scanf("%s", cadenaCargada);
    //char pepito[45];
    //srtcpy(pepito, "3L"); //mide 2
    for(i = 0; i < strlen(cadenaCargada) ;i++) //strlen te dice cuanto mide;
    {
        if(cadenaCargada[i]< '0' || cadenaCargada[i] >'9' && cadenaCargada[i] != "\0")
        {
            sePudo = 0;
        }

    }
    if(sePudo == 1)
    {
        *edad = atoi(cadenaCargada);
    }

    return sePudo;
}


/** \brief utiliza el atoi para cuando ingrese una letra me develca cero (conversion)
 *
 * \param edad int*
 * \param mensaje char*
 * \return retorna 1 ya q la funcion si es letra devuelve cero
 *
 */
int dameEdadDos(int* edad, char *mensaje)
{
    char cadenaCargada[20]; //
    int sePudo =1;

    printf(mensaje);
     scanf("%s", cadenaCargada);
    *edad= atoi(cadenaCargada);


    return sePudo;
}


/** \brief en esta funcion la edad
 *
 * \param edad int*
 * \param mensaje char*
 * \return int retorna 1 que se pudo
 *
 */
int dameEdad(int* edad, char *mensaje)
{
    int sePudo =0;
    int aux;
    printf(mensaje);
    sePudo = scanf("%d", &aux);

    if (sePudo== 1)
    {
        *edad= aux;    //ESTE ANDA
        //edad= aux;

    }
    return sePudo;
}
