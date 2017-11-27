#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int n,m;
	int A = 0, B = 0;
	printf("\n ¬вед≥ть к≥льк≥сть р€дк≥в: n =");
	scanf("%d", &n);
	printf("\n ¬вед≥ть к≥льк≥сть стовпц≥в: m =");
	scanf("%d", &m);
	while (A >= B)
	{
		printf ("\n ¬вед≥ть д≥апазон A i B:");
		scanf ("%d %d", &A, &B);
	}
	int** arr = new int*[n]; 
 cout<<"\n\n ћатриц€ :\n";
 for (int i=0;i<n;i++)
 { arr[i] = new int[m];
 cout<<"\n";
 for (int j=0;j<m;j++)
 {
 arr[i][j]=rand()%(B-A)+A;
 printf("%7d",arr[i][j]);
 }
 }
 int* ar = new int [n];
  printf("\n\nќдновим≥рний масив B:");
		for (int i = 0; i < n; i++)
		{
			ar[i] = rand() % (B - A) + A;
			printf("%5d", ar[i]);
		}
	int k=m+1;
	while(k > m){
	printf("\n ¬вед≥ть номер стовпц€ €кий потр≥бно зам≥нити на значенн€ одновим≥рного масиву: k =");
		scanf("%d", &k);
	}
		printf("\n\nћатриц€ A п≥сл€ зм≥ни:");
	for (int i = 0; i < n; i++)	{
		printf("\n\n");
		for (int j = 0; j<m; j++){
		if(k==j){
	arr[i][j]=ar[i];
	}
	printf("%5d", arr[i][j]);
		}
	}
	return 0;
}
