//
// Created by utec on 27/08/19.
//

#include "Myvector.h"

Myvector::Myvector():nelem(0) {
    data=nullptr;
}

Myvector::Myvector(int n):nelem(n){ data=new int [nelem];}

Myvector::~Myvector(){ delete [] data;}

int Myvector::size (){ return nelem;}

void Myvector::push_back(int value ){
    //1. Crear temporal
    int *temp = new int [nelem + 1];

    //2. Transferir los datos a temp
    for( int i=0;i<nelem;i++){temp[i] = data [i];}

    //3. Borrar memoria anterior
    delete [] data;

    //4. Apuntando a memoria parcial
    data =temp;

    //5. Actualizando valor
    nelem++;
}

void Myvector::pop_back( ){
    //1. Crear temporal
    int *temp = new int [nelem - 1];

    //2. Transferir los datos a temp
    for( int i=0;i<nelem-1;i++){temp[i] = data [i];}

    //3. Borrar memoria anterior
    delete [] data;

    //4. Apuntando a memoria parcial
    data =temp;

    //5. Actualizando valor
    nelem--;
}

void Myvector::insert (int posicion,int value) {
    //1. Crear temporal
    int *temp = new int [nelem + 1];

    //2. Transferir los datos a temp
    for( int i=0;i<nelem;i++){temp[i] = data [i];}

    //3. Borrar memoria anterior
    delete [] data;

    //4. Apuntando a memoria parcial
    data =temp;

    //5. Actualizando valor
    nelem++;
}

void Myvector::eraser (int posicion) {
    //1. Crear temporal
    int *temp = new int [nelem - 1];

    //2. Transferir los datos a temp
    for( int i=0;i<nelem;i++){
        if(posicion!=i){temp[i] = data [i];}}

    //3. Borrar memoria anterior
    delete [] data;

    //4. Apuntando a memoria parcial
    data =temp;

    //5. Actualizando valor
    nelem--;
}
