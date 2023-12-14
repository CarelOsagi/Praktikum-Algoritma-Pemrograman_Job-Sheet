//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

void main(){
	int a,b;
	
	a = 5;
	b = 10;
	
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("------\n");
	
	b += a; //b += a sama dengan b=b+a
	printf("Hasil b += a adalah %d\n",b);
	
	b -= a; //b -= a sama dengan b=b-a
	printf("Hasil b -= a adalah %d\n",b);
	
	b *= a; //b *= a sama dengan b=b*a
	printf("Hasil b *= a adalah %d\n",b);
	
	b /= a; //b /= a sama dengan b=b/a
	printf("Hasil b /= a adalah %d\n",b);
	
	b %= a; //b mod = a sama dengan b=b mod a
	printf("Hasil b mod = a adalah %d\n",b);
}
