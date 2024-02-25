#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector<string> strings;
    vector<string> strings2(5); // Can pre-size the vector

    // Access directly with an index
    cout << "Accessing with index" << endl;
    strings2[3] = "dog";
    cout << strings2[3] << endl;

    cout << endl;
    // Push_back method adds new elements to the vector.
    cout << "Resizing" << endl;
    cout << strings.size() << endl;
    strings.push_back("One");
    strings.push_back("Two");
    strings.push_back("Three");
    cout << strings.size() << endl;

    cout << endl;
    // Can be iterated with indexes
    cout << "Iteration wit indexes" << endl;
    cout << strings.size() << endl;
    for(unsigned int i = 0; i < strings.size(); i++){
        cout << strings[i] << endl;
    }

    cout << endl;
    // Or it can be iterated with iterators, special pointers in STL
    cout << "Iteration wit iterators" << endl;
    for(vector<string>::iterator it = strings.begin(); it != strings.end(); it++){
        cout << *it << endl;
    }

    cout << endl;
    // Printing reverse it
    cout << "Iteration wit reverse iterators" << endl;
    for(vector<string>::reverse_iterator it = strings.rbegin(); it != strings.rend(); it++){
        cout << *it << endl;
    }

    // ::iterator.begin() => Points to the address of the first element of the vector
    // ::iterator.end() => Points to the first address of memory AFTER the last element, that's why is != in the for loop

    cout << endl;
    // You can initialize the vector with a fixed number at declaration (size, value)
    vector<double> numbers(0);

    // Capacity is the reserved memory that vector has, it is the double of size at declaration,
    unsigned int capacity = numbers.capacity();
    cout << "Capacity: " << capacity << endl;

    for(int i = 0; i < 10000; i++){
        // At incrementing the size of the vector, when it hits the max, it doubles its capacity to get a new capacity
        if (capacity != numbers.capacity()){
            capacity = numbers.capacity();
            cout << "Array has " << numbers.size() << " elements. New Capacity: " << capacity << endl;
        }
        numbers.push_back(i);
    }

    cout << endl << "Final size and capacity" << endl;
    cout << "Numbers Size: " << numbers.size() << endl;
    cout << "Numbers Capacity: " << numbers.capacity() << endl;


    // Resize() drop all others elements in the array that doesnt fit in the specific size; doesnt affect capacity
    cout << endl << "Resize" << endl;
    numbers.resize(100);
    cout << "Numbers Size: " << numbers.size() << endl;
    cout << "Numbers Capacity: " << numbers.capacity() << endl;

    // Clear() erase all data; doest affect capacity
    cout << endl << "Clear" << endl;
    numbers.clear();
    cout << "Numbers Size: " << numbers.size() << endl;
    cout << "Numbers Capacity: " << numbers.capacity() << endl;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Shrink_to_fit() reduces capacity to fit on size
    cout << endl << "Shrink to fit" << endl;
    cout << "Numbers Size: " << numbers.size() << endl;
    cout << "Numbers Capacity: " << numbers.capacity() << endl;
    cout << "-- Shrinking --" << endl;
    numbers.shrink_to_fit();
    cout << "Numbers Size: " << numbers.size() << endl;
    cout << "Numbers Capacity: " << numbers.capacity() << endl;

    // reserve() adds capacity to the array to the specific value; doest change size
    cout << endl << "Reserve" << endl;
    numbers.reserve(100);
    cout << "Numbers Size: " << numbers.size() << endl;
    cout << "Numbers Capacity: " << numbers.capacity() << endl;

    return 0;
}