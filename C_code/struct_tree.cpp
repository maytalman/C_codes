#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<locale.h>
int toplam=0,leaf[10],k=0,start=0;
struct dugum{
	int data;
	dugum *left;
	dugum *right;
	
};
typedef dugum node;
node *root=NULL,*temp=NULL;
node *add(node *root,int x){
	if(root==NULL){
		node *root=(node *)malloc(sizeof(node));
		root->left=NULL;
		root->right=NULL;
		root->data=x;
		return root;
			}
	if(root->data < x){
		root->right=add(root->right,x);
		
			}
	else
		root->left=add(root->left,x);
		return root;
		}
		
void inorder_yazdir(node *root){
	if(root==NULL)
	return ;
		inorder_yazdir(root->left);
		printf("%d ",root->data);
		inorder_yazdir(root->right);
		}
node *search(int aranan){
	temp=root;
	int count =0;
	while(temp->data != aranan){
			if(temp!= NULL){
				printf("\n%d ",temp->data);
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
				printf("\n\t%d aðaçta bulunamadý !");
				return NULL;
			}
	}
	printf("\n\taranan : %d ,%d adýmda bulundu",temp->data,count);
	return temp;
}
int leaf_avg(node *root){
	
		if(root==NULL){
			return 0;
		}
		
		leaf_avg(root->left);
		if(root->left==NULL && root->right==NULL){
			leaf[k]=root->data;k++;
		}
		leaf_avg(root->right);
		
}
void big_numbers(node *root,int n){
	if(root==NULL)
	return ;
		big_numbers(root->left,n);
		if(root->data>n)
		printf("%d\t",root->data,n);
		big_numbers(root->right,n);
}
int level_yazdir(node *root,int start,int x){
	if(root==NULL)
		return 1;
	else if (start==x)
		printf("%d ",root->data);
	start++;
		level_yazdir(root->left,start,x);
		level_yazdir(root->right,start,x);
}

void hizala(){
	printf("\n\t");
}
int main(){
	int sayi,secim,bul,deger,seviye;

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
				root=add(root,sayi);
		    break;
				 
			case 2:
				printf("\n\tÝstediðiniz seviyeyi giriniz: ");
				scanf("%d",&seviye);
				hizala();
				level_yazdir(root,start,seviye);
				
			break;
					
			case 3:
				printf("\n\tArama yapmak istediðiniz deðeri giriniz:");
	  	        scanf("%d",&deger);
	  	        
	  	        search(deger);
			
			break;
				
			case 4:
				leaf_avg(root);
				for(int i=0;i<k;i++){
					printf("\n\t%d ",leaf[i]);
					toplam=toplam+leaf[i];
				}
				printf("\n\tYapraklarýn ortalama deðeri :%d",toplam/k);
			break;
				
			case 5:
				printf("\n\tHangi deðerden daha büyük deðerler bulunsun ?");
	  	        scanf("%d",&bul);
	  	        hizala();
	  	        big_numbers(root,bul);
		    break;
			    
			case 6:hizala();
		        inorder_yazdir(root);
			break;	
			
			case 7:
				printf("\n\tPROGRAM BÝTTÝ !!");
			exit(0);  	
		}
	
	}while(1==1);	              


}














