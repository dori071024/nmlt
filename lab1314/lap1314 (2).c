#include <stdio.h>
#include <string.h>
#include <math.h> 
int main(){
	char str1[50];
	int len, count=0, i; 
//nhap chuoi 
	printf("\nnhap vao chuoi : ");
	gets(str1);
	
//do dai cua chuoi co khoang trang la 
	len = strlen(str1);
	printf("\ndo dai chuoi co khoang trang la : %d",len);
	
//do dai cua chuoi khong co khoang trang la  
	for(i =0;i<len;i++){
		if(str1[i]==' '){
			count++;
		}
	}
	printf(" \ndo dai chuoi khong co khoang trang la %d",len-count);

//dem co bao nhieu chu t trong chuoi 
	for( i=0;i<len;i++){
	if(str1[i]=='t'||str1[i]=='T'){
	count++;
	printf("\ngap t o : %d",i);
	printf(" \nso lan chu t xuat hien : %d",count,i); 
    }
    }
 
// coppy chuoi  
	char str2[30];
	strcpy(str2,str1); 
	printf("\nchuoi sao chep la : %s ",str2);
	
//chuoi viet hoa  
	strupr(str1);
	printf(" \nchuoi chu hoa la : %s",str1);
	 
//chuoi viet thuong 
	strlwr(str1);
	printf(" \nchuoi chu thuong la : %s",str1);

//so sanh 2 chuoi 
int a=1 ;
    while(str1[i] != '\0'){
    	if(str1[i] != str2[i]){
    		a==0;
    		break;
		}
		i++;
	}
	if(a== 1 ){
		printf(" \nchuoi %s va chuoi %s la : giong nhau ",str1,str2);
	}else{
		printf(" \nchuoi %s va chuoi %s la : khac nhau ",str1,str2);
	}
	
return 0;
}






