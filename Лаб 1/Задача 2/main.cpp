#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {double F=0;
	double x=0,dx=0,a=0, b=0, c=0,xk=0;
	cout<<"a=";
	cin>>a;
	cout<<"b=";
	cin>>b;
	cout<<"c=";
	cin>>c;
	while(1){
	cout<<"x pohatkove=";
	cin>>x;
	cout<<"x kinceve=";
	cin>>xk;
	cout<<"dx=";
	cin>>dx;
	if(x>xk){
		cout<<"nepravulno vveduney diapason"<<endl;
	}
	else 
	break;
	}
				cout<<"\n----------------------\n      | x | F |";
				cout<<"\n|----------|---------|";
while (x<xk){
	F=0; 
	 if ((x<0) && (b!=0)) 
 	F=a*pow((x+c),2)-b;
 	else
 	if ((x>0) && (b=0))
 	 F=(x-a)/(-c);
 	else F=a+(b/c);
 	printf("\n| %7.4f | %7.4f |",x,F);
 	x+=dx;
 }

 printf("\n-----------------------");
	return 0;
}
