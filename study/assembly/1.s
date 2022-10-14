/*
int n=1;
int sum=0;

while(n<=100){
	sum += n;
	n += 1;
}

printf("%d", sum);
*/

mov dword [n],1
mov dword [sum],0
cmp dword [n],64h
