const http = require('http');
 
const hostname = '0.0.0.0';
const port = '9999';
 
// http모듈의 createServer 함수를 호출로 서버 생성
// req: 웹 요청 매개변수, res: 웹 응답 매개변수
httpd = http.createServer(function (req, res) {
    // writeHead: 응답 헤더를 작성
    // 200: 응답 성공, text/html: html문서
    res.writeHead(200, {'Content-Type': 'text/html'});
    // end: 응답 본문을 작성
    res.end('Hello World111');   
});

// listen: 매개변수로 포트와 호스트를 지정
httpd.listen(port, hostname, function(){    
    console.log('server start');
});
