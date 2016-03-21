/*
 * stock.cpp
 *
 *  Created on: Mar 9, 2016
 *      Author: AustinMcnipps
 */

#include "stock.h"
#include <iomanip>

stock::stock()
{
	symbol = "";
	cost = 0;
	shares = 0;

}

ostream& operator<< (ostream& os, const stock& st)
{
    os << fixed<< setprecision(2)<< st.symbol << "\t$" << st.cost<<"\tShares: "<<st.shares;
    return os;
}

istream& operator>> (istream& is, stock& st)
{
    is >> st.symbol >>  st.cost>> st.shares;
    return is;
}
