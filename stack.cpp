#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// define global variable
int max = 100;
int stack[100];
int index = -1;

// print method
void print(){
	printf("\nSTACK elements are: ");
	for(int i=0; i<=index; i++){
		printf("%d ", stack[i]);
	}
	printf("\n\n");
}
// push method
void push(int val){
	if(index != max-1){
		index++;
		stack[index] = val;
	}
	printf("\n\n");
}
// pop method
int pop(){
	printf("\nDelete element in the last index from STACK: ");
	for(int i=0; i<index; i++){
		printf("%d ", stack[i]);
	}
	index--;
	printf("\n\n");
}

int main(){
	int ch, num;
	
	while(1){
		printf("Press 1 for push\n");
		printf("Press 2 for pop\n");
		printf("Press 3 for print\n");
		printf("Press 4 for exit\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				printf("\nEnter the element: ");
				scanf("%d",&num);
				push(num);
				break;
			case 2:
				pop();
				break;
			case 3:
				print();
				break;
			case 4:
				exit(1);
				break;
			default:
				printf("Please fill the rite option");
		}
	}

	return 0;
}
