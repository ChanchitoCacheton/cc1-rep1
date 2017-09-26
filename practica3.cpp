#include <iostream>


using namespace std;

void invertido( int a[], int n )
{
	
    if(  n < 1 ){
    	return ;
    }
   
     
    	else{
    		int temp = a[0];
    		a[0] = a[n-1];
    		a[n-1] = temp;
    		return invertido(++a, n-1 );
    	}

    
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