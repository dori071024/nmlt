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
}sv1,sv2,sv3; 
int main(){
     
//sinh vien 1 
sv1.masv = 123;
strcpy(sv1.ten,"thaonguyen");
sv1.birthday.day = 7;
sv1.birthday.month = 10;
sv1.birthday.year = 2004;  
strcpy(sv1.quequan," danang ");
strcpy(sv1.gioitinh,"nu");
sv1.malop = 18304;
printf("\nsv1 masv %d",sv1.masv);
printf("\nsv1 ten %s",sv1.ten);
printf("\nsv1 ngay thang nam %d-%d-%d",sv1.birthday.day,sv1.birthday.month,sv1.birthday.year);
printf(" \nsv1 que quan %s", sv1.quequan);
printf(" \nsv1 gioi tinh %s",sv1.gioitinh);
printf(" \nsv1 ma lop %d", sv1.malop);

//sinh vien 2 
printf("\n----------------");
sv2.masv = 567;
strcpy(sv2.ten,"doritn");
sv2.birthday.day = 22;
sv2.birthday.month = 7;
sv2.birthday.year = 2000; 
strcpy(sv2.quequan," ha noi ");
strcpy(sv2.gioitinh,"nu");
sv2.malop = 1830;
printf("\nsv2 masv %d",sv2.masv);
printf("\nsv2 ten %s",sv2.ten);
printf("\nsv2 ngay thang nam %d-%d-%d",sv2.birthday.day,sv2.birthday.month,sv2.birthday.year);
printf(" \nsv2 que quan %s", sv2.quequan);
printf(" \nsv2 gioi tinh %s",sv2.gioitinh);
printf(" \nsv2 ma lop %d", sv2.malop);

//sinh vien 3 
printf("\n----------------");
sv3 = sv1;
sv3.malop = 980;
strcpy(sv3.ten,"dori");
sv3.birthday.day = 4;
sv3.birthday.month = 2;
sv3.birthday.year = 2010; 
strcpy(sv3.quequan," da lat ");
strcpy(sv3.gioitinh,"nu");
sv3.malop = 18308;
printf("\nsv3 masv %d",sv3.masv);
printf("\nsv3 ten %s",sv3.ten);
printf("\nsv3 ngay thang nam %d-%d-%d",sv3.birthday.day,sv3.birthday.month,sv3.birthday.year);
printf(" \nsv3 que quan %s", sv3.quequan);
printf(" \nsv3 gioi tinh %s",sv3.gioitinh);
printf(" \nsv3 ma lop %d", sv3.malop);

struct sinhvien sva,svb,svc,svd,svf;



}
