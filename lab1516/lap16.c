#include <stdio.h>
#include <string.h>
struct sinhvien{
	int masv;
	char ten[30];
	char quequan[20];
	char gioitinh[5];
	int malop;
    struct birthday{
	int day;
	int month ;
	int year ;
            }birthday; 
};
int main(){
	struct sinhvien sv1 = { 1 , " nguyen ", " da nang ", " nu ", 11, {07,10,2004} }; 
	struct sinhvien sv2 = { 2 , " dori ", "da lat  ", " nu ",12 , {04 ,02,2010}};
	struct sinhvien sv3 = { 3 , " tn  ", " ha noi ", " nu ", 13 , {25,04,2008}};
	struct sinhvien sv4 = { 4 , " tndr ", " paris ", " nu ", 14 , {19,07,2010}};
	struct sinhvien sv5 = { 5 , " httn ", " london ", " nu ", 15 , {01,10,2000}};
printf(" \nsinh vien : %d,%s,%s,%s,%d,%d-%d-%d", sv1.masv, sv1.ten, sv1.quequan, sv1.gioitinh, sv1.malop,sv1.birthday.day, sv1.birthday.month, sv1.birthday.year);
printf(" \nsinh vien : %d,%s,%s,%s,%d,%d-%d-%d", sv2.masv, sv2.ten, sv2.quequan, sv2.gioitinh, sv2.malop,sv2.birthday.day, sv2.birthday.month, sv2.birthday.year);
printf(" \nsinh vien : %d,%s,%s,%s,%d,%d-%d-%d", sv3.masv, sv3.ten, sv3.quequan, sv3.gioitinh, sv3.malop,sv3.birthday.day, sv3.birthday.month, sv3.birthday.year);
printf(" \nsinh vien : %d,%s,%s,%s,%d,%d-%d-%d", sv4.masv, sv4.ten, sv4.quequan, sv4.gioitinh, sv4.malop,sv4.birthday.day, sv4.birthday.month, sv4.birthday.year);
printf(" \nsinh vien : %d,%s,%s,%s,%d,%d-%d-%d", sv5.masv, sv5.ten, sv5.quequan, sv5.gioitinh, sv5.malop,sv5.birthday.day, sv5.birthday.month, sv5.birthday.year);


	return 0; 
	
} 
