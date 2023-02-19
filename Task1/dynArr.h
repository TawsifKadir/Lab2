//dynArr.h
#ifndef UNTITLED_DYNARR_H
#define UNTITLED_DYNARR_H

class dynArr
{
private:
    int *data;
    int size;
public:
    dynArr();
    dynArr(int a);
    ~dynArr();
    void setValue(int index,int value);
    int getValue(int index);
    void printAll();
};


#endif //UNTITLED_DYNARR_H
