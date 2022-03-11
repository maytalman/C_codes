#include<stdio.h>
#include<conio.h>
	int main(){
	int dizi[5]={8,6,6,8,1},temp;
for(int i=1; i<6; i++) {
        for(int j=i; j > 0 && dizi[j] == dizi[j-1]; j--) {
            temp=dizi[j];
            dizi[j]=dizi[j-1];
            dizi[j-1]=temp;
        }
    }
    for(int i=1;i<6;i++){
    	printf("%d  ",dizi[i]);
	}
}
    

