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
/*toplam =0 dememizin nedeni aslýnda döngü:
þimdi i=0,toplam=0,n=11 olsun.i<n olduðundan +2 yaptýk ve i'nin yeni deðeri 2 oldu.toplamýn baþlangýçtaki deðeri ve i'nin yeni deðeri olan 2'yi toplayýp 
yeni toplama aktardý.toplam þu an 2+0=2
for'da baþa döndük i=2 ve i<n bu yüzden +2 yaptý i=4 oldu.az önce toplam 2 olmuþtu yinr toplayýp toplama aktaracak yani 2+4=6 oldu yeni toplam.
baþa döndük i þu an 4 ve i<n olduðundan +2 alarak 6 oldu.toplamda az önce 6 olmuþtu.tekrar i+toplam yapacaðýz.6+6=12 oldu yeni toplam.
baþa döndük i þu an 6 ve i<n olduðundan +2 alarak 8 oldu.toplam az önce 12 olmuþtu.tekrar i+toplam yapýyor ve 8+12=20 oldu yeni toplam.
baþtayýz yine i þu an 8 ve i<n olduðundan +2 alýyor ve 10 oluyor.az önce 20 olan toplamla i'yi topluyoruz ve yeni toplam þu an 30.
baþa dönüp kontrol ediyoruz i+2 olursa i=12 oluyor i<n olmak zorunda olduðundan döngü bitmiþ oluyor.*/
