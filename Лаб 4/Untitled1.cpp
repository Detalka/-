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
	cout << "==============================�������� �����====================================";
	cout<<endl;
	do{
	cout << "����� =";
	cin>>V;
	if (V<RAND){
		cout<<"������� ����. ��������� �� ���.";
		cout<<endl;
	}
	if (V>RAND){
		cout<<"������� ������. ��������� �� ���.";
		cout<<endl;
	}
	if (V==RAND){
		cout<<"������! �� ������� �����! ������ ����� ���? ���� ��� ������ 0 � - ���� ����";
		cin>>k;
		cout<<endl;
	}
	}while(RAND != V);
}while (k==0); 
return 0; 
}
