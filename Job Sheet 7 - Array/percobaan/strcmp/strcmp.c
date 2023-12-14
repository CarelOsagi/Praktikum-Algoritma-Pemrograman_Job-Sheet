//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

void main(){
	char str1[] = "Agariadne";
	char str2[] = "Agariadne";
	int hasil;
	
	//membandingkan stirng
	hasil = strcmp(str1,str2);
	
	if(hasil == 0)
		printf("str1 dan str2 sama");
	else
		printf("str1 dan str2 berbeda");
}
