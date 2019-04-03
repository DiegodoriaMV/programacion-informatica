#include <stdio.h>
#include <stdlib.h>

int main()
{

    int numero;
    char letra;
    char palabra[10]; //esto vendria ser un string [10] significa 10 espacios (array )

    printf("ingrese una palabra: ");
    scanf("%s",&palabra);
    printf("la palabra es : %s", palabra);


    /*
    printf("ingrese un numero: ");
    scanf("%d",&numero);

    printf("ingrese una letra: ");
    scanf(" %c",&letra);
    fflush(stdin); //PARA WINDOWS
    //setbuf(stdin, NULL); //PARA LINUX
    printf("el numero es: %d\n LA letra es %c",numero , letra);
*/

    //system("pause");
    return 0;


/*  JS =interpretado
    C =compilado   1ro compilo luego ejecuto

    el main.O hubicado en obj es el codigo maquina 1 y 0
    en la carpeta bin esta el archivo ejecutable q termina en .exe

    #INCLUDE <stdio.h> incluye una biblioteca
    un entero (int)ocupa 4 byte de memoria de memoria
    un char 1 byte (una letra) (por que ocupo 8 ceros o unos)
    strting no esta en C esta en c++

    (%d) enteros
    (%f) float
    (%c) caracteres
    & y el nombre de la variable muestra la direccion de la memoria


*/
}
