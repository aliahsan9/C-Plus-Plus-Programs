#include <iostream>
using namespace std;

template<typename T>
class Pair {
private:
    T first;
    T second;

public:
    Pair(T a, T b) : first(a), second(b) {}

    T getFirst() const {
        return first;
    }

    T getSecond() const {
        return second;
    }

    void setFirst(T a) {
        first = a;
    }

    void setSecond(T a) {
        second = a;
        
    }
};

int main() {
    Pair<int> intPair(1, 2);
    cout << "First integer: " << intPair.getFirst() << endl;
    cout << "Second integer: " << intPair.getSecond() << endl;

    Pair<double> doublePair(3.5, 5.5);
    cout << "First double: " << doublePair.getFirst() << endl;
    cout << "Second double: " << doublePair.getSecond() << endl;

    return 0;
}
