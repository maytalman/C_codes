#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct dugum{
	int data;
	dugum *left;
	dugum *right;
	
};
typedef dugum node;


		node *ekle(node *agac,int x){
			if(agac==NULL){
				node *root=(node *)malloc(sizeof(node));
				root->left=NULL;
				root->right=NULL;
				root->data=x;
				return root;
			}
			if(agac->data < x){
				agac->right=ekle(agac->right,x);
				return agac;
			}
				agac->left=ekle(agac->left,x);
				return agac;
		}
	
		void dolas (node *agac){
			if(agac==NULL)
				return ;
					dolas(agac->left);
					printf("%d ",agac->data);
					dolas(agac->right);
		}
			int karsilastir(node *agac,node *agac2){
				if(agac==NULL && agac2==NULL)
					return 1;
				else if(agac!=NULL && agac2!=NULL)
				return (agac->data==agac2->data && karsilastir(agac->left,agac2->left) && karsilastir(agac->right,agac2->right));
				else return 0;
				}
				int main(){
					node *agac=NULL,*agac2=NULL;
					agac=ekle(agac,12);
					agac=ekle(agac,200);
					agac=ekle(agac,27);
					agac=ekle(agac,190);
					agac=ekle(agac,8);
					dolas(agac);printf("\n");
				
				}
