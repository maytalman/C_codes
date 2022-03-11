#include <stdio.h>
#include <conio.h>
int main(){
   /*int a,b,c, kup, sayi, k=1;
   for(a=1; a<=9; a++)  
   	for(b=0; b<=9; b++)
  		for(c=0; c<=9; c++)
   		{
	       sayi = 100*a + 10*b + c;       
	       kup  = a*a*a + b*b*b + c*c*c;  
	       if( sayi==kup ) printf("%d. %d\n",k++,sayi);
 		}
return 0;*/
int x,y,z,sayi,kup;
	for(int x=1;x<=9;x++){
		for(int y=0;y<=9;y++){
			for(int z=0;z<=9;z++){
				sayi=100*x+10*y+1*z;
				kup=x*x*x+y*y*y+z*z*z;
				if(sayi==kup)
				printf("%d\n",sayi);	
			}
		}
	}

	 }



