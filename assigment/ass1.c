#include <stdio.h>
int main(){
int chon;
do{
	printf("\n -------------------- MENU --------------------") ;
	printf("\n1. Kiem tra so nguyen ");
	printf("\n2. Tinh uoc chung va boi chung hai so");
	printf("\n3. Chuong trinh tinh tien cho quan karaoke");
	printf("\n4. Tinh tien dien ");
	printf("\n5. Chuc nang doi tien");
	printf("\n6. Xay dung chuc nang tinh lai suat vay ngan hang vay tra gop ");
	printf("\n7. Xay dung chuong trinh vay tien mua xe");
	printf("\n8. Sap xep thong tin sinh vien ");
	printf("\n9. Xay dung game POLY-LOTT");
	printf("\n10. Thoat chuong trinh ");
	printf("\n------------------------------------------------");
	printf("\nMoi ban nhap vao :");
    scanf("%d",&chon);
     
    switch(chon){
    	case 1:
    		printf(" kiem tra so nguyen");
    	break;
    	case 2:
    		printf("tinh uoc chung va boi chung hai so ");
    	break;
    	case 3:
    		printf("chuong trinh tinh tien cho quan karaoke");
    	break;
    	case 4:
    		printf("tinh tien dien ");
    	break;
    	case 5:
    		printf("chuc nang doi tien");
    	break;
    	case 6:
    		printf("xay dung chuc nang tinh lai xuat vay ngan hang vay tra gop ");
    	break;
    	case 7:
    		printf(" xay dung chuong trinh vay tien mua xe ");
    	break;
    	case 8:
    		printf(" sap xep thong tin sinh vien ");
    	case 9:
    		printf(" xay dung game POLY-LOTT");
    	break;
    	case 10:
    	break;
    	default:
    		printf("thoat chuong trinh");
    	break;
	}
    }while(chon!=10);
    return 0;
} 