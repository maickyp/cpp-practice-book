#include <iostream>
#include <map>

using namespace std;

int main(){
    map<string, int> ages;
    ages["Mike"]= 30;
    ages["Gabriel"]= 23;
    ages["Fer"]= 19;

    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        cout<< it->first << ":" << it->second << endl;
    }

    // Unique values
    ages["Mike"]= 30; // this will not add antoher mike, wil update it
    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        cout<< it->first << ":" << it->second << endl;
    }

    // If you access to a key that is not in the map, this will created it
    cout<< ages["Sofi"] << endl;
    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        cout<< it->first << ":" << it->second << endl;
    }

    // But if you search it before properly, this will not be created
    // find() will iterate among the map and return and interator on its position,
    // but if not, it will point to end()
    if(ages.find("Carlos")!= ages.end()){
        cout << "Carlos found" << endl;
    }
    else{
        cout << "Key is not found" << endl;
    }
    for(map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        cout<< it->first << ":" << it->second << endl;
    }
    return 0;
}