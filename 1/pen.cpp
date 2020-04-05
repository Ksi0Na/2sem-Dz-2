#include "pen.h"
#include <sstream>

Pen::Pen(unsigned id, unsigned count,
         string maker, string color, string type_pen)
    : Stationery(id, count, maker)
    , _color(color)
    , _type_pen(type_pen)
{}

string Pen::type() const { return "Pen "; }

string Pen::info() const
{
    stringstream ss;
    ss << "Color: "    << _color    << endl
       << "Type: "     << _type_pen << endl
       << "Maker: "    << maker()   << endl
       << "ID: "       << id()      << endl
       << "Quantity: " << count()   << endl
       << endl;
    return ss.str();
}
