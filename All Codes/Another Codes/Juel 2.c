/*Insert at begin*/
#include<stdio.h>
#include<stdlib.h>
struct node{

	int data;
	float data2;
	struct node* link;
};
struct node* root=NULL;

create_ll(){

	struct node* temp;

	temp=(struct node*)malloc(sizeof(struct node));

	printf("enter the node data\n");

	scanf("%d%f",&temp->data,&temp->data2);
	temp->link=NULL;

	if(root==NULL){

		root=temp;
	}
	else{

		struct node* p;
		p=root;

		while(p->link!=NULL){

			p=p->link;

		}
		p->link=temp;
	}
}

display(){

	struct node* temp;
	temp=root;

	if(temp==NULL){

		printf("no data found\n");
	}
	else{

		while(temp!=NULL){
			printf("\t-->%d %.2f",temp->data,temp->data2);
			temp=temp->link;
		}

	}
}

insert_begin(){

	struct node* temp;

	temp=(struct node*)malloc(sizeof(struct node));

	printf("\nenter the new node data\n");
	scanf("%d%f",&temp->data,&temp->data2);
	temp->link=NULL;

	if(root==NULL){
		root=temp;
	}
	else{

		temp->link=root;
		root=temp;
	}

}

void main()
{

	int i,n;

	printf("enter the node number\n");
	scanf("%d",&n);

	for(i=1;i<=n;i++){
		create_ll();
	}

	display();
	insert_begin();
	display();
}
