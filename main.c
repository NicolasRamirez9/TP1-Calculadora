#include <stdio.h>
#include <stdlib.h>
float suma (float , float);
float resta (float , float);
float multiplicacion (float , float);
float division (float , float);
float factorial (float , float);

int main()
{
    int operacion;
    float numeroUno;
    float numeroDos;
    float resultado;
    int respuesta = 1;

    do
    {
        printf ("1- Suma (+)./n");

        printf ("2- Resta (-)./n");

        printf ("3- Division (/)./n");

        printf ("4- Multiplicacion (*)./n");

        printf ("5- Factoreo./n");

        printf ("Selecciona la operacion que desee ejecutar: ");
        scanf ("%d" , &operacion);

        switch (operacion)
        {
        case 1:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &numeroUno);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &numeroDos);
            suma (numeroUno , numeroDos);
            resultado = suma (numeroUno , numeroDos);
            printf("El resultado de " , numeroUno , " + " , numeroDos , " es: %.2f \n" , resultado);
            system ("cls");
            break;

        case 2:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &numeroUno);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &numeroDos);
            resta (numeroUno , numeroDos);
            resultado = resta (numeroUno , numeroDos);
            printf("El resultado de " , numeroUno , " - " , numeroDos , " es: %.2f \n" , resultado);
            system ("cls");
            break;

        case 3:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &numeroUno);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &numeroDos);
            multiplicacion (numeroUno , numeroDos);
            resultado = multiplicacion (numeroUno , numeroDos);
            printf("El resultado de " , numeroUno , " * " , numeroDos , " es: %.2f \n" , resultado);
            system("cls");
            break;

        case 4:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &numeroUno);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &numeroDos);
            division (numeroUno , numeroDos);
            resultado = division (numeroUno , numeroDos);
            printf("El resultado de " , numeroUno , " / " , numeroDos , " es: %.2f \n" , resultado);
            system ("cls");
            break;

        case 5:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &numeroUno);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &numeroDos);
            factorial (numeroUno , numeroDos);
            resultado = factorial (numeroUno , numeroDos);
            printf("El factorial de " , numeroUno , " es: %2.f ", resultado , " y el factorial de " , numeroDos , " es: %2.f " , resultado);
            system ("cls");
            break;

        default:
            printf("¡Ingrese una opcion valida! \n");
        }
    }while(operacion != 6 );

    return 0;
}
