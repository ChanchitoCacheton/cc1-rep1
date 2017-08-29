#include <iostream>

using namespace std;

int main(){

	int fahr=0;
	

	for (;fahr<=300;fahr++)
	{
		cout <<fahr << "\t" << (5.0/9.0)*(fahr-32) <<endl;
	}



	return 0;
}