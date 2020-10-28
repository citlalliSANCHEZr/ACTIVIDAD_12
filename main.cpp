#include <iostream>
#include "arreglo.h"

using namespace std;

void modificar(int *a)
{
    *a = *a + 1;

}
int main()
{
    Arreglo arreglo;
    arreglo.insertar_final("9_SEPTIEMBRE");
    arreglo.insertar_final("10_OCTUBRE");
    arreglo.insertar_final("11_NOVIENBRE");
    arreglo.insertar_final("12_DIECIEMBRE");
    arreglo.insertar_final("13_PRIMAVERA");
    arreglo.insertar_final("14_VERANO");
    arreglo.insertar_final("15_OTONO");
    arreglo.insertar_final("16_INVIERNO");
    arreglo.insertar_inicio("8_AGOSTO");
    arreglo.insertar_inicio("7_JULIO");
    arreglo.insertar_inicio("6_JUNIO");
    arreglo.insertar_inicio("5_MAYO");
    arreglo.insertar_inicio("4_ABRIL");
    arreglo.insertar_inicio("3_MARZO");
    arreglo.insertar_inicio("2_FEBRERO");
    arreglo.insertar_inicio("1_ENERO");
    cout << endl;

    for(size_t i = 0; i < arreglo.size(); i++)
    {
        cout << arreglo[i] << " ";
    }
    return 0;
}
