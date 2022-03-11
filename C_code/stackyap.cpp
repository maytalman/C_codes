#include<stdio.h>
#include<stdlib.h>
struct dugum{
	int data;
	struct dugum *next;
};
typedef dugum node;
node *top=NULL,*temp=NULL,*iter=NULL;
	void push(int x){ 
		if(top==NULL){
			node *top=(node *)malloc(sizeof(node));
			top->data=x;
			top->next=NULL;
		}
			node *ekle=(node *)malloc(sizeof(node));
			ekle->data=x;
			ekle->next=top;
			top=ekle;
		}
	void pop(){
		if(top->data==NULL)	printf("stack boþ");
		else if(top->next==NULL){
			iter=top;
			top=NULL;
			free(iter);
		}		
		else{
			temp=top;
			top=temp->next;
			free(temp);
		}
	}

	void yazdir(){
		iter=top;
		while(iter->next!=NULL){
			printf("%d <- ",iter->data); 
			iter=iter->next;
		}
				if(iter->next==NULL)
				printf("%d ",iter->data);
	}
		int main(){
			push(5);
			push(10);yazdir();
			pop();perror("oldu");yazdir();
			pop();perror("oldu");
			pop();perror("oldu");
		}
	
