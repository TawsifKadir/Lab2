//dynArr.cpp
#include "dynArr.h"
#include <iostream>

using namespace std;

dynArr::dynArr() {
    data = NULL;
    size = 0;
}
dynArr::dynArr(int a) {
    data = new int[a];
    size = a;
}
dynArr::~dynArr() {
    delete[] data;
}
int dynArr::getValue(int index) {
    return data[index];
}
void dynArr::setValue(int index, int value) {
    data[index] = value;
}
void dynArr::printAll() {
    for(int i=0;i<size;i++){
        cout << getValue(i) << endl;
    }
}
void dynArr::allocate(int s) {
    delete[] data;
    data = new int[s];
    size = s;
}
