#include <stdio.h>
#include <stdlib.h>
float suma (float , float);
float resta (float , float);
float multiplicacion (float , float);
float division (float , float);
float factorial (float , float);

int main()
{
    int opciones;
    float primerValor;
    float segundoValor;
    float resultado;
    char respuesta;

    do
    {
        printf ("1- Suma (+).\n");

        printf ("2- Resta (-).\n");

        printf ("3- Multiplicacion (*).\n");

        printf ("4- Division (/).\n");

        printf ("5- Factoreo.\n");

        printf("6- Salir.\n");

        printf ("Selecciona la operacion que desee ejecutar: \n");
        scanf ("%d" , &opciones);

        switch (opciones)
        {
        case 1:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &primerValor);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &segundoValor);
            suma (primerValor , segundoValor);
            resultado = suma (primerValor , segundoValor);
            printf("El resultado de %2.f + %2.f es: %.2f \n" , primerValor , segundoValor , resultado);
            break;

        case 2:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &primerValor);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &segundoValor);
            resta (primerValor , segundoValor);
            resultado = resta (primerValor , segundoValor);
            printf("El resultado de %2.f - %2.f es: %.2f \n" , primerValor , segundoValor , resultado);
            break;

        case 3:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &primerValor);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &segundoValor);
            multiplicacion (primerValor , segundoValor);
            resultado = multiplicacion (primerValor , segundoValor);
            printf("El resultado de %2.f * %2.f es: %.2f \n" , primerValor , segundoValor , resultado);
            break;

        case 4:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &primerValor);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &segundoValor);
            division (primerValor , segundoValor);
            break;

        case 5:
            system ("cls");
            printf ("Ingrese el primer numero: ");
            scanf ("%f" , &primerValor);
            printf ("Ingrese el segundo numero: ");
            scanf ("%f" , &segundoValor);
            factorial (primerValor , segundoValor);
            break;

        case 6:
            opciones = 6;
            break;

        default:
            printf("¡Ingrese una opcion valida! \n");
        }

        system("pause");
        system("cls");

    }while(respuesta != 6);

    return 0;
}
float suma (float sumaUno , float sumaDos)
{
    float sumar;
    sumar = sumaUno + sumaDos;
    return sumar;
}
float resta (float restaUno , float restaDos)
{
    float restar;
    restar = restaUno - restaDos;
    return restar;
}
float multiplicacion (float multiplicarUno , float multiplicarDos)
{
    float multiplicar;
    multiplicar = multiplicarUno * multiplicarDos;
    return multiplicar;
}
float division(float dividirUno , float dividirDos)
{
    float dividir;
    if (dividirDos != 0)
    {
        dividir = dividirUno / dividirDos;
        printf("El resultado de %2.f / %2.f es: %.2f \n" , dividirUno , dividirDos , dividir);
    }
    else
    {
        printf("¡No es posible dividir por cero!");
    }
    return dividir;
}
float factorial(float factorUno , float factorDos)
{
    float factorDeUno;
    float factorDeDos;
    float valorUno;
    float valorDos;

    valorUno = 1;
    valorDos = 1;

    if (factorUno > 0)
    {
        for (factorDeUno = factorUno ; factorDeUno > 1 ; factorDeUno--)
        {
            valorUno = valorUno * factorDeUno;
        }
        printf ("El factor de %.2f es: %.2f \n" , factorUno , valorUno );
    }
    else
    {
        printf("\n No se puede factorear un numero negativo! \n");
    }
    if (factorDos > 0)
    {
        for (factorDeDos = factorUno ; factorDeDos > 1 ; factorDeDos--)
        {
            valorDos = valorDos * factorDeDos;
        }
        printf ("El factor de %.2f es: %.2f \n" , factorDos , valorDos );
    }
    else
    {
        printf("\n No se puede factorear un numero negativo! \n");
    }
}
