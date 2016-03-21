/*
 * stock.h
 *
 *  Created on: Mar 9, 2016
 *      Author: AustinMcnipps
 */

#ifndef STOCK_H_
#define STOCK_H_

#include <fstream>

using namespace std;
class stock
{
public:
	stock();
	friend ostream& operator<< (ostream&, const stock&);
	friend istream& operator>> (istream&, stock&);

private:
	string symbol;
	double cost;
	int shares;
};

class stockNode : public stock
{
public:
	    stockNode *next;
};

#endif /* STOCK_H_ */
