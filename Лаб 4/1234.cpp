#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	char string[100]; 
	cout<<"¬вед≥ть строку:"<<endl;
	cin.getline(string,100);
	int d = strlen(string);
	for (char t = 'а'; t <= '€'; t++)
	char b[t] = strtok(NULL,"");
	for (int i = 0; i<d; i++)
	if (('а' <= str[i]) && (str[i] <= '€'))
	{
	b[str[i]] = b[str[i]] + 1;
	k += 1;
	}
	for (char t = 'а'; t <= '€'; t++)
	if (b[t]>0)
	{
	b[t] = b[t] * 100 / k;
	cout << "\t" << t << " " << b[t] << "%" << endl;
}
}
	return 0;
}
