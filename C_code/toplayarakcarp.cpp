#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
	int toplayarakcarp(int k,int n){
		if(k==0)
		return 0;
		else
		return n+toplayarakcarp(k-1,n);
	}
	int cikararakbol(int t,int p){
		if(t==0)
		return 0;
		else if(t-p==0)
		return 1;
		else if(t<p)
		return 0;
		else{
		int sonuc=1+cikararakbol(t-p,p);
		return sonuc;
	}
			
}
	int main(){
		int l,m,z,g,secim;
		char d;
		do{
			system("CLS");
			printf("\t1-->toplama yoluyla carpma : \n\t2-->cikarma yoluyla bolme : ");scanf("%d",&secim);
			switch(secim){
				case 1:
					printf("\n\tcarpmak istediginiz sayilar: ");scanf("%d%d",&l,&m);
					printf("\n\t(%d x %d)= %d",l,m,toplayarakcarp(l,m));
					printf("\n\t tekrar için e cikis icin c tusuna basin.");d=getch();break;
				case 2:
					printf("\n\t bolmek istediginiz sayilar: ");scanf("%d%d",&z,&g);
					printf("\n\t(%d : %d)= %d",z,g,cikararakbol(z,g));
					printf("\n\t tekrar için e cikis icin c tusuna basin.");d=getch();
			}
		}while(d=='e'||d=='E');
		if(d=='c'||d=='C')
		printf("\n\t-----program sonlandi------");
		
	}
