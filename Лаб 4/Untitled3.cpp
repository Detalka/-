#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	char string[100];
	cout<<"Введіть строку:"<<endl;
	cin.getline(string,100);
	char * pch = strtok (string," "), *word = 0;
	int length = strlen(pch);
	int maxLen = 0;
	while (pch != NULL)
	{
		length = strlen(pch);
		if(maxLen < length){
			maxLen = length;
			word = pch;
		}
		pch = strtok (NULL, " ");
	}
	cout<<"Саме довше слово: "<<word
	<<" , його довжина рівна: "<<maxLen
	<<" символам "<<endl;
return 0;
}

