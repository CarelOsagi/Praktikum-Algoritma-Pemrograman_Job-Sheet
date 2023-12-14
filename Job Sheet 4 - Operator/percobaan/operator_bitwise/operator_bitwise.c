//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

void main(){
	int a = 6;
	int b = 3;
	
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	printf("------\n");
	
	//operator bitwise AND
	printf("a & b = %d\n",a & b);
	
	//operator bitwise OR
	printf("a | b = %d\n",a | b);
	
	//operator bitwise XOR
	printf("a ^ b = %d\n",a ^ b);
	
	//operator bitwise NOT
	printf("~a = %d\n",~a);
	
	//bitwise LEFT SHIFT
	printf("a << 1 = %d\n",a << 1);
	
	//bitwise RIGHT SHIFT
	printf("a >> 1 = %d\n",a >> 1);
	
}
