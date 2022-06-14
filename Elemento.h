#pragma once

#include <string>

class Elemento
{
public:
    Elemento(std::string nombre);

    std::string GetNombre() { return _nombre; }
    Elemento *GetSiguiente() { return _siguiente; }
    void SetSiguiente(Elemento *siguiente) { _siguiente = siguiente; }

private:
    Elemento *_siguiente;
    std::string _nombre;
};
