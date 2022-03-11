#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
int toplam=0,leaf_array[10],k=0;//global deðiþkenler 

struct dugum{
	int data;
	dugum *left;
	dugum *right;
	
};
typedef dugum node;
node *root=NULL,*temp=NULL;

node *newnode(int x){//yeni düðüm oluþturmak için fonksiyon
		node *ekle=(node *)malloc(sizeof(node));
		ekle->data=x;
		ekle->left=NULL;
		ekle->right=NULL;
		
		if(root==NULL)
			root=ekle;
		return ekle;
	}
node *add(node *root,int x){//aðaca düðüm eklemek için rekürsif fonksiyon
	if(root==NULL)
		return newnode(x);
		
	if(root->data < x)
		root->right=add(root->right,x);
		
	else if(root->data > x)
		root->left=add(root->left,x);
		
		}
		
void Inorder_Yazdir(node *root){//tüm aðacý inorder yazdýran rekürsif fonksiyon
	if(root==NULL)
	return ;
		Inorder_Yazdir(root->left);
		printf("%d ",root->data);
		Inorder_Yazdir(root->right);
		
		}
		
node *Search(int aranan){//istenen düðümü aðaçta arayan fonksiyon
	temp=root;
	int count =0;
	while(temp->data != aranan){
			if(temp!= NULL){
				if(aranan < temp->data){
					temp=temp->left;
				    count++;
			}
				else{
					temp=temp->right;
					count++;
				}
			}
			if (temp == NULL){
				printf("\n\t%d aðaçta bulunamadý !",aranan);
				return NULL;
			}
	}
	printf("\n\taranan : %d ,%d adýmda bulundu",temp->data,count);
	return temp;
}

int Leaf_AVG(node *root){//yapraklarýn ortalamasýný bulan fonksiyon
	
		if(root==NULL)
			return 0;
		
		Leaf_AVG(root->left);
		if(root->left==NULL && root->right==NULL){
			leaf_array[k]=root->data;k++;
		}
		Leaf_AVG(root->right);
		
}

void Big_Numbers(node *root,int n){
	if(root==NULL)
	return ;
		Big_Numbers(root->left,n);
		if(root->data>n)
		printf("%d\t",root->data,n);
		Big_Numbers(root->right,n);
}

int Level_Yazdir(node *root,int start,int x){//istenen seviyeyi yazdýran fonksiyon
	if(root==NULL)
		return 1;
	else if (start==x){
	printf("%d ",root->data);
	}
		
	start++;
		Level_Yazdir(root->left,start,x);
		Level_Yazdir(root->right,start,x);
}

void hizala(){
	printf("\n\t");
}
int main(){
	int sayi,secim,bul,deger,seviye,start=0;

		setlocale(LC_ALL,"Turkish");
		
	do{
		printf("\n---------------------------------------------------------------------");
		printf("\n\n\t1 Ekleme\n");
		printf("\t2 Seviye yazdýrma \n");
		printf("\t3 Arama\n");
		printf("\t4 Yaprak düðümlerin ortalamasýný bulma\n");
		printf("\t5 Büyük elemanlarý bulma\n");
		printf("\t6 Aðacý yazdýrma\n");
		printf("\t7 Bitir\n");
		printf("\n------------------------------------------------------------------------");
		printf("\n\tSeçiminizi tuþlayýn: ");
		scanf("%d",&secim);
		
		switch(secim){
			
			case 1:	
				printf("\n\tEklemek istediðiniz deðeri girin:");
				scanf("%d",&sayi);	
				add(root,sayi);
		    break;
				 
			case 2:
				printf("\n\tÝstediðiniz seviyeyi giriniz: ");
				scanf("%d",&seviye);
				hizala();
				Level_Yazdir(root,0,seviye);
				
			break;
					
			case 3:
				printf("\n\tArama yapmak istediðiniz deðeri giriniz:");
	  	        scanf("%d",&deger);
	  	        Search(deger);
			
			break;
				
			case 4:
				Leaf_AVG(root);
				for(int i=0;i<k;i++){
					printf("\n\t%d ",leaf_array[i]);
					toplam=toplam+leaf_array[i];
				}
				printf("\n\tYapraklarýn ortalama deðeri :%d",toplam/k);
			break;
				
			case 5:
				printf("\n\tHangi deðerden daha büyük deðerler bulunsun ?");
	  	        scanf("%d",&bul);
	  	        hizala();
	  	        Big_Numbers(root,bul);
		    break;
			    
			case 6:hizala();
		        Inorder_Yazdir(root);
			break;	
			
			case 7:
				printf("\n\tPROGRAM BÝTTÝ !!");
			exit(0);  	
		}
	
	}while(1==1);	              


}


