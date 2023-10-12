#include<stdio.h>
#include<conio.h>

// define global variable
int max = 100;
int last_element;
int stack[100];
int index = -1;

void print(){
	for(int i=0; i<=index; i++){
		printf("%d ", stack[i]);
	}
}

void push(int val){
	if(index != max-1){
		index++;
		stack[index] = val;
		last_element = index;
	}
}

int pop(){
	printf("\nDelete element in the last index");
	for(int i=0; i<index; i++){
		printf("%d ", stack[i]);
	}
	index--;
}

int main(){
	printf("Press 1 for push");
	printf("Press 2 for pop");
	printf("Press 3 for print");
	printf("Press 4 for exit");
	
	while(1){
		switch
	}

	return 0;
}
