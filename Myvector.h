//
// Created by utec on 27/08/19.
//

#ifndef SEM_2_POO2_MYVECTOR_H
#define SEM_2_POO2_MYVECTOR_H


class Myvector {
private:
    int* data;
    int nelem;
public:
    Myvector();
    Myvector (int);
    virtual ~Myvector();
    int size();
    void push_back(int);
    void insert(int,int);
    void pop_back();
    void eraser(int);
    int operator [](int);

};


#endif //SEM_2_POO2_MYVECTOR_H
