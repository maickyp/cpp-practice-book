#include <iostream>

using namespace std;

class Test{
    public:
    virtual bool operator()(string &text) = 0;
    virtual ~Test(){};
};

class MatchTest : public Test {
    public:
    virtual bool operator()(string &text){
        return text == "lion";
    }
};
 
void check(string text, Test& test){
    if (test(text)){
        cout << "Text matches!" << endl;
    }
    else{
        cout << "No match"<<endl;
    }
};


int main(){
    // As far as i understand, a functor is any object that can be called by overriding its () operator
    // so, you can treat it like any other object, but you can call that method anywhere ou like
    MatchTest pred;
    string value = "lion";


    check(value, pred);
    check("zebra", pred);
    return 0;
}