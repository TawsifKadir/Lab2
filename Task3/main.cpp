//main.cpp

#include <iostream>
#include "dynArr.h"
#include <cstdlib>
using namespace std;

int main(){
    dynArr arr1;
    int rows,columns;
    ::printf("Enter number of rows:");
    cin >> rows;
    ::printf("Enter number of columns:");
    cin >> columns;

    dynArr arr(rows,columns);
    int a;
    for(int i=1;i<=rows;i++){
        for(int j=1;j<=columns;j++){
            //::printf("Enter element in row %d and column %d:",i,j);
            cin >> a;
            arr.setValue(i,j,a);
        }
    }
    arr.printAll();
    return 0;
}
