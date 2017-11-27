//Alejandra Bonilla 
//clase 24-11-17
#include <iostream>
#include <math.h>
#include<fstream>

using namespace std;

int main()
{
    double  x,c,h,a,b,f;
    double dfxdx; 
    int iter=100;

cout<<"Evaluamos la función coseno en el punto 0.15"<<endl; 
cout<<"x=0.15\n"<<endl;
    
    x=0.15;
   c = cos(x);
   
   cout<<"cos(x)="<<c<<endl;
   
   cout<<"dame una h"<<endl;
   cin>>h; 
   
   f=cos(x+h);
   
   
   
   cout<<"Derivada numérica"<<endl;
   cout<<(f-c)/h<<endl;
   
   cout<<"Derivada directa"<<endl; 
   b=-sin(x);
   cout<<b<<endl;
   
   
    ofstream datos; 
   datos.open("datos.txt");
   for(int i=-1*iter; i<iter; i++){
   	a=0.15;
   	x=i/10.0; 
   	c=cos(a);
   	f=cos(a+x);
   	b=-sin(a);
   	dfxdx=(f-c)/x;
   	datos<<x<<","<<c<<","<<dfxdx<<","<<b<<endl;
  }
   
  datos.close();
     return 0;
}
