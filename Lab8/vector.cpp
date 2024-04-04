#include <iostream>
#include<vector>
using namespace std;

void printMemVec(const vector<int> &vec)
{
    printf("Vector - each int is worth %lu bytes\n", sizeof(vec[0]));
    for (size_t i = 0; i < vec.size(); i++)
    {
        printf("Value : %i at Memory Location: %p\n", vec[i], &vec[i]);
    }
}

void IncVecBy10(vector<int> &vec){
    for (size_t i = 0; i < vec.size(); i++) {
        vec[i] += 10;
        
    }

}



int main()
{
   // create a constant integer called SIZE that is of value 5
    const int SIZE = 5;

    // create a vector of integers called vec that can hold up to 5 elements
    vector<int> vec;

    // use a for loop to populate vec with the values 100 to 104
    for (int i = 0; i < SIZE; i++)
    {
        vec.push_back(100 + i);
    }

printf("Before Increment------------\n");
    // call printMemVec(...) on vec
    printMemVec(vec);

    // call incBy10(...) on vec
    IncVecBy10(vec);

printf("After Increment------------\n");
    // call printMemVec(...) on vec again to view the changes
    printMemVec(vec);

    printf("After Pop------------\n");
    // remove last element of vec
    vec.pop_back();
    // call printMemVec(...) on vec again to view the changes
    printMemVec(vec);

    printf("After Push------------\n");
    // append 101 and 102 at the end of vec
    vec.push_back(101);
    vec.push_back(102);
    // call printMemVec(...) on vec again to view the changes
    printMemVec(vec);

    return 0;
}


