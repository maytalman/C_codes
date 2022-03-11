#include<stdio.h>
#include<conio.h>
#include<math.h>
	int main(){
		int x1,y1,x2,y2,x3,y3;
		float kenar1,kenar2,kenar3,cevre;
		printf("ilk koordinatlari girin:  ",x1,y1);scanf("%d%d",&x1,&y1);
		printf("ikinci koordinatlari girin: ");scanf("%d%d",&x2,&y2);
		printf("ucuncu koordinatlari girin: ",x3,y3);scanf("%d%d",&x3,&y3);
		kenar1=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
		kenar2=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
		kenar3=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
		printf("cevre:%.2f",sqrt(kenar1)+sqrt(kenar2)+sqrt(kenar3));
	}
