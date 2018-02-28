//
// Created by juan on 2/21/18.
//

#include "lib/Lista.h"
using namespace std;
int main()
{
    Lista<int> Lista1; // fijos
    Nodo<int> *ap; //fijos
    int valor; // fijos con el tipo de valor que cambia
    for(int i=0; i<3;i++) {
        cout << "Introduzca un numero: " << endl;
        cin >> valor;
        if (Lista1.Vacia()) {
            Lista1.InsComienzo(valor);
            ap=Lista1.ObtPrimero();
        }
        else {

            Lista1.InsDerecho(ap,valor);
            ap=ap->ObtDer();
        }
    }
    //Lista1.InsFinal(ap, 20);
    Lista1.InsOrdenado(7);
  //  Lista1.EliDato(2);
   // ap = Lista1.BuscarElemento(20);
    // cout<<"PosicionAp: "<<ap <<  endl;
    //////////// imprimir
    ap=Lista1.ObtPrimero(); // te vas al primero
    while(ap!=NULL) {  //preguntas si no esta apuntandoa null osea que si hay nodos
        valor=ap->ObtInfo();
      //  valor=ap->ObtInfo(ap); //revisar
        cout << "valor: " << valor << endl;
        ap=ap->ObtDer();
    }
    cout<<"Total"<<Lista1.Total();
   // system("PAUSE");
    return EXIT_SUCCESS;
}