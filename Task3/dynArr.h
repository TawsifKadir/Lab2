//dynArr.h
#ifndef UNTITLED_DYNARR_H
#define UNTITLED_DYNARR_H

class dynArr
{
private:
    int *data;
    int rows,columns;
public:
    dynArr();
    dynArr(int r,int c);
    ~dynArr();
    void setValue(int row,int column,int value);
    int getValue(int row,int column);
    void printAll();
};


#endif //UNTITLED_DYNARR_H
