#include <iostream>
#include<string>
#include <string.h>
using namespace std;
const int n=100;
typedef struct ITIN {
		string BEG ;
		string END;
		int NUM;
		double DIST;
	} EL;
EL elemant[n];

	int input ();
	int output ();
	
	
int main() {
	setlocale(LC_ALL,"UKRAINIAN");

	
	
	cout<< "�����i�� �i�, ��i �� ������ �������: " << endl;
	cout<< "1 - ������ ���i                                                   "<< endl;
	cout<< "2 - ������� ���i                                                  "<< endl;
	cout<< "I��� ����� �� ����� - ���i� � ��������                            "<<endl;
	int k=1;
		while(k!=0){
	
		int a=0;
		cin>>a;
		switch(a) {
			case 1:input ();break;
			case 2:output();break;
			default: return 0;
	
			}
              }	
	
	return 0;
}

	int input () {
       char out;
	while(out!='e'){
		int i=0;
	cout<<"=========================����i�� ���i � ����� RT =============================== "<<endl;	
	
		cout<<"����i�� ����� ����������� ������ ��������                 ";
     	cin>>elemant[i].BEG; 
    
		cout<<"����i�� ����� �i������� ������ ��������                   ";
     	cin>>elemant[i].END;
    
		cout<<"����i�� ����� ��������                                    ";
     	cin>>elemant[i].NUM;
		cout<<"����i�� �i������                                          ";
    	 cin>>elemant[i].DIST;
         i++;
	 cout<<"����i�� 'e' ���� ������ ����� i i��� ���� �i:                ";
          cin>>out;
	}
    return 1;
	
	}
	
	int output () {
			string mr;
	        cout<<"������ ����� ������� - "<<endl;
			cin>>mr;
			for(int i=0;i<n;i++){
					
			if(elemant[i].BEG==mr || elemant[i].END==mr){
			cout<<"                               ��  �������� � ������ ���������  "<<endl;
			cout<<"          "<<endl;
			cout<<"����� ����������� ������ ��������  :                          "<<elemant[i].BEG<<endl;
			cout<<"����� �i������� ������ ��������    :                          "<<elemant[i].END<<endl;
			cout<<"����� �������                      :                          "<<elemant[i].NUM<<endl;
			cout<<"�i������                           :                          "<<elemant[i].DIST<<endl;
			
		   							}
			}
				
			return 3;
		}
	

