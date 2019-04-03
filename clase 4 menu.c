#include <stdio.h>
#include <stdlib.h>

int pedirOpcionesMenu(char texto[]);

int main()
{

    int opcion;
    char seguir = 's';
    do
    {
        opcion = pedirOpcionesMenu("1. suma \n 2. Baja \n 3. restar: \n 4. Informes: \n 5. Salir: \n Elija una opcion: \n");

        switch(opcion)
        {
            case 1:
                printf("estoy dando de alta \n");
            break;
            case 2:
                printf("estoy dando de baja \n");
            break;
            case 3:
                printf("estoy modificando \n");

            break;
            case 4:
                printf("estoy informando \n");
            break;
            case 5:
                seguir = 'n';
            break;
            default:
                printf("opcion icorrecta \n");
                break;
        }


    system("pause");
    system("cls");

    }while(seguir == 's');



    return 0;
}

int pedirOpcionesMenu(char texto[])
{
    int opcion;
    printf("%s", texto);

    scanf("%d", &opcion);

    return opcion;
}

/*
a = x
x luego va a ser reemplazado por el numero
*/
