#include "Lista.h"

template <class Tipo>
Nodo<Tipo>* Lista<Tipo>::ObtPrimero(){
  return primero;          
};
template <class Tipo>
Nodo<Tipo>* Lista<Tipo>::ObtUltimo(){
    Nodo<Tipo>* ap = this->primero;
    Nodo<Tipo>* apn;
    while(ap !=NULL) {  //preguntas si no esta apuntando a null osea que si hay nodos
        cout<<ap->ObtInfo()<<endl;
        if (ap->ObtDer() == NULL){
            apn=ap;
        }
        ap=ap->ObtDer();
    }
    cout<<apn<<apn->ObtInfo()<<endl;
    return apn;
};
template <class Tipo>
Nodo<Tipo>* Lista<Tipo>::BuscarElemento(Tipo valor){
    Nodo<Tipo>* ap = this->primero;
    while(ap !=NULL) {  //preguntas si no esta apuntando a null osea que si hay nodos
        if (ap->ObtInfo() == valor){
           return ap;
        }
        ap=ap->ObtDer();
    }
   return ap;
};

template <class Tipo>
void Lista<Tipo>::AsigPrimero(Nodo<Tipo>* p){
     primero=p;
};

template <class Tipo>
Lista<Tipo>::Lista()
{
     primero=NULL;
};

template <class Tipo>
bool Lista<Tipo>::Vacia()
{
  return primero == NULL;
};

template <class Tipo>
bool Lista<Tipo>::Llena()
{
  Nodo<Tipo> *p;
  p=new Nodo<Tipo>;
  if (p==NULL)
     return true;
  else
    { 
      delete p;
      return false;       
    }   
};
template <class Tipo>
int Lista<Tipo>::Total(){
    int total=0;
    Nodo<Tipo>* ap = this->primero;
    while(ap!=NULL) {  //preguntas si no esta apuntando a null osea que si hay nodos
        ap=ap->ObtDer();
        total++;
    }

   /* while (!Vacia())
    {
        p=primero->ObtDer();

        primero=p;
    }*/
    return total;
};
template <class Tipo>
Lista<Tipo>::~Lista()
{
 Nodo<Tipo> *p;
  while (!Vacia())
   {
        p=primero->ObtDer();
        delete primero;
        primero=p;     
   };
 
};

template <class Tipo>
bool Lista<Tipo>::InsComienzo(Tipo Valor)
{
  Apuntador nuevo;
  if (!Llena()) 
     {
      nuevo=new Nodo<Tipo>;
      nuevo->AsigInfo(Valor);
      nuevo->AsigDer(primero);
      primero=nuevo;
      return true;
     }
  else
      return false;    
};
template <class Tipo>
bool Lista<Tipo>::InsOrdenado(Tipo Valor)
{
    if (!Llena())
    {
        Nodo<Tipo>* ap = this->primero;
        Nodo <Tipo>*  mayor;
        mayor->AsigInfo(0);
        while(ap !=NULL) {  //preguntas si no esta apuntando a null osea que si hay nodos
             if (ap->ObtInfo() <= mayor->ObtInfo()){
                 mayor=ap;
                 //this->InsDerecho(ap,Valor)
            }
                 ap=ap->ObtDer();

        }
        if (mayor->ObtInfo() != 0){
            this->InsDerecho(mayor,Valor);
        }else{
            this->InsComienzo(Valor);
        }
        // se salio
       // this->InsDerecho(mayor,Valor);

        return true;
    }
    else
        return false;
};
template <class Tipo>
bool Lista<Tipo>::InsFinal(Apuntador p, Tipo Valor)
{
    Apuntador nuevo;
    if (!Llena())
        if (Vacia())
        {
            InsComienzo(Valor);
            p = ObtPrimero();
        }
        else if (p==NULL)
            return false;
        else
        {
            nuevo=new Nodo<Tipo>;
            nuevo->AsigInfo(Valor);
            nuevo->AsigDer(NULL); //el ultimo no va a apuntar a nadie
            cout<<"aqui"<<endl;
            this->ObtUltimo()->AsigDer(nuevo);
            //p->AsigDer(nuevo);
            return true;
        }
    else
        return false;
};

template <class Tipo>
bool Lista<Tipo>::EliComienzo(Tipo &valor)
{
  Apuntador viejo;
  if (!Vacia()) 
     {
      viejo=primero;          
      valor=viejo->ObtInfo();
      primero=primero->ObtDer();
      delete viejo;
      return true;
     }
  else
      return false;    
};

template <class Tipo>
bool Lista<Tipo>::InsDerecho(Apuntador p,Tipo valor)
{
  Apuntador nuevo;
  if (!Llena())
      if (Vacia()) 
         {
            InsComienzo(valor);
            p = ObtPrimero();
         }
      else if (p==NULL)
         return false;
      else
         {          
               nuevo=new Nodo<Tipo>;
               nuevo->AsigInfo(valor);
               nuevo->AsigDer(p->ObtDer());
               p->AsigDer(nuevo);
               return true;

         }
  else
      return false;    
};


template <class Tipo>
bool Lista<Tipo>::EliDerecho(Apuntador p,Tipo &valor)
{
  Apuntador viejo;  
     if (p==NULL)
         return false;
     else
        if (p->ObtDer()==NULL)
           return false;
        else   
             {                
                   viejo=p->ObtDer();          
                   valor=viejo->ObtInfo();
                   p->AsigDer(viejo->ObtDer()); // le asigna al derecho del apuntador lo que estaba apuntando viejo
                   delete viejo;
                   return true;
             };
};

template <class Tipo>
bool Lista<Tipo>::EliDato(Tipo valor)
{
    Apuntador viejo;
    Nodo<Tipo> *p;
    p=this->BuscarElemento(valor);
    cout<<"valor a buscar: "<<p->ObtInfo()<<endl;
    if (p != 0){
        viejo=p->ObtDer();
        viejo->ObtInfo();
        p->AsigDer(viejo); // le asigna al derecho del apuntador lo que estaba apuntando viejo
        delete viejo;
        return true;
    } else {
        return false;
    }


};
