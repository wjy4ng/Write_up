#include <iostream>
using namespace std;

class Console{
public:
    static int airplane_menu(){
        cout << "***** 한성항공에 오신것을 환영합니다 *****" << endl << endl;
        cout << "예약:1, 취소:2, 보기:3, 끝내기:4>>" << endl;
        int num;
        cin >> num;
        return num;
    };
    static int airplane_time(){
        cout << "07시:1, 12시:2, 17시:3>>" << endl;
        int num;
        cin >> num;
        return num;
    };
    static int airplane_seat(){
        cout << "좌석 번호>>" << endl;
        int num;
        cin >> num;
        return num;
    };
    static string airplane_name(){
        cout << "이름 입력>>" << endl;
        string name;
        cin >> name;
        return name;
    };
};

class Seat{
    string name;
public:
    Seat(){}
    Seat(string name) {this->name = name;} //생성자 생성
    void setName(string name) { this->name = name; } //seat위치를 저장
    string getName() { return name; }//저장된 seat위치를 받는다
};

class Schedule{
    Seat* seat;
public:
    Schedule() {
        seat = new Seat[8]; //Seat 변수를 가지며 생성자에서 크기가 8인 Seat변수 배열 선언
    }
    void show(int num) { //좌석 예매와 취소할 시 해당하는 시간 대의 좌석 상황을 보여주기 위해 show 멤버 함수 사용, show 멤버 함수는 정수형 num매개변수를 하나 입력 받아 해당하는 시간대의 좌석 현황만 보여줌
        if (num == 1) cout << "7시:";
        else if (num == 2) cout << "12시:";
        else if (num == 3) cout << "17시:";

        for (int i = 0; i < 9; i++)
            cout << "\t" << seat[i].getName();
        cout << endl;
    }
    void setNames(int num, string name) { seat[num - 1].setName(name); } // 그 밖에 좌석을 예약하고 취소 시 이름을 수정하기 위해 setNames멤버 함수
    string getNames(int num) { return seat[num - 1].getName(); } //해당 좌석의 이름을 리턴하는 getNames멤버 함수를 가짐
};

class AirlineBook : public Console, public Seat, public Schedule{
public:
    void AirlinBook() {
        schedule = new Schedule[3];
    }
    void showSchedule(int airTime) {
        switch (airTime) {
        case 0: cout << "7시:"; break;
        case 1: cout << "12시:"; break;
        case 2: cout << "17시:"; break;
        }
        schedule[airTime].show(); // <--------------------------오류
    }
    void showaAllSchedule() {
        for (int airTime = 0; airTime < 3; airTime++) {
            showSchedule(airTime);
            cout << endl << endl;
        }
    }
    Schedule getSchedule(int airTime) {
        return schedule[airTime];
    }
};

int main(){
    AirlineBook ALB;
    while(true){
        int menu, time, seat;
        string name;

        menu = ALB.airplane_menu();
        if(menu == 1) airplane_time();
        else if(menu == 2) airplane_time();
        else if(menu == 3) ALB.showSchedule();
        else if(menu == 4) return 0;
    }
}
