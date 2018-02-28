#ifndef Lista_H
#define Lista_H
#include "Nodo.h"
#include <iostream>
using namespace std;
template <class Tipo>
class Lista
{  
typedef Nodo<Tipo>* Apuntador;
private:
        Nodo<Tipo>* primero;             
public:
         
         Lista();
         Nodo<Tipo>* ObtPrimero();
         Nodo<Tipo>* ObtUltimo(); //hice yo
         Nodo<Tipo>* BuscarElemento(Tipo valor); //hice yo
         void AsigPrimero(Nodo<Tipo>* p);
         bool Vacia();
         bool Llena();
         int Total(); // me
         bool InsComienzo(Tipo valor);
         bool InsOrdenado(Tipo valor);
         bool EliComienzo(Tipo &valor);
         bool EliDato(Tipo valor);
         bool InsFinal(Apuntador p,Tipo valor);
         bool InsDerecho(Apuntador p,Tipo valor);
         bool EliDerecho(Apuntador p,Tipo &valor);
         ~Lista();
         	     

};

#include "Lista.cpp"
#endif
