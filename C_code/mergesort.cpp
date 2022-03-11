#include<stdlib.h>
#include<stdio.h>
 void merge(int dizi[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;
	int L[n1], R[n2];
 		for (i = 0; i < n1; i++)
        	L[i] = dizi[l + i];
    	for (j = 0; j < n2; j++)
        	R[j] = dizi[m + 1+ j];
		 	i = 0; 
		    j = 0;
		    k = l;
	    while (i < n1 && j < n2){
	        if (L[i] <= R[j]){
            dizi[k] = L[i];
            i++;
        }
		else{
            dizi[k] = R[j];
            j++;
        }
        k++;
    }
 		while (i < n1){
        dizi[k] = L[i];
        i++;
        k++;
    }
	    while (j < n2){
        dizi[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int dizi[], int l, int r){
    if (l < r){
        int m = l+(r-l)/2;
 		mergeSort(dizi, l, m);
        mergeSort(dizi, m+1, r);
        merge(dizi, l, m, r);
    }
}
int main(){
    int dizi[]={9,5,6,7,10};
    mergeSort(dizi, 0, 4);
    for(int i=0;i<5;i++)
    printf("%d ",dizi[i]);
	return 0;
}
