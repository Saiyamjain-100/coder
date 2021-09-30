[0:17 am, 01/10/2021] Subham Soliya: #include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* top=NULL;

void push(int data){
	
	struct node* temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->next=top;
	top=temp;
}

int peek(){
	if(top!=NULL){
		return top->data;
	}
	return -1;
	
}
void pop(){
	struct node* temp=top;
	if(top==NULL){
		printf("\nunderflow\n");
	}
	  top=temp->next;
	    temp->next=NULL;
	    free(temp);
	
}
void display(){
	struct node *temp = top;
	if(top==NULL){
		printf("empty stack");
	}
		while(temp!=NULL){
			printf("%d\n",temp->data);
			temp=temp->next;
		}
}

int main(){
	push(2);
	push(17);
	push(66);
	push(54);
	push(24);
	
	display();
	
	
	
	pop();
	pop();
	pop();
	display();
	
	return 0;
 }
[0:18 am, 01/10/2021] Subham Soliya: stack using li
