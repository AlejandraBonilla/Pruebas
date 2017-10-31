#include <iostream>
using namespace std;
int main()
{
  int s=12,p,i;
  int prime=1;
  int f=1;
  cout<<"DAME UN ENTERO POSITIVO:"<<endl;
  cin>> p;
  do{
    do{
      if (p%2==0) p=p+1;
      for (i=2; i<=p/2; ++i)
	if(p%i==0)
	  {prime=0;
	    p=p+2;
	  }
	else prime=1;
    } while(prime=0);
    if (p<s) {s=s-p;}
    else {s=s-1;}
    if (s==0) {break;}
    else {p=p+2;}
  }while(f=1);

  cout<<"P="<<p<<endl;
  return 0;
}
