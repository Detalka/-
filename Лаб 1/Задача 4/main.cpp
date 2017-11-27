#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {double x=0;
int n=0;
double sum=0;
cout<<"n=";
cin>>n;
cout<<"x=";
cin>>x;
for (int i=1;i<=n;i++){
sum+=(x+cos(i*x))/pow(2,i);
}
cout<<"sum="<<sum<<endl;
double k=1;
for (double i=2;i<=12;i++){
	k=k*((i+1)/(i+2));
}
cout<<"dobutk="<<k<<endl;
	return 0;
}
