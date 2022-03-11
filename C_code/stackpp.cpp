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
		if(top==NULL)	printf("stack boþ");
		else if(top->next==NULL){
			free(top);			top=NULL;

		}		
		else{
			temp=top;
			top=temp->next;
			free(temp);
		}
	}
	void popfull(){
		if(top->next==NULL)	
			free(top);
		else{
			temp=top;
			top=top->next;
			free(temp);
			return popfull();
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
				
				if(top==NULL) printf("bos");
	}
		int main(){
			push(5);
			push(10);yazdir();
			pop();perror("oldu");yazdir();
			pop();perror("oldu");
			pop();perror("oldu");
		}
	
