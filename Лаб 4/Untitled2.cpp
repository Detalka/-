#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	char s[100];
	cout<<"������ ������:"<<endl;
	cin.getline(s,100);
 int i;
    cout<<endl;
    for ( i = 0 ; i < strlen (s) ; ++i ){
          s[i] = tolower(s[i]);}
   cout<<"ϳ��� ����� :";
   cout<<endl; 
    printf (" %s \n", s);
return 0;
}

