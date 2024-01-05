#include<stdio.h>
int main()//co ham nay moi chay duoc
{
	float d,r;//tao ra 2 o kieu so co dau cham ten d va r
	printf("nhap d\n");//in ra mnagf hinh
	scanf("%f",&d);//lay du lieu tu ban phim,%f kieu cua float
	printf("nhap r\n");
	scanf("%f",&r);
	float cVi=(d+r)*2,dTich=d*r;
	printf("cVi=%f\n",cVi);
	printf("dTich=%f",dTich);
}
