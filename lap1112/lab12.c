#include <stdio.h>
#include <stdbool.h> 
int main(){
	int i,j;
	bool flag; 
	int a[3][3] = {
	{3,9,11},
	{2,6,15},
	{4,7,24}
	 } ;
	 int c; 
	printf(" nhap mot so tu 1 den 100 :",c);
	scanf("%d",&c); 
	for(i=0;i<3;i++ ){
	 	for(j=0;j<3;j++) 
	 		if(c== a[i][j] ){
	 			printf(" %d xuat hien : [%d][%d]",a,i,j);
	 			flag = true ; 
			}
			if(!flag){
				printf(" khong co",c); 
			}
		 
	} 
return 0; 
} 