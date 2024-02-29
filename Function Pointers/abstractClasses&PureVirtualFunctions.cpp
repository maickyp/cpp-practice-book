#include <iostream>

using namespace std;

class IAnimal{
    public:
        virtual void move() = 0;
        virtual void speak() = 0;

        // virtual void eat(){} = 0;  If we use this method instead, IAnimal will become an abstract class
        virtual void eat(){};
};

class Bird : public IAnimal{
    public:
        void fly(){cout<<"Flying"<<endl;}
        virtual void move() {fly();}
        
};

class Crow :  public Bird{
    public:
    virtual void speak(){cout << "Crow speaking" << endl;}
};

int main(){
    // IAnimal animal;  //Cannot be instantiated

    // Bird genericBird; Also cannot be instatiated

    Crow crow; // It can be instatiated
    crow.speak(); // Crow's speak method

    Bird *pBird; // We c annot instatiated a IAnimal or Bird object, but we can instatiated a pointer to those objects
    pBird = &crow;

    pBird->speak(); // Now is poiting to Crow object, and we can run their methods and will return the Crow's method output


    // ======

    crow.eat(); // This will not doing anything cause its not defined  by anyone.

    return 0;
}