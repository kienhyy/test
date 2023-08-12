#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	/*int a;
	a = 10;
	int b = 20;

	printf("\n\n a =%c", a);
	printf("\n b = %c", b);
	printf("\n a = %c, b = %c", a, b);

	float f = 3.4;
	printf("\n\n f = %f", f);
	printf("\n f = %0.2f", f);

	char c = 'a';
	printf("\n\n c = '%c'", c);
	printf("\n c= '%c', Ma ASCII: %c", c, c);
	printf("\n c = %c',Ky tu hoa tuong ung: '%c'", c, c - 32);*/
	// VD 3: 

	/*char a, b;
	a = 5;
	b = 2;
	printf("\nTong = %d",a+b);
	printf("\n Hieu = %d",a-b);
	printf("\n Tich = %d",a*b);
	printf("\n Thuong = %d",a/b);
	printf("\tPhan du = %d",a%b);*/
	//#define PI 3.1416
	//	unsigned long r;
	//	float cv, dt;
	//	printf("Nhap ban kinh:");
	//	scanf_s("%u", &r);
	//	cv = 2*r * PI;
	//	dt = PI * sqrt(r);
	//	printf("chu vi: %0.2f", cv);
	//	printf("\nDien Tich: %0.2f", dt);

		/*float c,f;
		printf("Nhap do F:");
			scanf_s("%f", &f);
		c = 5.0 / 9 * (f - 32);
		printf("Do C:%0.1f", c);*/

		//#define G 6.67E-11
		//	unsigned long m1, m2, r, F;
		//	printf("Nhap khoi luong vat 1:");
		//	scanf_s("%u", &m1);
		//	printf("Nhap khoi luong vat 2:");
		//	scanf_s("%u", &m2);
		//	printf("Nhap khoang cach giua hai vat:");
		//	scanf_s("%u", &r);
		//	F = G * (m1 * m2) / sqrt(r);
		//	printf("Luc hut:%0.2f", F);

			//	float x, kq, n;
			//	printf("Nhap so nguyen:");
			//	scanf_s("%f",&n);
			//	printf("Nhap so thuc:");
			//	scanf_s("%f",&x);
			//	kq = pow(sqrt(x) + 1, n);
			//	printf("\nkq:%0.2f", kq);

			/*unsigned long tien;
			int to50k, to20k, to10, to5, to1;
			printf("Nhap so tien muon chuyen doi:");
				scanf_s("%u", &tien);
				printf("So to 50k:%u", tien / 50000);
				printf("\nSo to 20k:%u", tien % 50000 / 20000);
				printf("\nSo to 10k:%u", tien % 50000 % 20000 / 10000);
				printf("\nSo to 5k:%u", tien % 50000 % 20000 % 10000 / 5000);
				printf("\nSo to 1k:%u", tien % 50000 % 20000 % 10000 % 5000 / 1000);*/

				/*int n;
				printf("Nhap so nguyen:");
				scanf_s("%d", &n);
				if (n % 2 == 0)
				{
					printf("n la so chan");
				}
				else
				{
					printf("n la so le");
				}*/
				/*unsigned long n;
				printf("Nhap so nguyen:");
				scanf_s("%d", &n);
				if (n % 2 == 0)
				{
					printf("n=%d", n * 2);
				}
				else {
					printf("n=%d", n);
				}*/

				/*unsigned long n;
				printf("Nhap so nguyen:");
				scanf_s("%d", &n);
				if (n > 5)
				{
					printf("gia tri n:%d",n + 2);
				}
				else
				{
					printf("gia tri n:0");
				}*/

				/*float x, y;
				printf("nhap gia tri x,y:");
				scanf_s("%f %f", &x, &y);
				printf("\nTong:%0.2f", x + y);
				printf("\nHieu:%0.2f", x - y);
				printf("\nTich:%0.2f", x * y);
				if (y == 0)
				{
					printf("\nThuong khong the tinh");
				}
				else
				{
					printf("\nThuong:%0.3f", x / y);
				}*/

				/*float x, y;
				printf("nhap gia tri x,y:");
				scanf_s("%f %f", &x, &y);
				if (x > y)
				{
					printf("Gia tri lon nhat:%0.2f", x);
				}
				else
				{
					printf("Gia tri lon nhat:%0.2f", y);
				}*/

				//char ky_tu;
				//printf("Nhap mot ky tu");
				//scanf_s("%c", &ky_tu);
				//if (ky_tu >= 'a' && ky_tu <= 'z')
				//{
				//	printf("Chu cai hoa:%c", ky_tu - 32);
				//}
				//else
				//{
				//	printf("ma ASCII:%d", ky_tu);
				//}

				/*float a, b, max;
				printf("nhap gia tri x,y:");
				scanf_s("%f %f", &a, &b);
				max = a;
				if (max<b)
				{
					max = b;
				}
				printf("Gia tri lon nhat:%0.2f", max);*/

				/*float a, b, c, max;
				printf("nhap gia tri a,b,c:");
				scanf_s("%f %f %f", &a, &b, &c);
				max = a;
				if (max<b)
				{
					max = b;
				}
				if (max < c)
				{
					max = c;
				}
				printf("Gia tri lon nhat:%0.2f", max);*/


				//3.4.2.11

			/*float a, b, c, d, e, f, d, dx, dy, x, y;
			printf("nhap 6 so thuc:");
			scanf_s("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f);
			d = a * e - b * d;
			dx = c * e - b * f;
			dy = a * f - d * c;
			if (d !=0)
			{
				x = dx / d;
				y = dy / d;
			}
			if (dx != 0 || dy != 0)
			{
				printf("pt vo dinh");
			}*/

			/*float a, b, x;
			printf("Nhap he so a,b");
			scanf_s("%f %f", &a, &b);
			if (a == 0)
			{
				if (b == 0)
				{
					printf("Nghiem dung voi moi x");
				}
				else
				{
				printf("vo nghiem");
				}
			}
			else
			{
				printf("Co nghiem:%f", -b / a);
			}*/

	float a, b, c, x1, x2, delta;
	printf("Nhap he so a,b,c (ax^2+bx+c=0):");
	scanf_s("%f %f %f", &a, &b, &c);
	delta = pow(b, 2) - 4 * a * c;
	printf("Delta=%0.2f", delta);
		if (delta < 0)
		{
			printf("\npt vo nghiem (delta<0)",delta);
		}
		else
		{
		if (delta == 0)
		{
			printf("\npt co nghiem kep (delta=0):");
			printf("\nx1=x2=%0.3f", -b / 2 * a);
		}
		if (delta > 0)
		{
			printf("\npt co 2 nghiem (delta>0):");
			printf("\nx1=%0.2f", (( - 1 * b + sqrt(delta)) / (2 * a)));
			printf("\nx2=%0.2f", (( - 1 * b - sqrt(delta)) / (2 * a)));
		}
	}
}