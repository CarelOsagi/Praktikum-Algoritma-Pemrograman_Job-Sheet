//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

void main(){
	//membuat varaibel score
	int score = 0;
	
	//membaut pointer dan referensikan denga alamat dari variabel score
	int *p_score = &score;
	
	//mengakses data variabel score dari pointer
	printf("isi *p_score = %d\n", *p_score);
	
	printf("isi score awal = %d\n", score);
	
	//mengubah data variabel score dari pointer
	*p_score = 5;
	
	//melihat isi variabel score
	printf("isi score setelah diubah = %d\n", score);
}
