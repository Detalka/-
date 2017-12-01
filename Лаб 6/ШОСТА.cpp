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
	
	cout<<"=========================Введiть данi в файл =============================== "<<endl;
		
				cout<<"Введiть назву початкового пункту маршруту                 ";
     	cin>>EL.FIRST; 
    
		cout<<"Введiть назву кiнцевого пункту маршруту                   ";
     	cin>>EL.FINAL;
    
		cout<<"Введiть номер маршруту                                    ";
     	cin>>EL.NUM;
    
		cout<<"Введiть вiдстань                                          ";
    	 cin>>EL.DISTANSE;
        
        count++;
				
			fin<<EL.FIRST; ; 
			fin<<EL.FINAL;
			fin<<EL.NUM;
			fin<<EL.DISTANSE;
			fin.close();
			 i++; 
				
	cout<<"Введiть 'e' якщо хочете вийти i iншу якщо нi:                ";
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
    cout<<"Введіть станцію: ";
    string qwe;
    cin>>qwe;
		
			cout<<"                               Всі маршрути   "<<endl;
			    for(int i=0;i<count;i++){
    		fin>>AL.FIRST;
			fin>>AL.FINAL;
			fin>>AL.NUM;
			fin>>AL.DISTANSE;
			cout<<"          "<<endl;
			
			cout<<"Назву початкового пункту маршруту  :                          "<<AL.FIRST<<endl;
			cout<<"Назву кiнцевого пункту маршруту    :                          "<<AL.FINAL<<endl;
			cout<<"Вiдстань                           :                          "<<AL.DISTANSE<<endl;
			cout<<"НОМЕР МАРШРУТУ                     :                          "<<AL.NUM<<endl;
			cout<<endl;}
			    for(int i=0;i<count;i++){
    		fin>>AL.FIRST;
			fin>>AL.FINAL;
			fin>>AL.NUM;
			fin>>AL.DISTANSE;
			cout<<"                          Всі маршрути з такою станцією  "<<endl;
			if(qwe==AL.FIRST || qwe==AL.FINAL){
			cout<<"Назву початкового пункту маршруту  :                          "<<AL.FIRST<<endl;
			cout<<"Назву кiнцевого пункту маршруту    :                          "<<AL.FINAL<<endl;
			cout<<"Вiдстань                           :                          "<<AL.DISTANSE<<endl;
			cout<<"НОМЕР МАРШРУТУ                     :                          "<<AL.NUM<<endl;
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
	cout<< "Виберiть дiї, якi ви хочете зробити: " << endl;
	cout<< "1 - ввести данi  в файл                                            "<< endl;
	cout<< "2 - вивести данi з файлу                                           "<< endl;
	cout<< "3 - очистити файл                                           "<< endl;
	cout<< "Iнша цифра чи буква - вихiд з програми                             "<<endl;
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
