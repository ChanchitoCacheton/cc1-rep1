#include <iostream>


using namespace std;

void invertido( int *a, int n )
{
	int aX = a[0];
    if(  n < 1 ){
    	return ;
    }
   
     
    	else
    		a[0] = a[n-1];
    		a[n-1] = aX;
    		
    		invertido( ++a, --n );

    
}

int main()
{
   
    int n;     
    cout << "ingrese cantidad de elementos ";
    cin >> n;
    
    int* array = new int[n];

    cout << "ingrese numeros para el arreglo" << endl;
    for ( int i = 0; i < n; i++ ) {
        cin >> array[i];
    }
    
    invertido( array, n );
    
    cout << "el arreglo invertido es : " << endl;
    for ( int i = 0; i < n; i++ ) { 
        cout << "Arreglo [" << i << "] = " << array[i] << endl;
    }
    
    
    delete[] array;
}