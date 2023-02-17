#include <stdio.h>
int main()
{
	printf(" nhap ten hoc sinh\n");
	float toan, ly, hoa;
	printf("nhap diem toan %.1f \n", toan);
	scanf(" %f", &toan);
	printf(" nhap diem ly %.1f \n", ly);
	scanf(" %f", &ly);
	printf("nhap diem hoa %.1f \n", hoa);
	scanf("%f", &hoa);
	float dtb = (toan + ly + hoa) / 3;
	char c;
	if (dtb >= 9)
	{
		c = 1;
	}
	else if (dtb < 9 && dtb >= 7)
	{
		c = 2;
	}
	else if (dtb < 7 && dtb >= 5)
	{
		c = 3;
	}
	else
	{
		c = 4;
	}
	switch (c)
	{
	case 1:
		printf(" xep loai A\n");
		break;
	case 2:
		printf(" xep loai B\n");
		break;
	case 3:
		printf(" xep loai C\n ");
		break;
	case 4:
		printf(" xep loai D\n");
		break;
	default:
		printf(" khong co xep loai");
	}
}
