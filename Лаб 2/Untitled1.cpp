#include <iostream>
using namespace std;
int main(){ double min, A[15];
	for (int i=1;i<16;i++){
	 	cout<<"ВВедіть елемент =\n";
	 	cin>>A[i];
			min=A[1];
	}
	cout<<min<<"/n";
	for (int i=1;i<16;i++){
		if(min>A[i]){
			min=A[i];
		}
	}
	cout<<"Min="<<min;
	return 0;
}
