//#include "stdafx.h"
#include <stdlib.h>
#include <iostream>
//#include <conio.h>
//#include <locale.h>
#define N 10
#define M 10
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	int a[N][M];
	int b[N];
	int n = N + 1;
	int m = M + 1;
	int A = 0, B = 0, S, S1 = 0, S2 = 0;
	while (n > N) 
	{
		printf("\n ¬вед≥ть к≥льк≥сть р€дк≥в: n =");
		scanf("%d", &n);
	}
	while(m > M){
	printf("\n ¬вед≥ть к≥льк≥сть стовпц≥в: m =");
		scanf("%d", &m);
	}
	while (A >= B)
	{
		printf ("\n ¬вед≥ть д≥апазон A i B:");
		scanf ("%d %d", &A, &B);
	}
	printf("\n\nћатриц€ A:");
	for (int i = 0; i < n; i++)
	{
		printf("\n\n");
		for (int j = 0; j < m; j++)
		{
			a[i][j] = rand() % (B - A) + A;
			printf("%5d", a[i][j]);
		}
	}
	printf("\n\nќдновим≥рний масив B:");
		for (int i = 0; i < n; i++)
		{
			b[i] = rand() % (B - A) + A;
			printf("%5d", b[i]);
		}
	int k=m+1;
	while(k > m || k==0){
	printf("\n ¬вед≥ть номер стовпц€ €кий потр≥бно зам≥нити на значенн€ одновим≥рного масиву: k =");
		scanf("%d", &k);
	}
	k--;
	printf("\n\nћатриц€ A п≥сл€ зм≥ни:");
	for (int i = 0; i < n; i++)	{
		printf("\n\n");
		for (int j = 0; j<m; j++){
		if(k==j){
	a[i][j]=b[i];
	}
	printf("%5d", a[i][j]);
		}
	}
	return 0;
}
