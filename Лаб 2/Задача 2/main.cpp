//#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int main ()
{
setlocale(LC_CTYPE,"ukr") ;
int n,k,min;
int a,b;
int A[100];
 		cout<<"Введіть кількість елементів: n = ";
 		cin>>n;
 	while(1){
 		cout<<"\n\n Введіть діапазон де а початов b кінець:\n a=";
 		cin>>a;
 		cout<<"\n b=";
 		cin>>b;
 		if (a>b){
 			cout<<"Неправильно введений діапазон";
 }
 		else
 		break;
}
 cout<<"\n Рандомні числа з проміжку["<<a<<","<<b<<"]:\n";
 for (int i=1; i<n+1; i++)
 { if (i%10==0) printf("\n");
 int number =a+rand()%b;
 cout<<number<<"    ";
 A[i]=number;
 min=abs(A[1]);
 }
 cout<<endl;
 for (int i=1; i<n+1; i++)
 {
 if(min>abs(A[i])){
 min=abs(A[i]);
 k=i;
 } 
 }
 cout<<"Номер мінімального по модулю елемента ="<<k<<endl;
 int r=0;
 double sum=0;
 for (int i=1;i<n+1;i++){
 	 	if (r==1){
 		sum+=abs(A[i]);
	 }
	 if(A[i]<0){
 	r=1;
	 }
 }
 cout<<"Сума елементів після першого від’ємного елемента ="<<sum<<endl;
 return 0;
}
