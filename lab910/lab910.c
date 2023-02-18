#include <stdio.h>
#include <math.h>
int main(){
    int n;
	printf(" \n1. Cong hai so nguyen (ham tinh tong hai so)");
	
	printf(" \n2. Giai phuong trinh bac hai ");
	
	printf(" \nmoi ban chon so : ");
    
	scanf("%d",&n);
	
	int chon ;
	
	int num1,num2,sum;
    
	float a,b,c,d,delta,x1,x2;
    
	switch(n){
    
	case 1:
	
	printf("\n nhap hai so nguyen  :");
    
	scanf("%d %d" ,&num1,&num2);
    
	sum = num1 + num2;
    
	printf(" tong cua hai so %d va %d la %d :",num1,num2, sum);
    
	break;
    
	case 2:
    
	printf(" nhap vao 3 so a,b,c :");
	
	scanf("%f %f %f",&a,&b,&c );
    
	if(a==0){
    
	if(b==0){
	
	if(c==0){
	
	printf(" phuong trinh vo so nghiem");
	
	}else{
	
	printf(" phuong trinh vo nghiem");
	
	}
	
	}else {
	
	printf(" phuong trinh co nghiem duy nhat ",-c/b);
	
	}
	
	}else{
	
	delta = b*b - 4*a*c;
	
	if( delta > 0 ){
    
	x1= ( -b + sqrt(delta) / (2*a));
    
	
	x2= ( -b - sqrt(delta) / (2*a));

	printf(" nghiem thu nhat x1 = %f",x1);
	
	printf(" \n nghiem thu hai x2 = %f", x2);
    
	}else if( delta == 0){
	
	printf(" phuong trinh co nghiem kep : x1 = x2 = %f", -b/2*a);
	
	}else{
	
	printf(" phuong trinh vo nghiem");
	
	break;
	
	}
	}
	}
	return 0;
} 
