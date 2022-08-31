# 리눅스 Github 명령어
## Github 개인정보 등록
```
git config --global user.name "계정 이름"
git config --global user.email "메일 주소"
git config --global --list // 계정 확인
```
- - -
## Github 저장소와 동기화
```
git init : 폴더에 .git 폴더를 만들어줌. 이 안에 git에 필요한 정보들이 업데이트됨.
git remote add origin "주소"
```
- - -
## 저장소에 파일 저장
```
git add -A
git commit -m "커밋 내용"
git push (origin main)
```
- - -
## 현재 상태
```
git status
```
- - -
## 저장소에서 파일 내려받기
```
git clone "주소" or git pull
```
- - -

## 깃 브랜치란?
```
동일한 소스에서 분산 작업을 하기 위한 여러 통로
git branch : 브랜치 리스트 확인
git branch A : A라는 브랜치 생성
git checkout B : B라는 브랜치로 포커스 이동 (현재 A에 있다는 가정하에)
git merge B : B의 변동사항을 병합 (현재 A에 있다는 가정하에)
```
- - -
