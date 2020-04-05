#include "notebook.h"
#include <sstream>

Notebook::Notebook(unsigned id,  unsigned count,
                   string maker, string type_notebook,
                   unsigned count_sheets)
    :Stationery(id, count, maker)
    , _type_notebook(type_notebook)
    , _count_sheets(count_sheets)
{}

string Notebook::type() const  { return "Notebook "; }

string Notebook::info() const
{
    stringstream ss;
    ss << "Color: "               << _type_notebook << endl
       << "Quantity of sheets: "  << _count_sheets  << endl
       << "Maker: "               << maker()        << endl
       << "ID: "                  << id()           << endl
       << "Quantity: "            << count()        << endl
       << endl;
    return ss.str();
}
