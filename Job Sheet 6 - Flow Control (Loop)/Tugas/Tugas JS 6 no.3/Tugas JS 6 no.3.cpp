//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	
	int tinggi;
	printf("Masukkan tinggi tangga deret bilangan : ");
	scanf("%d",&tinggi);
	
	for(int i = 1; i <= tinggi; i++){
		for(int j = 1; j <= i; j++){
			printf("%d ",i*j);
		}
		printf("\n");
	}
	return 0;
}
