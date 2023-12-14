//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	
	char operasi;
	int num1, num2;
	
	printf("Kalkulator sederhana\n");
	printf("--------------------\n");
	printf("Masukkan salah satu operator matematika\n");
	printf("Penjumlahan(+), Pengurangan(-), Perkalian(*), Pembagian(/), Sisa bagi(%%)\n:");
	scanf("%c",&operasi);
	printf("Masukkan bilangan1 dan bilangan2 : ");
	scanf("%d %d", &num1, &num2);
	
	switch(operasi){
		case '+' :
			printf("%d + %d = %d", num1, num2, num1+num2);
			break;
		case '-' :
			printf("%d - %d = %d", num1, num2, num1-num2);
			break;
		case '*' :
			printf("%d x %d = %d", num1, num2, num1*num2);
			break;
		case '/' :
			printf("%d / %d = %d", num1, num2, num1/num2);
			break;
		case '%' :
			printf("%d %% %d = %d", num1, num2, num1%num2);
			break;
		default :
		printf("Inputan Anda salah");	
	}
	return 0;
}
