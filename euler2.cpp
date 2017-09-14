#include <iostream>	

using namespace std;

int main(){

	long n;
	int t1,t2;
	int nt;
	n=4000000;
	t1=0;
	t2=1;
	long sum;

	bool flag=false;

	while(!flag){
        nt=t1 + t2;
        t1 = t2;
        t2 = nt;

        if(nt > n){
            flag=true;
            break;
        }

        if(nt % 2 == 0){
            sum += nt;
        }
    }

    cout<<sum<<endl;
	return 0;
}