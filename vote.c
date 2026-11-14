#include<stdio.h>
int main(){
	int a;
	printf("enetr your age");
	scanf("%D",&a);
	if (a>=18){
	printf("you can vote");
	}
	else
	{
		printf("you need some more time");
	}
	return 0;
}