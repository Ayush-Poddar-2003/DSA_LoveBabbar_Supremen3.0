#include<iostream>
#include<vector>
using namespace std;

int main(){

/* STL : Standard Template Library
Collection of functions/templates/classes etc.

STL consists of "Containers+Algorithms+Iterators+Functions"

# 1. CONTAINER ~ DATA STRUCTURE

# 1.1 VECTOR
    - Dynamic Array that can grow/shrink.
    - Faster access/add/delete etc.
    - If gets full => creates new array of 2x size => copies old elements*/

    vector<int> v;          // vector is created of int datatype
    vector<int> v1(10);      // array is created of 10 size
    vector<int> v2(13, 0);   // array of size 13 all filled with 0
    vector<int> v3 = {14, 1, 60};

    v.begin();  // will point to start point
    v.end();    // points to end

// ---------------------------

    vector<int> marks;

    marks.push_back(3);
    marks.push_back(6);
    marks.push_back(9);
    marks.push_back(12);

    cout << marks[0]    << endl;   //3
    cout << marks.at(0) << endl;   //3

    marks[1] = 69;                 // can be changed like vector

    cout << marks.size() << endl;  //4
    
    marks.pop_back();              // deletes last element
    cout << marks.size() << endl;  //3 gives size

    cout << marks.front() << endl; //3 prints front element
    cout << marks.back()  << endl; //9 prints back element

    cout << marks.empty() << endl; //0 checks if empty

//  -------------------------

    cout << marks.capacity() << endl; //kitna bada vector hai
    cout << marks.size() << endl;     //kitna elements hai

// --------------------------

    marks.reserve(10); // initially vector has 0 capacity we can set default
    cout << marks.capacity() << endl; //kitna bada vector hai

// --------------------------

    cout << marks.max_size() << endl; //gives max size of vector that can be created

// --------------------------

    marks.clear(); //removes all element
    cout << marks.size() << endl; //0
    
// --------------------------

    marks.insert(marks.begin(), 50);

// ---------------------------

    marks.erase(marks.begin(), marks.end()); //removes elements within range

// ---------------------------

    vector<int> f;
    vector<int> s;

    f.push_back(10);
    f.push_back(20);

    s.push_back(1);
    s.push_back(2);

    f.swap(s); //swaps elements of f in s

// ---------------------------

    // FOR EACH LOOP

    for(int i:marks){
        cout << i << endl;
    }

// ---------------------------

    // ITERATOR IN VECTOR

    vector<int> :: iterator it = marks.begin(); //iterator will point at first

    while(it != marks.end()){
        cout << *it ;
        it++;
    }

    return 0;
}
