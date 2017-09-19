#include <iostream>
using namespace std;

void invertido( int array[], int n )
{
    for (int i = 0; i < (n / 2); i++) {
        int temp = array[i];
        array[i] = array[(n - 1) - i];
        array[(n - 1) - i] = temp;
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
