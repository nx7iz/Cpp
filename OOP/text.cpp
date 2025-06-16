#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "From A\n";
    }
};

// 👉 Use virtual here
class B : virtual public A {};
class C : virtual public A {};

class D : public B, public C {};

int main() {
    D obj;
    obj.show();  // ✅ No ambiguity now!
    return 0;
}