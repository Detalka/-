#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	double z1, z2, a;
	cout<<"a=";
	cin>>a;
	cout<<endl;
	z1=sin(4*a)/(1+cos(4*a) )*(cos(2*a)/(1+cos(2*a)));
	cout<<"z1="<<z1<<endl;
	z2=pow((1+a+pow(a,2))/(2*a+pow(a,2))+2-((1-a+pow(a,2))/(2*a-pow(a,2))),-1)*(5-2*pow(a,2));
	cout<<"z2="<<z2<<endl;
	return 0;
}

