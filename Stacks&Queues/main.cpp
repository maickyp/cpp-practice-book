#include <stack>
#include <queue>
#include <iostream>

using namespace std;

class Test{
    private:
        string name;
    public:
        Test():name(""){};
        Test(string name):name(name){};
        ~Test(){};
        void print(){
            cout<<name<<endl<<flush;
        };
};

int main(){
    // LIFO -> Last In First Out
    stack<Test> testStack;
    testStack.push(Test("Mike"));
    testStack.push(Test("Laurie"));
    testStack.push(Test("Josh"));
    testStack.push(Test("Mark"));

    Test test1 = testStack.top();
    test1.print();
    test1 = testStack.top();
    test1.print();
    testStack.pop();
    Test test2 = testStack.top();
    test2.print();

    // This is not possible due pop() is a void return function
    // Test test3 = testStack.pop();
    // test3.print();

    // Due top() returns a the object itself, if you 
    // make a reference object it will not create a shallow copy to
    // create a new object. It will have a reference for the returned object
    // Cautious! If you pop it, the value of this variable is unreliable data.
    Test &test3 = testStack.top();
    test3.print();

    cout << " =========================================================== " << endl;

    // FIFO -> First In First Out
    queue<Test> testQueue;
    testQueue.push(Test("Alex"));
    testQueue.push(Test("Sofia"));
    testQueue.push(Test("Ricardo"));
    testQueue.push(Test("Hector"));
    testQueue.push(Test("Julian"));

    Test test4 = testQueue.front();
    test4.print();
    Test test5 = testQueue.back();
    test5.print();

    // testQueue.pop();

    // test4 = testQueue.front();
    // test4.print();
    // test5 = testQueue.back();
    // test5.print();

    // Test &test6 = testQueue.front();
    // test6.print();


    while(!testQueue.empty()){
        Test test = testQueue.front();
        test.print();
        testQueue.pop();
    }

    return 0;
}