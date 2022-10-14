/*
	* c언어로 스택 구현
*/



#include <stdio.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 2 // 스택 최대 크기

typedef int element; // 데이터 자료형
typedef struct{
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

void init_stack(StackType *s){
	s->top = -1;
}

int is_empty(StackType *s){ // 비어있으면 1
	return (s->top == -1);
}

int is_full(StackType *s){ // 꽉 찼으면 1
	return (s->top == MAX_STACK_SIZE - 1);
}

int push(StackType *s, element item){
	if(is_full(s)){
		printf("스택 가득참!\n");
		exit(1);
	}
	else s->data[++(s->top)] = item;
}

element pop(StackType *s){
	if(is_empty(s)){
		printf("스택이 비어있음!\n");
		exit(1);
	}
	else return s->data[(s->top)--];
}



int main(){
	StackType s;

	init_stack(&s);
	push(&s, 1);
	push(&s, 2);
	push(&s, 3);
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
	printf("%d\n", pop(&s));
}

