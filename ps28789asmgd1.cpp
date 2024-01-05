#include<stdio.h>
#include<stdlib.h>//thu vien co the chay exit
int main()
{
	while(true){
	
	int chon;
	    printf("......................................................  \n");
		printf("|   1. kiem tra so nguyen.                           :  \n");
		printf(":   2. USC va BSC cua 2 so.                          |  \n");
		printf("|   3. Tinh tien cho quan karaoke.                   :  \n");
		printf(":   4. Tinh tien dien.                               |  \n");
		printf("|   5. Chuc nang doi tien.                           :  \n");
		printf(":   6. Tinh lai suat vay ngan hang vay tra gop.      |  \n");
		printf("|   7. Vay tien mua xe.                              :  \n");
		printf(":   8. Sap xep thong tin sinh vien.                  |  \n");
		printf("|   9. game FPOLY-LOTT (2/15).                       :  \n");
		printf(":   10. Chuong trinh tinh toan phan so.              |  \n");
		printf("|   0. De thoat khoi chuong trinh.                   :  \n");
		printf("......................................................  \n");
		printf(" Moi ban nhap so de mo chuc nang tuong ung : \n");
	    scanf("%d",&chon);
	switch(chon){
	
	case 1: printf("Ban da vao ct kiem tra so nguyen:\n");
	        printf("_________________________________\n");
	break;
	case 2: printf("Ban da vao ct USC va BSC cua 2 so:\n");
	        printf("_________________________________\n");
	break;
	case 3: printf("Ban da vao ct tinh tien cho quan karaoke:\n");
	        printf("_________________________________\n");
	break;
	case 4: printf("Ban da vao ct tinh tien dien:\n");
	        printf("_________________________________\n");
	break;
	case 5: printf("Ban da vao ct chuc nang doi tien:\n");
	        printf("_________________________________\n");
	break;
	case 6: printf("Ban da vao ct tinh lai suat vay ngan hang vay tra gop:\n");
	        printf("______________________________________________________\n");
	break;
	case 7: printf("Ban da vao ct vay tien mua xe:\n");
	        printf("______________________________\n");
	break;
	case 8: printf("Ban da vao ct sap xep thong tin sinh vien:\n");
	        printf("__________________________________________\n");
	break;
	case 9: printf("Ban da vao ct game FPOLY-LOTT (2/15):\n");
	        printf("_____________________________________\n");
	break;
	case 10: printf("Ban da vao ct tinh toan phan so:\n");
	        printf("_________________________________\n");
	break;
	case 0: printf("ban da thoat khoi chuong trinh.\n");
	exit(0);
	break;
	default: printf("so ban nhap khong kha dung\nvui long nhap lai:\n");
	break;
}
}
}

    
