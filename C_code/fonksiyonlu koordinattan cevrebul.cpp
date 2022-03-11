#include<stdio.h>
#include<math.h>
	float cevre(int x1,int y1,int x2,int y2,int x3,int y3){
	int ici1,ici2,ici3;
	float sonuc1,sonuc2,sonuc3;
		ici1=pow((x1-x2),2)+pow((y1-y2),2);
		sonuc1=(float)sqrt(ici1);
		ici2=pow((x3-x2),2)+pow((y3-y2),2);
		sonuc2=(float)sqrt(ici2);
		ici3=pow((x1-x3),2)+pow((y1-y3),2);
		sonuc3=(float)sqrt(ici3);
		return sonuc1+sonuc2+sonuc3;
	}
	int main(){
		int x4,x5,x6,y4,y5,y6;
		printf("(x4,y4)=  ");scanf("%d%d",&x4,&y4);
		printf("(x5,y5)=  ");scanf("%d%d",&x5,&y5);
		printf("(x6,y6)=  ");scanf("%d%d",&x6,&y6);
		printf("\n\t cevre= %2.2f",cevre(x4,y4,x5,y5,x6,y6));
	}
