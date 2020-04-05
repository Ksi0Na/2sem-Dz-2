#ifndef NOTEBOOK_H
#define NOTEBOOK_H

#include "Stationery.h"

class Notebook: public Stationery
{
public:
    Notebook(unsigned id,  unsigned count,
             string maker, string type_notebook,
             unsigned count_sheets);

    virtual string type() const = 0;
    virtual string info() const = 0;

private:
    string   _type_notebook;
    unsigned _count_sheets;
};

#endif // NOTEBOOK_H
