#include<iostream>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "ukr");
	int n=0;
	cout<<"¬вед≥ть n=";
		cin>>n;
	double mas[n];

	int a,b;
	cout<<"¬вед≥ть a=";
		cin>>a;
	cout<<"¬вед≥ть b=";
		cin>>b;
		if(a<b){
	
srand (time(NULL) );
double *m=mas;
			for(int i=0;i<n;i++){
				
				*m=a+rand()%b;
			cout<<"["<<*m<<"]"<<endl;
			m++;	
		}
						for(int i=0;i<n;i++){
				mas[i]=	fabs(mas[i]);
				}

				double s_m=0.0;
				
					for(int i=0;i<n;i++){
					if(mas[i]==0&&s_m==0){
							for(;i<n;i++)
							s_m	+=mas[i];
					}
					
					}
			
	
		cout<<s_m<<"\n";
	
		double min=mas[0];
	
					for(int i=0; i<n;i++){
						if(mas[i]<min)
							min=mas[i];
					}
						cout<<"–езультат:";
						
							cout<<min<<",";
							
							
}
	else{
		cout<<"a>=b - неправильна умова";
		}	
	
	
	
	
	
	return 0;
}

