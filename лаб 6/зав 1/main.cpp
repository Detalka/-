#include <iostream>
#include <stdio.h>


#include <string.h>
#define n 3
using namespace std;
struct ITNR {
		char BEG [100] ;
		char END [100] ;
		int NUM;
		double DISTANSE;
	} elemant;


void input (FILE *f ,ITNR elemant[n]) {
	
  if ((f = fopen ("file.bin", "ab+")) == NULL)
  {
  	cout << "File not open" << endl;
  	return;
  }
	cout<<"Введіть дані в масив RT "<<endl;	
		int i=0;
	for(int i=0;i<n;i++){
		cout<<"Введіть назву початкового пункту маршруту "<<endl;
     	cin>>elemant[i].BEG; 
    
	cout<<"Введіть назву кінцевого пункту маршруту "<<endl;
     	cin>>elemant[i].END;
    
	cout<<"Введіть номер маршруту "<<endl;
     	cin>>elemant[i].NUM;
    
	cout<<" Введіть відстань"<<endl;
    	 cin>>elemant[i].DISTANSE;
         fwrite(&elemant,sizeof(elemant),1,f);
}

	fclose (f);
	}

void output (FILE *f ,ITNR elemant[n]) {
	if ((f = fopen("file.bin", "rb")) == NULL)
{
	cout << "Error of file. Please check and try again" << endl;
  	return;
}
int c=0;	
	do
{
	fread(&elemant[c], sizeof(elemant),1,f);
	if (feof(f)) break;
	c++;
		
	cout<<"Початок маршруту"<<elemant[i].BEG; 
	}
while (1);
cout<<endl;
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
			
		}

void clean ()
{
	FILE *f;
	f = fopen ("file.bin", "wb");
	fclose(f);
}

int main() {
	setlocale(LC_CTYPE,"ukr");
	ITNR elemant[n];
		FILE *f;
		start:
			char m;
cout<<"Веведіть команду: внести запис(w), вивести вміст тексту та найти групу з найбільшою кількустю пропусків(r), очистити файл(k), завершити роботу(q)"<<endl;
cin>>m;
switch(m){
		case 'w':{
			input (f, elemant);;
			goto start;
			break;
		}
		case 'r':{
			output(f, elemant);;
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
	end:
		//Read(f, elemant);
		 

	

	return 0;
}
