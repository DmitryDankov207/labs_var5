#include "stack.h"

template<typename T>
Stack<T>& operator+=(Stack<T>& left, Stack<T>& rigth) {
    left.next = &rigth;
    return rigth;
}
    
template<typename T>
Stack<T>& operator--(Stack<T>& st) {
    if(st.next) {
        st.val = st.next->val;
        st.size = st.next->size;
        st.next = st.next->next;
    }
    else {
        st.size = st.val = 0;
    }
    return st;
}

int main() {
    Stack<int> st1 = Stack<int>(2);
    cout << "\nst1: ";
    st1.print();
    
    Stack<int> st2 = Stack<int>(1);
    cout << "\nst2: ";
    st2.print();
    cout << "\nst2 is empty: " << (st2.isEmpty() ? "true" : "false");
    
    st2 += st1;
    cout << "\nst2 after +=: ";
    st2.print();
    
    --st2;
    cout << "\nst2 after --: ";
    st2.print();
    
    return 0;
}
