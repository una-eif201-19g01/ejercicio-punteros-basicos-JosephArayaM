/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  Main del Ejercicio de punteros básicos
 *
 *        Created:  2019-08-18
 *
 *         Author:  Joseph Araya Moore / joedarayamo@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include "Punteros.h"
#include <cstdlib>

using namespace std;

void menu();

int main() {

    menu();

    return 0;
}

void menu() {
    int respuesta = 0;
    int valor = 0;
    char hold;

    do {
        cout << "  Menú Calculos con Punteros\n";
        cout << "  ====================================\n";
        cout << "  1.  Imprimir datos del puntero en un valor de entrada\n";
        cout << "  2.  Imprime el número 5 al cubo con función por VALOR\n";
        cout << "  3.  Imprime el número 5 al cubo con función por PUNTERO3\n";
        cout << "  4.  Imprime el número 5 al cubo con función por REFERENCIA\n";
        cout << "\n";
        cout << "  5.  Exit\n";
        cout << "  ====================================\n";
        cout << "  Enter your selection: ";
        cin >> respuesta;
        cout << std::endl;

        switch (respuesta) {
            case 1:
                Punteros::imprimirDatosPuntero();
                std::cin.ignore();
                std::cin.get();
                break;
            case 2:
                Punteros::imprimirCalculoAlCuboReferenciaValor();
                std::cin.ignore();
                std::cin.get();
                break;
            case 3:
                Punteros::imprimirCalculoAlCuboReferenciaPuntero();
                std::cin.ignore();
                std::cin.get();
                break;
            case 4:
                Punteros::imprimirCalculoAlCuboReferenciaReferencia();
                std::cin.ignore();
                std::cin.get();
                break;

            case 5:
                std::cout << "Hasta Luego.\n";
                break;

            default:
                std::cout << respuesta << " es un número inválido\n";

                std::cout << std::endl;
        }
    } while (respuesta != 5);
}

