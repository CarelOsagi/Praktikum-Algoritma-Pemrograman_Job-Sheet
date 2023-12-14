//Created by Carel Habsian Osagi (23343061) Informatika'23
#include <stdio.h>

int main(){
	int dtk = 3700;
	int jam = dtk/3600;
	int sisaDtk = dtk % 3600;
	int menit = sisaDtk/60;
	
	sisaDtk = sisaDtk % 60;
	
	printf("Total Detik	= %d\n",dtk);
	printf("jam		= %d:%d:%d\n",jam,menit,sisaDtk);
	
}
