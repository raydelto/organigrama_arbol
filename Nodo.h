#include <string>

class Nodo
{
public:
    Nodo(std::string nombre);
    void AgregarHijo(Nodo *hijo);
    Nodo *GetPrimerHijo();
    Nodo* GetSiguiente();
    std::string GetNombre();
    int GetNivel();

private:
    std::string _nombre;
    Nodo *_siguiente;
    Nodo *_primerHijo;
    Nodo *_ultimoHijo;
    int _nivel;
};