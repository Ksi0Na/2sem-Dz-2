#ifndef PEN_H
#define PEN_H

#include "Stationery.h"

class Pen: public Stationery
{
public:
    Pen(unsigned id, unsigned count,
        string maker, string color, string type_pen);

    virtual string type() const = 0;
    virtual string info() const = 0;

private:
    string _color, _type_pen;
};

#endif // PEN_H
