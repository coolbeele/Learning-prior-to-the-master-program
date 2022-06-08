// functon pointer
#include <iostream>
using namespace std;

int addition(int a, int b) {
    return a+b;
}

int subtraction(int a, int b) {
    return a-b;
}

int operation (int x, int y, int (*functocall)(int,int)) {  //functocall为pointer，在main中定义
    int g;
    g = (*functocall)(x,y);  //functocall是pointer point to functions 
    return g;     
}

int main() {
    int m,n,p,q;
    int (*minus)(int, int) = subtraction; //新设一个pointer point to subtraction

    m = operation(2,3,subtraction);  
    n = operation(2,3,minus);
    p = operation(2,3,addition);
    q = addition(2,3);

    cout << m << '\n' << n << '\n' << p << '\n' << q;
}