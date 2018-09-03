#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int ingresarOpcion(void)
{
    int numero;

    printf("Ingrese una opcion: ");
    scanf("%d" , &numero);

    return numero;
}
float ingresarFlotante(float)
{
    float numero;

    printf("Ingrese operando: ");
    scanf("%f" , &numero);

    return numero;
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
        for (factorDeUno = factorUno ; factorDeUno > 0 ; factorDeUno--)
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
        for (factorDeDos = factorUno ; factorDeDos > 0 ; factorDeDos--)
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
