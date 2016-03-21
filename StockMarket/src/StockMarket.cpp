//============================================================================
// Name        : StockMarket.cpp
// Author      : Austin McNiff
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include "stock.h"
#include "stockDB.h"
using namespace std;

int main()
{

	string filename = "portfolio.txt";
	stockDB db;
	stockDB db2;

	if (db.load(filename))
	{
		db.splitList(db2);
	}
	cout << endl;
	cout << "First list\n" << db << endl;
	cout << "Second list\n" << db2 << endl;

	return 0;
}
