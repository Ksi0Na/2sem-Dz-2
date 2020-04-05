#ifndef PAPER_H
#define PAPER_H

#include "Stationery.h"

class Paper: public Stationery
{
public:
    Paper(unsigned id, unsigned count,
          string maker, string size, string Ro);

    virtual string type() const = 0;
    virtual string info() const = 0;

private:
    string _size, _Ro;
};

#endif // PAPER_H
