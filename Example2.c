#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>

int main(){
	//tipe numerik
	int nomor1 = 10;
	float nomor2 = 20.80;

	//tipe boolean
	bool status = true;

	//tipe char
	char karakter = 'a';
	
	//tipe string
	char nama[9] = "williams";
	char *nama2 = "claudia";

	//tipe array
	int skor[10] = {1,2,3,4,5,6,7,8,9,11};

	printf("nomor1: %d\n",nomor1);
	printf("nomor2: %lf\n",nomor2);
	printf("status: %d\n",status);
	printf("karakter: %c\n",karakter);
	printf("nama: %s\n",nama);
	printf("nama2: %s\n",nama2);
	printf("skor1: %d\n",skor[0]);
	printf("skor5: %d\n",skor[5]);
	return 0;
}
