#ifndef MUTATOR_H
#define MUTATOR_H
#include "Individual.h"
class Mutator{
    public:
        //virtual Individual mutate(Individual ind,int k);
        virtual Individual* mutate(Individual* ind,int k);
};
#endif