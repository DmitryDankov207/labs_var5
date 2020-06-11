#include <iostream>
#include <cstddef>

using namespace std;

template<typename T>
class Stack {
public:
    long int size;
    Stack* next = NULL;
    T val;
    
    Stack(T v, long int s=1) : 
    val(v), size(s) {}
    
    bool isEmpty() {
        return size == 0 && !next ? true : false;
    }
    
    void print() {
        const Stack<T>* buff = this;
        while(buff) {
            cout << buff->val << " ";
            buff = buff->next;
        }
    }
    
    template<T>
    friend Stack& operator+=(Stack<T>& st, T val);
    
    template<T>
    friend T operator--(Stack<T>& i);
};
