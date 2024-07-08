#include <iostream>
using namespace std;


template <typename T>
class StoreValues {
private:
    T arr[5]; 
public:
   
    void setValues(T values[5]) {
        for (int i = 0; i < 5; i++) {
            arr[i] = values[i];
        }
    }

  
    void displayValues() {
        cout << "The values are: ";
        for (int i = 0; i < 5; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;


        
    }
};

int main() {
  
    StoreValues<int> intStore;
    int intValues[5] = {1, 2, 3, 4, 5};
    intStore.setValues(intValues);
    intStore.displayValues();
    return 0;
} 