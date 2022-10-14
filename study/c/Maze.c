#include <stdio.h>
#define MAX_STACK_SIZE 100
#define MAZE_SIZE 6

typedef struct{
	short r;
	short c;
} element;

typedef struct{
	element data[MAX_STACK_SIZE];
	int top;
} StackType;

element here={1,0}, entry={1,0};
char maze[MAZE_SIZE][MAZE_SIZE]{
	{'1','1','1','1','1','1'},
	{'e','0','1','0','0','1'},
	{'1','0','0','0','1','1'},
	{'1','0','1','0','1','1'},
	{'1','0','1','0','0','x'},
	{'1','1','1','1','1','1'},
};

int main(){
	int r,c;
	StackType s;
	init_stack(&s);
	here=entry;
	while(maze[here.r][here.c] != 'x'){
		r=here.r;
		c=here.c;
		maze[r][c] = '.';
		maze_print(maze);
		push_loc(
}
