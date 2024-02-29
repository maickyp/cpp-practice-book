#include <iostream>
#include <vector>

using namespace std;

// Define our function
bool match(int num, int th){
    return num >= th;
}

int count(vector<int> &numbers, bool (*func)(int num, int th), int threshold){
    int count = 0;
    for (vector<int>::iterator it= numbers.begin(); it != numbers.end(); it++){
        // cout << *it << endl;
        if(func(*it, threshold))
            count++;
    }
    return count;
}


int main(){
    vector<int> numbers;
    // Prepare a vector with 10 numbers
    numbers.push_back(4);
    numbers.push_back(1);
    numbers.push_back(6);
    numbers.push_back(4);
    numbers.push_back(5);
    numbers.push_back(7);
    numbers.push_back(4);
    numbers.push_back(2);
    numbers.push_back(9);
    numbers.push_back(10);


    // 4,1,6,4,5,7,4,2,9.10
    // >=5 -> 5

    // call our new function with the args, match is taking the place of the function pointer, we can change which function it will run
    // just by changing this arg.
    cout << count(numbers, match, 4) <<endl;
    return 0;
}