#ifndef __ESCALAMENOR_H__
#define __ESCALAMENOR_H__


#include <iostream>
#include "Estructura.h"
#include "Sonido.h"
#include "Do1.h"
#include <vector>
#include <windows.h>


class EscalaMenor : public Estructuras {

    public:

        EscalaMenor(string*, int=12, int=0);

        virtual void print() override;
        virtual void printSonido(vector<Sonido*>) override;

        int retornarElVec();

        void printvec();

       
    

    private:
        int u;
        int pos;
        vector<int> vec1;

};

#endif
