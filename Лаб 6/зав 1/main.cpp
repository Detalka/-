#include <iostream>
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;
typedef struct ITNR {
		string BIG ;
		string END;
		int NUM;
		double DISTANSE;
	} IT;
	



void input (FILE*f, ITNR IT) {
	
  if ((f = fopen ("file.bin", "ab+")) == NULL)
  {
  	cout << "File not open" << endl;
  	return;
  }
  char out;
	cout<<"¬вед≥ть дан≥ в масив RT "<<endl;	
		int i=0;
	while (out!='e'){
		cout<<"¬вед≥ть назву початкового пункту маршруту "<<endl;
     	cin>>IT.BIG; 
    
	cout<<"¬вед≥ть назву к≥нцевого пункту маршруту "<<endl;
     	cin>>IT.END;
    
	cout<<"¬вед≥ть номер маршруту "<<endl;
     	cin>>IT.NUM;
    
	cout<<" ¬вед≥ть в≥дстань"<<endl;
    	 cin>>IT.DISTANSE;
         fwrite(&IT,sizeof(ITNR),1,f);
         cout<<"якщо хочете звершити вв≥д натисн≥ть e:";
         cin>>out;
}
	fclose (f);
	}

void output (FILE *f ,ITNR IT) {
	if ((f = fopen("file.bin", "rb")) == NULL)
{
	cout << "Error of file. Please check and try again" << endl;
  	return;
}
int c=0;	
	do
{
	fread(&IT, sizeof(ITNR),1,f);
	if (feof(f)) break;
	c++;
		
 
	}while(1);
cout<<endl;
char mr[100];
			cout<<"ENTER THE NAME OF STATION - "<<endl;
			cin>>mr;
			for(int i=0;i<c;i++){
			if( IT.BIG==mr || IT.END==mr){
			cout<<"NAME OF BEGIN- "<<IT.BIG<<endl;
			cout<<"NAME OF END- "<<IT.END<<endl;
			cout<<"NUMBER- "<<IT.NUM<<endl;
			cout<<"DISTANSE- "<<IT.DISTANSE<<endl;
			}
			}
			
		}

void clean ()
{
	FILE *f;
	f = fopen ("file.bin", "wb");
	fclose(f);
}

int main() {
	setlocale(LC_CTYPE,"ukr");
	ITNR IT;
		FILE *f;
		start:
			char m;
			while(1){
cout<<"¬евед≥ть команду:"<<endl;
cout<< "внести запис(w)"<<endl;
cout<<"вивести вм≥ст тексту та найти групу з найб≥льшою к≥лькустю пропуск≥в(r)"<<endl;
cout<<"очистити файл(k)"<<endl;
cout<<"завершити роботу(q)"<<endl;
cin>>m;
switch(m){
		case 'w':{
			input (f, IT);;
			goto start;
			break;
		}
		case 'r':{
			output(f, IT);;
			goto start;
			break;
		}
		case 'k':{
		    clean();
		    goto start;
		    break;
	         }
		case 'q':{
			goto end;
			break;
		}
	
	default: cout<<"fattal error"<<endl; goto start;
	}
	}
	end:
		//Read(f, elemant);
	return 0;
}
