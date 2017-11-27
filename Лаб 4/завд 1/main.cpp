#include <iostream>
#include <string.h>
#include <ctype.h>
#include <stdio.h>

using namespace std;
int main() {
 char s[100];
 gets(s); 
 int  number [100];
 int n =strlen(s);
 char * pch = strtok (s," "),  // получаем первое слово
         * word = 0; // самое длинное слово
		int length = strlen(pch);          // определяем длинну первого слова
 
    int maxLen = 0; // самое длинное слово
 
      while (pch != NULL)                         // пока есть слова
      {
          length = strlen(pch);        // определяем длинну слова
 
          if (maxLen < length )        // определяем самое длинное слово
          {
              maxLen = length;
              word = pch;              // сохраняем указатель на текущее слово
          }
 
          pch = strtok (NULL, " "); // получаем следующее слово
      }
      cout << "Самое длинное слово: " << word
           << " , его длина равна: " << maxLen
           << " символам " << endl;
           
  char *s1 = new char[n];
 for (int i=0; i<n; i++){
 	s1[i]=tolower(s[i]);
 	s1[n]='\n';
 }
 cout<<s1;
	return 0;
}
