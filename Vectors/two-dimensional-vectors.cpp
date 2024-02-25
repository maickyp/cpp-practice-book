#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector < vector<int> > grid (8, vector<int>(8,0));

    for(unsigned int row = 0; row < grid.size(); row++){
        for(unsigned int col = 0; col < grid[row].size(); col++){
            cout << grid[row][col] << " " << flush;
        }
        cout << endl;
    }

    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of columns: "<< sizeof(int)*grid[0].size() << " bytes" << endl;
    cout << "Size of grid: "<< sizeof(int)*grid.size()*grid[0].size() << " bytes" << endl;

    return 0;
}