#include <chrono>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <random>

using namespace std;

class a {
public:
    void printPublicA() {
        cout << "Print public of a";
    }

protected:
    void printProtectedA() {
        cout << "Print protected of a";
    }

private:
    void printPrivateA() {
        cout << "Print private of a";
    }
};

class b : protected a {
public:
    void printPublicB() {
        cout << "Print public of b";
    }

protected:
    void printProtectedB() {
        cout << "Print protected of b";
    }

private:
    void printPrivateB() {
        cout << "Print private of b";
    }
};

int main() {
    a tempA;
    b tempB;

    tempB.printPublicA();
    return 0;
}