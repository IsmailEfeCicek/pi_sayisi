#include <stdio.h>
#include <locale.h>
#include <conio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
main(){
	setlocale(LC_ALL,"Turkish");
// pi sayisinin form�l�
 float a,b=0,i,c=0;
    printf("Pi say�s� ka� basamakl� olsun?\t");
    scanf("%f",&a);
    for(i=0;i<=a;i++){
    	b+=(powf(-1,i)/(2*i+1));
	}
	c=4*b;
	printf("Pi Say�s�n�n istenilen basamak sonucu: %f",c);
	getche();
}

