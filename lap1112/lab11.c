#include <stdio.h>
int main(){
	int i,j; 
	int a [5] = { 2,5,3,6,3};
	int b [5] ;

	for( i=0;i<5;i++){
		b[i]=a[i]+3;
	} 
	for(  i = 0;i<5;i++){
		printf(" %d",b[i]); 
	}
	 for(i=0;i<5;i++){
	 	for(j=i+1;j<5;j++)
	if( a[i]==a[j])
	printf("%d",b[i],b[j]); 
	 } 
} 