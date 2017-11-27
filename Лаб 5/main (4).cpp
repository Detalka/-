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

	
	
	cout<< "Виберiть дiї, якi ви хочете зробити: " << endl;
	cout<< "1 - ввести данi                                                   "<< endl;
	cout<< "2 - вивести данi                                                  "<< endl;
	cout<< "Iнша цифра чи буква - вихiд з програми                            "<<endl;
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
	cout<<"=========================Введiть данi в масив RT =============================== "<<endl;	
	
		cout<<"Введiть назву початкового пункту маршруту                 ";
     	cin>>elemant[i].BEG; 
    
		cout<<"Введiть назву кiнцевого пункту маршруту                   ";
     	cin>>elemant[i].END;
    
		cout<<"Введiть номер маршруту                                    ";
     	cin>>elemant[i].NUM;
		cout<<"Введiть вiдстань                                          ";
    	 cin>>elemant[i].DIST;
         i++;
	 cout<<"Введiть 'e' якщо хочете вийти i iншу якщо нi:                ";
          cin>>out;
	}
    return 1;
	
	}
	
	int output () {
			string mr;
	        cout<<"Введіть назву станції - "<<endl;
			cin>>mr;
			for(int i=0;i<n;i++){
					
			if(elemant[i].BEG==mr || elemant[i].END==mr){
			cout<<"                               Всі  маршрути з такими станціями  "<<endl;
			cout<<"          "<<endl;
			cout<<"Назву початкового пункту маршруту  :                          "<<elemant[i].BEG<<endl;
			cout<<"Назву кiнцевого пункту маршруту    :                          "<<elemant[i].END<<endl;
			cout<<"Номер маршуту                      :                          "<<elemant[i].NUM<<endl;
			cout<<"Вiдстань                           :                          "<<elemant[i].DIST<<endl;
			
		   							}
			}
				
			return 3;
		}
	

