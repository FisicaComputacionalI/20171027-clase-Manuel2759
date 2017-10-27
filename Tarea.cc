#include <iostream>
using namespace std;
int esPrimo(int P)
{
  int flag=0;
  for (int i=2; i<=P/2; i++)
    {
      if (P%i==0)
	  flag=1;
    }
      return flag;
}
int main()
{
  int P=0;
  cout<<"Inserte un numero "<<endl;
 cin >>P;
 do 
   {
     if(P%2==0)
       P=P+1;
     if ( esPrimo(P)==1)
       P=P+2;
   }
 while ( esPrimo(P)==1);
   cout<<"El valor de P es "<<P<<endl;
 return 0;
}
