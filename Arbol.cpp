#include "Arbol.h"
#include <iostream>

Arbol::Arbol(Nodo *raiz) : _raiz(raiz)
{
}

void Arbol::Recorrer(Nodo *nodo)
{
    for (int i = 0; i < nodo->GetNivel(); i++)
    {
        std::cout << "\t";
    }
    std::cout << nodo->GetNombre() << std::endl;
    Nodo *i = nodo->GetPrimerHijo();
    while (i != nullptr)
    {
        Recorrer(i);
        i = i->GetSiguiente();
    }
}
void Arbol::Recorrer()
{
    Recorrer(_raiz);
}
