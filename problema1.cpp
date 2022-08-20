#include<iostream>


using namespace std;
class Puesto {
public:
Puesto *siguiente = NULL ;  // apuntador al siguiente puesto en el mismo nivel
Puesto *subordinado = NULL; // apuntador a los subordinados del puesto.

string nombre ;
string nombrePuesto ;

void lista(Puesto *p)
{
    cout << p->nombre << endl;
    if (p->subordinado != NULL)
    {
        
        lista(p-> subordinado);
    }
    if (p->siguiente != NULL)
    {
        
        lista(p->siguiente);
    }
    
    
    
}
};

int main()
{
    Puesto *jefe = new Puesto;
    Puesto *gerente1 = new Puesto;
    Puesto *gerente2 = new Puesto;
    Puesto *gerente3 = new Puesto;
    Puesto *sub1delgerente1 = new Puesto;
    Puesto *sub2delgerente1 = new Puesto;
    Puesto *subdelgerente3 = new Puesto;
    jefe -> nombre = "jefe";
    gerente1 -> nombre = "gerente 1";
    gerente2 -> nombre = "gerente 2";
    gerente3 -> nombre = "gerente 3";
    sub1delgerente1 -> nombre = "sub1 del gerente 1";
    sub2delgerente1 -> nombre = "sub 2 del gerente 1";
    subdelgerente3 -> nombre = "sub del gerente 3";
    jefe -> subordinado = gerente1;
    gerente1 -> siguiente = gerente2;
    gerente2-> siguiente = gerente3;
    gerente1 -> subordinado = sub1delgerente1;
    sub1delgerente1 -> siguiente = sub2delgerente1;
    gerente3->subordinado = subdelgerente3;
    Puesto h;
    h.lista(jefe);


    

    
    
    
    



   
} 
