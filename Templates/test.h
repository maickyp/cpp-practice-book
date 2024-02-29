#ifndef TEST_H_
#define TEST_H_
using namespace std;

template<class T>
class Test{
    private:
    T obj;

    public:
    Test(T obj){
        this->obj=obj;
    }

    void print(){
        cout << obj << endl;
    }

    T getData(){return obj;}
};

void printNoTemplate(int n){
    cout << n << endl;
}

template <typename T>
void printTemplate(T n){
    cout << n << endl;
}

void printTemplate(float n){
    cout << "No=template " << n << endl;
}

template <> // A template specialization is a implementation specifically for one typename
void printTemplate(char c){
    cout << "char: " << c << endl;
}

#endif// TEST_H_