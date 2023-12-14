//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

void main(){
	char nama[] = "Agariadne D. S.";
	char gelar[] = ",S.Kom., M.Pd.T.";
	
	strcat(nama,gelar);
	
	printf("Nama Lengkap\t: %s\n", nama);
}
