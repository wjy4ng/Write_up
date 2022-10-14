#include "Calculator.h"

Calculator::run(){
    cout << "두수를 입력해주세요: ";
    int a,b;
    cin >> a >> b;
    Adder adder(a,b);
    cout << adder.process() << endl;

    return 0;
}

