//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	printf("Pernyataan A!\n");
	int Lesley = 57082;
	int Layla = Lesley;
	int Balmond = Layla + 1;
	
	printf("Berapakah nilai Layla? %d\n", Layla);
	printf("Berapakah nilai Balmond? %d\n", Balmond);
	
	printf("\nPernyataan B!\n");
	int Lesley_B = 57082;
	int *Layla_B = &Lesley_B;
	int Balmond_B = *Layla_B + 1;
	
	printf("Berapakah nilai Layla? %d\n", Layla_B);
	printf("Berapakah nilai Balmond? %d\n", Balmond_B);
	
	return 0;
}
