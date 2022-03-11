#include<stdio.h>
#include<math.h>
	int main(){
		int secim,x,y;
		printf("x ve y icin iki adet sayi giriniz:");scanf("%d%d",&x,&y);
		printf("toplama icin :1\n");
		printf("fark icin    :2\n");
		printf("carpma icin  :3\n");
		printf("us alma icin :4\n\n\n");
		printf("<<<<<<<<<<<<<<<<<<<<<<<\n");
		printf("SECIM YAPINIZ...:");scanf("%d",secim);
		printf("<<<<<<<<<<<<<<<<<<<<<<<<\n");
			switch(secim)
			{
				case 1 :printf("toplamýn sonucu=%d",x+y);break;
				case 2 :printf("farkýn sonucu=%d",x-y);break;
				case 3 :printf("carpimin sonucu=%d",x*y);break;
				case 4 :printf("x uzeri y=%d",pow(x,y));break;
			}
	}
