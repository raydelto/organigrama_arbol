#include "Nodo.h"

Nodo::Nodo(std::string nombre) : _nombre(nombre),
                                 _primerHijo(nullptr),
                                 _ultimoHijo(nullptr),
                                 _siguiente(nullptr),
                                 _nivel(0)
{
}

void Nodo::AgregarHijo(Nodo *hijo)
{
    hijo->_nivel = _nivel + 1;
    if (_primerHijo == nullptr) // Si la lista está vacía
    {
        _primerHijo = hijo;
    }
    else
    {
        _ultimoHijo->_siguiente = hijo;
    }
    _ultimoHijo = hijo;
}

Nodo *Nodo::GetPrimerHijo()
{
    return _primerHijo;
}

std::string Nodo::GetNombre()
{
    return _nombre;
}

Nodo *Nodo::GetSiguiente()
{
    return _siguiente;
}


int Nodo::GetNivel()
{
    return _nivel;
}