//Created by Carel Habsian Osagi (23343061) Informatics'23
#include <stdio.h>

int main(){ 
  // isi awal array
	char huruf[5] = {'a', 'b', 'c', 'd', 'e'};
	
	// mengubah isi array 
	huruf[2] = 'z';
	
	// mencetak isi array 
	printf("Huruf: %c\n", huruf[2]);
}
