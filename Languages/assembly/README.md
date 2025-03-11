# Assembly Language Write-up for linux
### NASM을 이용한 어셈블리 프로그래밍
```
vi a.asm // 파일 생성
nasm -f elf64 a.asm // 오브젝트 파일 생성
ld a.o // 실행파일 생성
./a.out // 실행
```
- - -
### GCC를 이용한 어셈블리 프로그래밍
```
vi a.s // 파일 생성
gcc -c a.s // 오브젝트 파일 생성
ld a.o // 실행파일 생성
./a.out // 실행
```
- - -
### GDB를 이용한 디스어셈블링
```
gcc -g a.c // 디버깅할 파일 생성
gdb a.out // gdb 실행
set disassembly-flavor intel // AT&T 문법을 intel 문법으로 변환
disas main // main 함수 디스어셈블링
l // 리스트
```
- - -
