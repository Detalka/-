#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
using namespace std;
int main(){
	setlocale(LC_CTYPE, "ukr");
	int V;
	int k=0;
	int a = 1,b= 1000;
	do{
		srand (time(NULL));
	int RAND =a+rand()%b;
	cout << "==============================Вгадайте число====================================";
	cout<<endl;
	do{
	cout << "Число =";
	cin>>V;
	if (V<RAND){
		cout<<"Занадто мале. Спробуйте ще раз.";
		cout<<endl;
	}
	if (V>RAND){
		cout<<"Занадто велике. Спробуйте ще раз.";
		cout<<endl;
	}
	if (V==RAND){
		cout<<"Чудово! Ви вгадали число! Будете грати далі? Якщо так введіть 0 ні - любу іншу";
		cin>>k;
		cout<<endl;
	}
	}while(RAND != V);
}while (k==0); 
return 0; 
}
