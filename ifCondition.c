#include<stdio.h>

void tebak_angka(int x){
	if(x == 10){
		printf("Benar!\n");
	}else if(x > 10){
		printf("Terlalu tinggi!\n");
	}else if(x < 10){
		printf("Terlalu rendah!\n");
	}
}

int main(){
	int input;
	printf("Masukan angka:");
	scanf("%d",&input);

	tebak_angka(input);
}
