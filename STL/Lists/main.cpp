#include <iostream>
#include <list>

using namespace std;

int main(){
    // Just like Vectors, lists compound a bunch of data, but unlike vectors, lists are not together
    // STL:List are implemented as double linked list, so data are not contiguous in the memory
    // Unlike vectors that internaly has an array that increments its capacity to grow in size

    // Insert, Delete operations are time onstant

    list<int> numbers = {2,5,6,8,4,6,5,1,0,4,2,1,5};


    // Data can be added from both endpoints

    for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }

    cout << endl;
    cout << endl;
    // As a containter of the STL, it can use also iterators
    list<int>::iterator it = numbers.begin();
    it++;
    // You can insert wherever you want
    numbers.insert(it, 100);

    for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }


    cout << endl;
    cout << endl;
    it = numbers.begin();
    it++;
    // You can delete wherever you want
    it=numbers.erase(it);
    // CAUTION: erasing an element WILL invalidate your iterator
    // instead return the value of erase to an iterator object and will return you
    // the previous element

    cout << "========================="<<endl;
    for(list<int>::iterator it=numbers.begin(); it != numbers.end();){
        if(*it == 6){
            it = numbers.erase(it);
        }
        else{
            it++;
        }
    }
    for(list<int>::iterator it=numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }

    return 0;
}