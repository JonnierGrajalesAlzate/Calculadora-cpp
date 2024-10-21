#include <iostream>
using namespace std;
int main() { 
    int n1,n2,r;
    int opc;
    double num1, num2,r2;
    
cout<<"\tMENU"<<endl;
cout<<"1. Suma\n";
cout<<"2. Resta\n";
cout<<"3. Multiplicación\n";
cout<<"4. División\n";
cout<<"5. Salir";
cout<<endl;

cout<<"Ingrese una opción del menu: ";
cin>>opc;

switch(opc)
{
    case 1: cout<<"Ingrese el primer numero:";
            cin>>n1;
            cout<<"Ingrese el segundo numero:";
            cin>>n2;
            r=n1+n2;
            cout<<"el valor de la suma es "<<r;
            break;
            
    case 2: cout<<"Ingrese el primer numero:";
            cin>>n1;
            cout<<"Ingrese el segundo numero:";
            cin>>n2; 
            r=n1-n2;
            cout<<"el valor de la resta es "<<r;
            break;
    case 3: 
            cout<<"Ingrese el primer numero:";
            cin>>n1;
            cout<<"Ingrese el segundo numero:";
            cin>>n2;
            r=n1*n2;
            cout<<"el valor de la multiplicación es "<<r;      
            break;
    case 4: 
            cout<<"Ingrese el primer numero:";
            cin>>num1;
            cout<<"Ingrese el segundo numero:";
            cin>>num2;
           
           if (num2!=0)
            { 
            r2=num1/num2;
            cout<<"el resultado es:"<<r2;
            }
            else
            { cout<<"ERROR, el denominador no puede ser 0";
                
            }
           break;
    case 5: return 1;
     
    default: cout<<"La opción ingresada es invalida";
    break;
}
    
    
return 0;
}