#include "Lista.h"
#include <iostream>

using namespace std;

int main()
{
    Elemento* primero = new Elemento("Primero");
    Elemento* segundo = new Elemento("Segundo");
    Elemento* tercero = new Elemento("Tercero");
    Elemento* cuarto = new Elemento("Cuarto");


    Lista* lista = new Lista();
    lista->Agregar(primero);
    lista->Agregar(segundo);
    lista->Agregar(tercero);
    lista->Agregar(cuarto);

    Elemento* i = lista->GetPrimer();

    while(i != nullptr)
    {
        cout << i->GetNombre() << endl;
        i = i->GetSiguiente();
    }
    
    return 0;
}