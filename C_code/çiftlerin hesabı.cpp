#include<stdio.h>
#include<conio.h>
main(){
	int i,n,toplam=0;
	printf("n icin deger girin...");
	scanf("%d",&n);	
		for(i=0;i<=n;i=i+2)
		toplam=toplam+i;
	printf("toplam: %d \n",toplam);
	{
	if(n%2==0)
	printf("ciftlerin ortalamasi: %d",(2*toplam)/n);
	else 
	printf("ciftlerin ortalamasi:%d",(2*toplam)/(n-1));}
}
/*toplam =0 dememizin nedeni asl�nda d�ng�:
�imdi i=0,toplam=0,n=11 olsun.i<n oldu�undan +2 yapt�k ve i'nin yeni de�eri 2 oldu.toplam�n ba�lang��taki de�eri ve i'nin yeni de�eri olan 2'yi toplay�p 
yeni toplama aktard�.toplam �u an 2+0=2
for'da ba�a d�nd�k i=2 ve i<n bu y�zden +2 yapt� i=4 oldu.az �nce toplam 2 olmu�tu yinr toplay�p toplama aktaracak yani 2+4=6 oldu yeni toplam.
ba�a d�nd�k i �u an 4 ve i<n oldu�undan +2 alarak 6 oldu.toplamda az �nce 6 olmu�tu.tekrar i+toplam yapaca��z.6+6=12 oldu yeni toplam.
ba�a d�nd�k i �u an 6 ve i<n oldu�undan +2 alarak 8 oldu.toplam az �nce 12 olmu�tu.tekrar i+toplam yap�yor ve 8+12=20 oldu yeni toplam.
ba�tay�z yine i �u an 8 ve i<n oldu�undan +2 al�yor ve 10 oluyor.az �nce 20 olan toplamla i'yi topluyoruz ve yeni toplam �u an 30.
ba�a d�n�p kontrol ediyoruz i+2 olursa i=12 oluyor i<n olmak zorunda oldu�undan d�ng� bitmi� oluyor.*/
