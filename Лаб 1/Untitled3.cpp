#include <string.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <stdio.h>
using namespace std;
int main(){
setlocale(0,"");
 float X0,Xk,x,y,h,b,c,a ;
 printf ("a,b,c", a,b,c);
 scanf ("%f %f %f", &a,&b,&c);
printf("¬вед≥ть дан≥"); 
printf("\n |%3.5f| %3.5f|""\n крок h =%3.2f\n", X0,Xk,h);
 printf("\n----------------------\n| x | y |");
 printf("\n|----------|---------|");
 x=X0;
 "\n";
 printf("\n¬вед≥ть ’поч,""’к≥н, h ");
 scanf("%f %f %f", &X0,&Xk,&h);
 printf("\n???????? [%3.5f, %3.5f]\n ???? h = %3.2f\n", X0,Xk,h);
 printf("\n----------------------\n| x | y |"); 
 printf("\n|----------|---------|");
 x=X0;
 while (x<Xk)
 { if ((x<0) && (b!=0)) y=a*pow((x+c),2)-b;
 else
 if ((x>0) && (b=0)) y=(x-a)/(-c);
 else y=a+(b/c);
 printf("\n| %7.6f | %7.6f |",x,y);
 x+=h;
 }

 printf("\n-----------------------");
 return 1;
} 
