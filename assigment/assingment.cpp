#include <stdio.h> 
#include <string.h> 
#include <math.h> 
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
    	{
			printf("1. kiem tra so nguyen");
	  	}
    	    break;
    	
    	case 2:
    	{
    		printf("tinh uoc chung va boi chung hai so ");
    		int a,b,uc,bc;
            printf("Nhap (a,b): ");
            scanf("%d%d",&a,&b);
            for (uc=a;uc>=1;uc--){
            if (a%uc==0 && b%uc==0){
            printf("UCLN(%d,%d)=%d\n",a,b,uc);
            } 
            }
           for (bc=a;bc<=a*b;bc++){
           if (bc%a==0 && bc%b==0){
           printf("BCNN(%d,%d)=%d\n",a,b,bc);
		   }
		   }
     	}
    	break;
    	
    	case 3:
    	{
    		printf("chuong trinh tinh tien cho quan karaoke");
    		int gbd , gkt, sogio , tongtien  ;
    		printf(" \nquan chi hoat dong tu 12 den 23 gio");
			printf(" \nnhap gio bat dau :");
			scanf(" %d",&gbd);
			printf(" \nnhap gio ket thuc :");
			scanf(" %d",&gkt);
			if(gbd>12 || gkt < 23 ){
		    sogio = gkt - gbd ;
		   	tongtien = sogio * 150000;
			}else {
				tongtien = 3*150000 + (sogio-3) * 150000*0.7;
			}
			if(gbd >= 14 && gbd <= 17){
			tongtien = tongtien * 0.9;
			}
			printf(" \nso tien khach phai tra la : %d",tongtien);
	   	}
    	break;
    
    	case 4:
       {
    		printf("tinh tien dien ");
    		int sodien, tien ;
			printf(" \nmoi ban nhap so dien : ");
			scanf("%d",&sodien);
			if(sodien <= 50 ){
				tien = sodien*1.678;
			}else if(sodien <=100){
				tien = (50*1.678) + (sodien-50)*1.734;
			}else if(sodien <= 200){
				tien = (50*1.678) + (50*1.734) + (sodien-100)*2.014;
			}else if(sodien<=300){
				tien = (50*1.678) + (50*1.734) + (100*2.014) + (sodien-100)*2.536;
			}else if(sodien<=400){
			tien = (50*1.678) + (50*1.734) + (100*2.014) + (100*2.563) + (sodien-100)*2.834;
			}else{
			tien = (50*1.678) + (50*1.734) + (100*2.014) + (100*2.563) + (100*2.834) + (sodien-400)*2.927;		
			}
			printf(" tong tien dien la : %d",tien); 
		}
    	break;
    	
    	case 5:
    	{
    		printf("chuc nang doi tien");
    	}
    	break;
    	
    	case 6:
    	{
    		printf("xay dung chuc nang tinh lai xuat vay ngan hang vay tra gop ");
    	}
    	break;
    	
    	case 7:
    	{
    		printf(" xay dung chuong trinh vay tien mua xe ");
    	}
    	break;
    	
    	case 8:
    	{
    		printf(" sap xep thong tin sinh vien ");
    		char t[50];
    		float diem1,diem2,diem3 ;
			printf(" \nnhap ten sinh vien :") ;
			gets(t); 
        	printf("\nnhap diem  %.1f \n", diem1);
         	scanf(" %f", &diem1); 
         	printf("\nnhap diem  %.1f \n", diem2 );
         	scanf(" %f", &diem2);
            printf("\nnhap diem  %.1f \n",diem3 );
        	scanf("%f",&diem3);
	        float dtb = ( diem1 + diem2 + diem3)/3;
        	if(dtb >= 9.0){
	     	printf(" hoc sinh xuat sac");
	        }else if(dtb >=8.0){
	    	printf(" hoc sinh gioi");
        	}else if(dtb >=6.5 ){
		    printf(" hoc sinh kha ");
          	}else if(dtb>=5.0){
		    printf(" hoc sinh trung binh");
          	}else if(dtb<5){
			printf("hoc sinh kem ");
		    }
		}
    	break; 
    	case 9:
    	{
    		printf(" xay dung game POLY-LOTT");
    	    int chonso;
			printf(" moi ban nhap so :");
			scanf(" %d",&chonso);
			switch(chonso){
				case 0:
				printf("chuc ban may man lan sau ");
				break;
				case 1:
			    printf("chuc mung ban da trung giai nhi ");
			    break;
			    case 2:
			    printf("chuc mung ban da trung giai nhat ");
			    break;
			    default:
				printf(" chuc ban may man lan sau ") ;
			} 
		}
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
