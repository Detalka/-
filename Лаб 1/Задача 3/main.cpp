#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	setlocale(LC_CTYPE,"ukr");
	int T;
	start:
	cout <<"Введіть годину"<<endl;
	cin>>T;
	switch (T){
		case 0 : cout<<"AM"<<endl;break;
		case 1 : cout<<"AM"<<endl;break;
		case 2 : cout<<"AM"<<endl;break;
		case 3 : cout<<"AM"<<endl;break;
		case 4 : cout<<"AM"<<endl;break;
		case 5 : cout<<"AM"<<endl;break;
		case 6 : cout<<"AM"<<endl;break;
		case 7 : cout<<"AM"<<endl;break;
		case 8 : cout<<"AM"<<endl;break;
		case 9 : cout<<"AM"<<endl;break;
		case 10 : cout<<"AM"<<endl;break;
		case 24 : cout<<"AM"<<endl;break;
		case 11 : cout<<"AM"<<endl;break;
		case 12: cout<<"PM"<<endl;break;
		case 13: cout<<"PM"<<endl;break;
		case 14: cout<<"PM"<<endl;break;
		case 15: cout<<"PM"<<endl;break;
		case 16: cout<<"PM"<<endl;break;
		case 17: cout<<"PM"<<endl;break;
		case 18: cout<<"PM"<<endl;break;
		case 19: cout<<"PM"<<endl;break;
		case 20: cout<<"PM"<<endl;break;
		case 21: cout<<"PM"<<endl;break;
		case 22: cout<<"PM"<<endl;break;
		case 23 : cout<<"PM"<<endl;break;
		default : cout<<"Неправильно введиний час";
		goto start;
	}
	return 0;
}
