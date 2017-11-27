#include <iostream>
#include <string>
 
using namespace std;

 const int N=5;
 
typedef struct people {
  string prizviche;
  int year ;
  double zrist;	
	
}p;
  	int input ();
	double lardest_people();
	double midl_value ();
  p *mas =new p[N];
  int count =0;
int main() {
	setlocale(LC_CTYPE,"ukr");

		int k=1;
	int a=2;
		while(k!=0){
	cout<< "Виберiть дiї якi ви хочете зробити: " << endl;
	cout << "1 - ввести данi ;"<< endl;
	cout << "2 - вивести данi про групу ;" << endl;
	cout << "3 - вивести про студентiв зрiст яких вище або нижче середнього ;" <<endl;
	cout << "0 - Вийти "<< endl;

	
	cin>>a;
	switch(a) {
		case 0: k=0;break;
		case 1:input ();break;
		case 2:lardest_people();break;
		case 3:midl_value ();break; 
		default:return 0;
		
			}
			
	
               }
	

	return 0;
}





int input () {
cout << "  "<<endl;
cout<<"=====Введiть данi в масив RT=====  "<< endl;	
cout << "  "<<endl;
	char out;
	int i=0;
	while(out!='e'){
		
	cout<<"Введiть прiзвище:        ";
     cin>>mas[i].prizviche; 
     
	cout<<"Введiть вік:  ";
     cin>>mas[i].year;
    
	cout<<"Введiть зрiст:           ";
     cin>>mas[i].zrist;
    
      i++;
     cout<< "   "<< endl;
	 cout<<"Введiть 'e' якщо хочете вийти i iншу якщо нi: ";
          cin>>out;
    cout << "  " << endl; 
	}
	return 1;}
			
		
	double lardest_people() {
		
		
		people A;
		A= mas[0];
		
		for(int i=0;i<N;i++){
				A=mas[i];
		cout<<A.prizviche<<endl;
		cout<<A.year<<endl;
		cout<<A.zrist<<endl;}
	}
	
	double midl_value () {
		double midl=0;
		int i=0;
		 double sum=0;
		for(i=0;i<N;i++){
		sum=sum+mas[i].year;
                    }            
	
		midl=sum/i;
		cout<<"Cереднiй вік:        "<<midl;
		cout<<"       ";
		
		cout<<"Студенти яких вік вище середннього:  "<<endl;
				for(int j=0;j<N;j++){
					if(mas[j].year>midl){
				cout<<"Про студента:  ";
				cout<<"Прiзвище                            "<<mas[j].prizviche<<endl;
				cout<<"Вік                                 "<<mas[j].year<<endl;
				cout<<"Зрiст                               "<<mas[j].zrist<<endl;
				
						
										  }				
									}
	return 8.0;
	
                }
