#pragma once

#include "Nodo.h"

class Arbol
{
public:
    Arbol(Nodo *raiz);
    void Recorrer(Nodo *nodo);
    void Recorrer();

private:
    Nodo *_raiz;
};
