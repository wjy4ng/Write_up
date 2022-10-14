// go 코드 실행
go run (file): file을 컴파일
go build (file): file 실행 바이너리파일 생성


// 다른 파일을 호출하는 방법
(기존의 import는 GOROOT 경로에서만 패키지를 찾기 때문에 /usr/local/go/src/ 로 파일을 옮겨야 하는 불편함이 있다. 이를 해결하기 위해 의존성 관리 도구인 Go Module을 사용한다.)
go mod init moduleimport // 그럼 go.mod 생성됨
import test "moduleimport/my_module"
// moduleimport: 모듈명
// test: 패키지명
// my_module: 디렉토리


// go 문법
const: 상수값, 변경 불가
var: 변수값, 변경 가능


// type 선언 축약
var name string = "wonjun" /* 서로 같음 */  name := "wonjun"
이 두개는 서로 같음. :=는 go가 type을 알맞게 찾아줌
한 번 정한 type은 변경되지 않음
축약은 func안에서만 가능


// func 함수
func lenAndUpper(name string) (int, string){ // 두개를 리턴 받을 수 있음
    return len(name), strings.ToUpper(name) // nico라고 하면, 4 NICO 출력
}

// argument 여러개 저장
func repeatMe(words ...string){ // if words=("aa","bb","cc","dd","ee")
    fmt.Println(words) // [aa bb cc dd ee]
}
