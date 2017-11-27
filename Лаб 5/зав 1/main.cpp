#include <iostream>
#include <string.h>
#define n 3
using namespace std;
struct ITNR {
		char BEG [100] ;
		char END [100] ;
		int NUM;
		double DISTANSE;
	} elemant;

int input (ITNR elemant[n]) {
       
	cout<<"¬вед≥ть дан≥ в масив RT "<<endl;	
		int i=0;
	for(int i=0;i<n;i++){
		cout<<"¬вед≥ть назву початкового пункту маршруту "<<endl;
     	cin>>elemant[i].BEG; 
    
	cout<<"¬вед≥ть назву к≥нцевого пункту маршруту "<<endl;
     	cin>>elemant[i].END;
    
	cout<<"¬вед≥ть номер маршруту "<<endl;
     	cin>>elemant[i].NUM;
    
	cout<<" ¬вед≥ть в≥дстань"<<endl;
    	 cin>>elemant[i].DISTANSE;
         
}

    return 1;
	
	}

int output (ITNR elemant[n]) {

char mr[100];
			cout<<"ENTER THE NAME OF STATION - "<<endl;
			cin>>mr;
			for(int i=0;i<n;i++){
					
			if((strcmp(elemant[i].BEG,mr)==0) || (strcmp(elemant[i].END,mr)==0))
			cout<<"NAME OF BEGIN- "<<elemant[i].BEG<<endl;
			cout<<"NAME OF END- "<<elemant[i].END<<endl;
			cout<<"NUMBER- "<<elemant[i].NUM<<endl;
			cout<<"DISTANSE- "<<elemant[i].DISTANSE<<endl;

			}
			
			return 3;
		}

int main() {
	setlocale(LC_CTYPE,"ukr");
	ITNR elemant[n];
		 input (elemant);
		output(elemant);
	

	return 0;
}
