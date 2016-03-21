/*
 * stockDB.h
 *
 *  Created on: Mar 9, 2016
 *      Author: AustinMcnipps
 */

#ifndef STOCKDB_H_
#define STOCKDB_H_

#include "stock.h"

using namespace std;
class stockDB
{
public:
	stockDB();
	friend ostream& operator<< (ostream& os, const stockDB& db);

	bool load(string);	//creates a linked list of stocks
	int returnMiddleList();
	void splitList(stockDB& newdb);

private:
	stockNode* head;
	//stockNode* tail;
};

#endif /* STOCKDB_H_ */
