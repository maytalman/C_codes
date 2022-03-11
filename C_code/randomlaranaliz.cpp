#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<ctime>
	int *selection(int dizi[],int x){
		int min,gecici;
		for(int i=0;i<x;i++){
			min=i;
				for(int j=i+1;j<x;j++){
					if(dizi[j]<dizi[min])
					min=j;
				}
				gecici=dizi[i];
				dizi[i]=dizi[min];
				dizi[min]=gecici;
		}
	}
	int *insertion(int dizi[],int x){
		int gecici;
		for(int i=1;i<=x;i++){
			for(int j=i;j>0 && dizi[j]<dizi[j-1];j--){
				gecici=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=gecici;
			}
		}
	}
	int sirala(int dizi[],int x,int y){
		int i=x-1,gecici,dayanak=dizi[y];
		for(int j=x;j<y;j++){
			if(dizi[j]<=dayanak){
				i++;
				gecici=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gecici;
			}
		}
		gecici=dizi[y];
		dizi[y]=dizi[i+1];
		dizi[i+1]=gecici;
		return i+1;
	}
	int quick(int dizi[],int sol,int sag){
		int gelen=0;
		if(sol<sag){
			gelen=sirala(dizi,sol,sag);
			quick(dizi,sol,gelen-1);
			quick(dizi,gelen+1,sag);
		}
	}
	int bubble(int dizi[],int x){
		int gecici;
		for(int i=0;i<x;i++){
			for(int j=i+1;j<x;j++){
				if(dizi[i]>dizi[j]){
					gecici=dizi[i];
					dizi[i]=dizi[j];
					dizi[j]=gecici;
				}
			}
		}
	}
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
				int dizi1[10000];
			//srand(time(NULL));
				for(int i=0;i<10000;i++){
					dizi1[i]=10000-i;
				}	
				/*for(int i=0;i<3000;i++)
				printf("%d  ",dizi1[i]);
				printf("\n\n");
			*/
			bubble(dizi1,10000);
			/*	for(int i=0;i<3000;i++)
				printf("%d  ",dizi1[i]);
			*/}
			
			
			
			
			
			
