#include<iostream>
using namespace std;



void busquedaPrimo(int num){

  int n,p,i;
  n=2;
  i=0;

  while (i<=num)
  { for (p=2;n%p!=0;p++);
    if(p==n)
      {i=i+1;
        if(i==num)
          
          cout<<"el numero primo en esa posicion es :"<<n<<endl;
      }
    n=n+1;
  }


}

int main()
{
  int num,n,p,i;
  cout<<"Ingresa un numero"<<endl;
  cin>>num;
  
  busquedaPrimo(num);
  return 0;
}