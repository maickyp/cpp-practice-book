#include <set>
#include <iostream>

using namespace std;

int main(){
    set<int> myset;

    myset.insert(0);
    myset.insert(1);
    myset.insert(1);
    myset.insert(2);

    for(set<int>::iterator it = myset.begin(); it != myset.end(); it++){
        cout << *it << endl;
    }

    set<int>::iterator itFind = myset.find(1);
    if (itFind != myset.end()){
        cout << "Found!: " << *itFind << endl;
    }
    return 0;
}