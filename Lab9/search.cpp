#include <iostream>
#include <vector>
#include <fstream>
#include <ctime>
using namespace std;
int iterativeSearch(vector<int>v, int elem){
    for( int i = 0; i == v.size(); i++){
        if(v[i] == elem) {
            return i;
        }      
    }
    return -1;
}

int binarySearch(vector<int> & v, int start, int end, int elem){
if(start > end){ 
        return -1; 
    }

    int mid = (start + end) / 2; 

    if(v[mid] > elem ) { 
        end = mid - 1;
    } else if (v[mid] < elem ) { 
        start = mid + 1;
    } else {
        return mid; 
    }
    return binarySearch(v, start, end, elem);

}

void vecGen(string filename, vector<int> & v){
    ifstream file(filename);
    int num;
    v.clear();
    while (file.is_open() && file >> num){
        v.push_back(num);
    }
    file.close();
}

int main(){
    vector<int> v;
    vecGen("10000_numbers.csv", v);

    vector<int> findElems;
    vecGen("test_elem.csv", findElems);

    for(int i = 0; i < findElems.size(); i++) {
        int elem = findElems[i];

     auto start = chrono::high_resolution_clock::now();
    int index_if_found = iterativeSearch(v, elem);
    auto end = chrono::high_resolution_clock::now();

    auto timeTaken = chrono::duration_cast<std::chrono::microseconds>(end - start);
    cout << "Time taken by iterative search: " << timeTaken.count() << " microseconds" << endl;



    }

    for(int i = 0; i < findElems.size(); i++) {
        int elem = findElems[i];

     auto start = chrono::high_resolution_clock::now();
    int index_if_found = binarySearch(v, 0, v.size(), elem);
    auto end = chrono::high_resolution_clock::now();

    auto timeTaken = chrono::duration_cast<std::chrono::microseconds>(end - start);
    cout << "Time taken by binarySearch: " << timeTaken.count() << " microseconds" << endl;
    }

}


