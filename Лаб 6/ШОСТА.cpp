#include <iostream>
#include<string>
#include <stdio.h>
#include <fstream>

      
using namespace std;
const int n=100;

int count=0;
  

 struct ITNR {
		string FIRST ;
		string FINAL;
		int NUM;
		double DISTANSE;
	} EL;


	void  input_1 () {
		ofstream fin("text.txt", ios_base::app);
			int i=0;
		 char out;
	while(out!='e'){
	
	cout<<"=========================����i�� ���i � ���� =============================== "<<endl;
		
				cout<<"����i�� ����� ����������� ������ ��������                 ";
     	cin>>EL.FIRST; 
    
		cout<<"����i�� ����� �i������� ������ ��������                   ";
     	cin>>EL.FINAL;
    
		cout<<"����i�� ����� ��������                                    ";
     	cin>>EL.NUM;
    
		cout<<"����i�� �i������                                          ";
    	 cin>>EL.DISTANSE;
        
        count++;
				
			fin<<EL.FIRST; ; 
			fin<<EL.FINAL;
			fin<<EL.NUM;
			fin<<EL.DISTANSE;
			fin.close();
			 i++; 
				
	cout<<"����i�� 'e' ���� ������ ����� i i��� ���� �i:                ";
          cin>>out;
				}				
}
	                         // Output the data in the file  
	
	   		void output_1 () {
	   				ifstream fin ("text.txt", ios_base::in);
	   				ITNR AL;
if (!fin.is_open()) 
        cout << "Error\n"; 
    else{
    cout<<"������ �������: ";
    string qwe;
    cin>>qwe;
		
			cout<<"                               �� ��������   "<<endl;
			    for(int i=0;i<count;i++){
    		fin>>AL.FIRST;
			fin>>AL.FINAL;
			fin>>AL.NUM;
			fin>>AL.DISTANSE;
			cout<<"          "<<endl;
			
			cout<<"����� ����������� ������ ��������  :                          "<<AL.FIRST<<endl;
			cout<<"����� �i������� ������ ��������    :                          "<<AL.FINAL<<endl;
			cout<<"�i������                           :                          "<<AL.DISTANSE<<endl;
			cout<<"����� ��������                     :                          "<<AL.NUM<<endl;
			cout<<endl;}
			    for(int i=0;i<count;i++){
    		fin>>AL.FIRST;
			fin>>AL.FINAL;
			fin>>AL.NUM;
			fin>>AL.DISTANSE;
			cout<<"                          �� �������� � ����� ��������  "<<endl;
			if(qwe==AL.FIRST || qwe==AL.FINAL){
			cout<<"����� ����������� ������ ��������  :                          "<<AL.FIRST<<endl;
			cout<<"����� �i������� ������ ��������    :                          "<<AL.FINAL<<endl;
			cout<<"�i������                           :                          "<<AL.DISTANSE<<endl;
			cout<<"����� ��������                     :                          "<<AL.NUM<<endl;
			}	
		}
	}
			   fin.close();
		}
		void clean(){
			ofstream fout("text.txt",ios_base::trunc);
			fout.close();
		}
		
int main() {
	setlocale(LC_ALL,"UKRAINIAN");
	
	int k=1;
		while(k!=0){
				int q;
	cout<< "�����i�� �i�, ��i �� ������ �������: " << endl;
	cout<< "1 - ������ ���i  � ����                                            "<< endl;
	cout<< "2 - ������� ���i � �����                                           "<< endl;
	cout<< "3 - �������� ����                                           "<< endl;
	cout<< "I��� ����� �� ����� - ���i� � ��������                             "<<endl;
	cin>>q;
			switch(q){
		
			case 1: input_1 ();
			break;
		

			case 2: output_1();
			break;
			   	
	        case 3: clean(); 
			break;
	        
	        
	        default: 
			k=0;
	        	}
		
              }	
	
	return 0;
}
