#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main()
{
    int opciones;
    float primerValor;
    float segundoValor;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    float resultadoFactoreoUno;
    float resultadoFactoreoDos;

    do
    {
        printf ("\n 1. Ingresar 1er operando (A = %.2f ). \n" , primerValor);

        printf ("\n 2. Ingresar 2do operando (B = %.2f). \n" , segundoValor);

        printf ("\n 3. Calcular todas las operaciones: \n");

        printf ("\n 4. Informar resultados: \n");

        printf ("\n 5. Salir. \n");

        opciones = ingresarOpcion();

        switch (opciones)
        {
        case 1:
            system ("cls");
            primerValor = ingresarFlotante();
            system ("pause");
            break;

        case 2:
            system ("cls");
            segundoValor = ingresarFlotante();
            system ("pause");
            break;

        case 3:
            system ("cls");
            resultadoSuma = suma(primerValor , segundoValor);
            resultadoResta = resta(primerValor , segundoValor);
            resultadoMultiplicacion = multiplicacion(primerValor , segundoValor);
            resultadoDivision = division(primerValor , segundoValor);
            resultadoFactoreoUno = factorial(primerValor , segundoValor);
            resultadoFactoreoDos = factorial(primerValor , segundoValor);
            printf ("Calculando...");
            system ("pause");
            break;

        case 4:
            system ("cls");
            printf(" \n El resultado de %2.f + %2.f es: %2.f \n" , primerValor , segundoValor , resultadoSuma);
            printf(" \n El resultado de %2.f - %2.f es: %2.f \n" , primerValor , segundoValor , resultadoResta);
            printf(" \n El resultado de %2.f * %2.f es: %2.f \n" , primerValor , segundoValor , resultadoMultiplicacion);
            printf(" \n El resultado de %2.f / %2.f es: %2.f \n" , primerValor , segundoValor , resultadoDivision);
            printf(" \n El factorial de %2.f es: %2.f y el factorial de %2.f es: %2.f" , primerValor , resultadoFactoreoUno , segundoValor , resultadoFactoreoDos);
            system("pause");
            break;

        case 5:
            opciones = 5;
            break;

        default:
            printf("\n Ingrese una opcion valida! \n");
            system("pause");
        }

        system("pause");
        system("cls");

    }while(opciones != 6);

    return 0;
}
