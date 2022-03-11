#include<stdio.h>
#include<conio.h>
main (){
	int vize,final;
	float sinir;
	printf("vize ve final notunuz:");
	scanf("%d%d",&vize,&final);
	sinir=(float)(vize*4/10.0)+(final*6/10.0);
	printf("%f",sinir);
	
{	
	if(sinir>=60)
		printf("\n gectiniz...");
	else
		printf("\n butunleme girin:");
}
		int butunleme;
		scanf("%d",&butunleme);
		float gn;
		gn=(float)(vize*4/10)+(butunleme*6/10);
		printf("%f",gn);

	if(gn>=60)
		printf("\n gectiniz...");
	else
		printf("\n gecmis olsun...");			

}
































