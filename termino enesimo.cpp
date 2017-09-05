#include<iostream>
using namespace std;

int main()
{
  int num,n,p,i;
  cout<<"Ingresa un numero"<<endl;
  cin>>num;
  n=2;
  i=0;
  while (i<=num)
  { for (p=2;n%p!=0;p++);
    if(p==n)
      {i=i+1;
        if(i==num)
          
          cout<<n<<endl;
      }
    n=n+1;
  }
  return 0;
}