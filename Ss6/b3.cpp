#include <stdio.h>

int main(){
	int a = 1234;
	int b;
	do {
		printf("Nhap :");
		scanf("%d",&b);
		if (b != a ){
			printf("Mat khau sai cmnr\n");
		}
	}while(b !=a);
	printf("Ok");
}

