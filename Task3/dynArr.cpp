//dynArr.cpp
#include "dynArr.h"
#include <iostream>

using namespace std;

dynArr::dynArr() {
    data = NULL;
    rows=0;
    columns=0;
}
dynArr::dynArr(int r,int c) {
    data = new int[r*c];
    rows = r;
    columns = c;
}
dynArr::~dynArr() {
    delete[] data;
}
int dynArr::getValue(int row,int column) {
    return *(data+(row-1)*columns+(column-1));
}
void dynArr::setValue(int row,int column, int value) {
    *(data+(row-1)*columns+(column-1)) = value;
}
void dynArr::printAll() {
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            cout << getValue(i,j) << " ";
        }
        cout << endl;
    }
}
