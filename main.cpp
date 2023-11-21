#include "Arbol.h"

int main()
{
    Nodo presidente("Presidente");
    Nodo vp1("vp 1");
    Nodo vp2("vp 2");
    Nodo supervisor1("supervisor 1");
    Nodo supervisor2("supervisor 2");
    Nodo operario1("Operario 1");
    Nodo operario2("Operario 2");

    presidente.AgregarHijo(&vp1);
    presidente.AgregarHijo(&vp2);

    vp1.AgregarHijo(&supervisor1);
    vp2.AgregarHijo(&supervisor2);

    supervisor1.AgregarHijo(&operario1);
    supervisor1.AgregarHijo(&operario2);

    Arbol arbol(&presidente);
    arbol.Recorrer();

    return 0;
}