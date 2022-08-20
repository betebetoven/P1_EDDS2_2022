#include<iostream>
#include <math.h>


using namespace std;

int recursiva (int n) {
if (n <= 1)
return 1 ;
else
return recursiva (n/2) + recursiva (n/2) ;
}
void norecursiva(double x)
{
    cout<<"FUNCION NO RECURSIVA"<<endl;

    int cont = 0;
    for (double i = 0; i < x/sqrt(x); i++)
    {
        for (double n = 0; n < pow(2.0, i); n++)
        {
            cont++;
            cout<< pow(2.0, i);
            
            
            

        }
        cout<<endl;
        
        /* code */
    }
    

}
int main()
{
    cout<<"FUNCION  RECURSIVA"<<endl;
    for (int i = 1; i < 21; i++)
    {
        int p = recursiva(i);
        cout<<i<<": "<<p<<endl;
    }
    norecursiva(21);
    



    

    
    
    
    



   
} 
