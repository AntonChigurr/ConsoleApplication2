#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;
    *ptr = 42;     
    cout << "number: " << *ptr << endl;
    
     
    delete ptr; 
    ptr = nullptr;
       
    return 0;
}
