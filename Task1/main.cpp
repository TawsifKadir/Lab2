//main.cpp

#include <iostream>
#include "dynArr.h"
using namespace std;

int main(){
    dynArr arr1;
    dynArr arr(5);
    int a;
    for(int i=0;i<5;i++){
        cout << "Enter element" << (i+1) << ":";
        cin >> a;
        arr.setValue(i,a);
    }
    arr.printAll();
    return 0;
}
