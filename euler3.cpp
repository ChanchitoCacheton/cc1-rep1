#include <iostream>
#include <math.h>


using namespace std;

long long esPrimo(long long n)
{
	
	if (n % 2 == 0)
		return 0;		
	for (long long i = 3; i <= ((n / 2) + 1); i += 2)
	{
		if (n % i == 0)
			return 0;	
	}
	return 1;
}
 
long calculaPrimo(long long num)
{
	long long indice = 0;
	for(long long i = 3; i <= num; i += 2)
	{
		if (num % i == 0)
		{
			if (esPrimo(i))
			{
				indice = i;
				cout << indice << endl;
			}
		}
	}
	return indice;
}
 
int main()
{
	long long numero = 600851475143;
	cout << calculaPrimo(numero);
 	

	return 0;
}
