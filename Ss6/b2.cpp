#include <stdio.h>
int main (){
	int a, suma=0 , sumb=0;
	for(int i=0; i<5; i++){
		printf("nhap so vao:");
		scanf("%d",&a);
		if(a%2 ==0){
			suma++;
		}else{
			sumb++;
		}
	}
	printf("Tong so le la %d",suma);
	printf("Tong so le la %d",sumb);
}
