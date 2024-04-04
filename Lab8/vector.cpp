#include <iostream>
#include<vector>
using namespace std;

void printMemVec(...){}

void IncVecBy10(...){}


int main() {
const int SIZE = 5;

//create a vector called vec that can hold up to 5 elements.
vector<int> vec;
//use a for loop to populate vec with the values 100 to 104
for(int i = 0; i < SIZE; i++){
vec.push_back(100 + i);

}

printf("Before Increment----------------------\n");
    // call printMemVec(...) on vec
    printMemVec(vec);

    // call incBy10(...) on vec
    IncVecBy10(vec); 

    
printf("After Increment-----------------------\n");
    // call printMemVec(...) on vec again to view the changes
    printMemVec(vec);
printf("After Push----------------------\n");
    // append 101 and 102 at the end of vec
    vec.push_back(101);
    vec.push_back(102);
printf("After Pop------------------------\n");
    // call printMemVec(...) on vec again to view the changes
    printMemVec(vec);





}

