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

