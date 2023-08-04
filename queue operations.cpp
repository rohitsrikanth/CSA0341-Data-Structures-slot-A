#include<stdio.h>
#define size 4
int inp[67],front=-1,rear=-1;
void enqueue();
void dequeue();
void show();

int main(){
	int ch;
	while(ch!=4){
		printf("enter the choice\n");
		printf("1.ENQUEUE,2.DEQUEUE,3.SHOW,4.EXIT\n");
		scanf("%d",&ch);
		if(ch==1){
			enqueue();
			
		}
		else if(ch==2){
			dequeue();
			
		}
		else if(ch==3){
			show();
			
		}
		else if(ch==4){
			continue;
		}
		}
			}
	
void enqueue(){
	int k;
	if(front==size-1){
		printf("overflow\n");
	}
	else{
		if(front==-1){
			front=0;
		}
		printf("nenter the element to enqueue\n");
		scanf("%d",&k);
		rear=rear+1;
		inp[rear]=k;
	}
}
void dequeue(){
	if(front==-1){
		printf("underflow\n");
	}
	else{
		front=front+1;
	}
}
void show(){
	if(front==-1){
		printf("no leements to print\n");
	}
	else{
		int i;
		for(i=0;i<size-1;i++){
			printf("%d\n",inp[i]);
		}
	}
}
