/*
	* 스택을 이용한 괄호 검사
*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_STACK_SIZE 100

typedef int element;
typedef struct{
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

void init_stack(StackType *s){
	(s->top) = -1;
}

int is_empty(StackType *s){
	return (s->top == -1);
}

int is_full(StackType *s){
	return (s->top == MAX_STACK_SIZE-1);
}

void push(StackType *s, char ch){
	if(is_full(s)){
		printf("스택 가득참!");
		exit(1);
	}
	else{
		s->data[++(s->top)] = ch;
		printf("push %c\n", s->data[(s->top)]);
	}
}

element pop(StackType *s){
	if(is_empty(s)){
		printf("스택 비어있음!");
		exit(1);
	}
	else{
		printf("pop %c\n", s->data[(s->top)]);
		return (s->data[(s->top)--]);
	}
}






int check_matching(const char *in){
	StackType s;

	init_stack(&s);
	char ch, open_ch;
	int n = strlen(in);

	for(int i=0; i<n; i++){
		ch = in[i];
		switch(ch){
		case '(': case '[': case '{':
			push(&s, ch);
			break;
		case ')': case ']': case '}':
			if(is_empty(&s)) return 0;
			else{
				open_ch = pop(&s);
				if((open_ch=='(' && ch!=')') || (open_ch=='[' && ch!=']') || (open_ch=='{' && ch!='}')) return 0;
			}
			break;
		}
	}
	if(!is_empty(&s)) return 0;
	return 1;
}



int main(){
	char *p = "{A[(i+1)]=0;}";
	if (check_matching(p) == 1)
		printf("%s 괄호검사 성공\n", p);
	else
		printf("%s 괄호검사 실패\n", p);
	return 0;
}
