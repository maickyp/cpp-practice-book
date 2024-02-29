#include <iostream>

using namespace std;

void TestFunction1(){
    cout << "Hello" << endl;
}

void TestFunction2(int value){
    cout << "Hello: " << value << endl;
}

void TestFunction3(){
    cout << "There" << endl;
}

int main(){
    // TestFunction1();
    // TestFunction2(1);

    // void* pTest() = TestFunction1;       This is not a function pointer
    void (*pTest1)();       // This is a declaration of a funciton pointer, its sign must coincide with the function it will point
    pTest1 = &TestFunction1; // You can assign it after declaration with an & character or without it
    pTest1();
    pTest1 = &TestFunction3; // You can re assign it an execute a different function with the same call pTest1
    pTest1();

    void (*pTest3)(int) = TestFunction2; // You can also assign it at declaration
    (*pTest3)(3);

    // It is important to note that () its the calling caractacter, without it, TestFuncition its is a reference to the actual function, when you add
    // () characters, you are calling them/ Thats why you dont need to add them

    
    return 0;
}