//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int sum(int n);

int main(){
	int number, result;
	
	printf("Enter a positive integer: ");
	scanf("%d", &number);
	
	result = sum(number);
	
	printf("sum = %d", result);
}

int sum(int num){
	if(num != 0)
		return num + sum(num - 1);
	else
		return num;
}