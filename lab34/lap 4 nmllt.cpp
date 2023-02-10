#include <stdio.h>
int main(){
	printf(" nhap ten hoc sinh \n");
	float toan , ly , hoa ;
	printf("nhap diem toan %.1f \n", toan);
	scanf(" %f", &toan); 
	printf(" nhap diem ly %.1f \n", ly );
	scanf(" %f", &ly);
   printf("nhap diem hoa %.1f \n", hoa );
	scanf("%f",&hoa);
	float dtb = ( toan + ly + hoa)/3;
	if(dtb >= 9)
		printf(" xep loai A");
	else if(dtb <9 && dtb >=7 )
		printf(" xep loai B");
	else if(dtb <7 && dtb >=5 )
	    printf(" xep loai C");
	else 
	printf(" xep loai D");
	
	return 0;
}
