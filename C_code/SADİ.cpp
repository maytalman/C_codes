#include<stdio.h>
#include<conio.h>
 int sirala(int A[],int p, int r){
    int tmp;
    int x = A[r];
    int i = p-1;

    for(int j=p; j<=r-1; j++)
    {
        if(A[j]<=x)
        {
            i++;
            tmp=A[i];
            A[i]=A[j];
            A[j]=tmp;
        }
    }
    tmp=A[i+1];
    A[i+1]=A[r];
    A[r]=tmp;
    return i+1;
}
int *quick(int random[],int sol,int sag){
	int sira=0;
	if(sol<sag){
		sira=sirala(random,sol,sag);
		quick(random,sol,sira-1);
		quick(random,sira+1,sag);
	}
	return random;
}
int main(){
	int dizi[9]={7,12,1,8,0,15,4,11,9};
	printf("sirali hali:\t");
		quick( dizi, 0, 8);

	printf("\n\nSorted array is:  ");
	for(int i = 0; i < 9; ++i)
		printf(" %d ", dizi[i]);
		
}

