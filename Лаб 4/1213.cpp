#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	char string[100]; 
	int k=0;
	cout<<"¬вед≥ть строку:"<<endl;
	cin.getline(string,100);
	char *pch = strtok (string," ");
	//int length = strlen(pch);
	while (string != NULL)
	{
		//length = strlen(pch);
		if(strlen(pch)%2==1){
		k++;//?
		}
		pch = strtok (NULL, " ");
	}
	cout<<k;
return 0;
}
