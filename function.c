#include<stdio.h>

void swap(int x,int y){
	int temp;
	temp = x;
	y = temp;
	
	printf("setelah ditukar:\n");
	printf("nilai x: %d\n",x);
	printf("nilai y: %d\n",y);
}

void banner(){
	printf("sebelum ditukar:\n");
}


int main(){
	int x = 10;
	int y = 20;

	banner();
	printf("nilai x: %d\n", x);
	printf("nilai y: %d\n", y);

	swap(x,y);
}
