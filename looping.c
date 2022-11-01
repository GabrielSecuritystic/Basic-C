#include<stdio.h>

void while_loop(){

	int x = 0;
	while(x < 10){
		printf("skor:%d\n",x);
		x++;
	}
}

void for_loop(){
	int y;
	for(y=0; y < 10; y++){
		printf("angka:",y);
	}
}

int main(){
	while_loop();
	for_loop();

	return 0;
}
