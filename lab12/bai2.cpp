#include <stdio.h>
#include <math.h>

    int main() {
    	const float PI = 3.14;
    	const int X = 4 ;
    	int r;
            printf("Nhap ban kinh duong tron :");
            scanf("%d", &r);
            printf("dien tich hinh tron la %.1d = %.1d \n ",r, PI*r*2); 
            printf("dien tich hinh vuong la %d = %d \n", r, r*r);
            printf("dien tich hinh vuong la %d = %d\n ", r,(r*r)/X); 
}
