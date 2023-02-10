#include <stdio.h>
int main(){
	int a ;
	printf(" nhap a :");
	scanf("%d", &a);
	if (a % 2 == 1){
		printf("la so le %d \n",a);
		
		}
	if (a % 2 == 0){
		printf("la so chan %d",a);
	}
	return 0;
}
