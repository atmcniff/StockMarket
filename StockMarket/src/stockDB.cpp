/*
 * stockDB.cpp
 *
 *  Created on: Mar 9, 2016
 *      Author: AustinMcnipps
 */

#include "stockDB.h"
#include <iostream>
//#include "stock.h"

stockDB::stockDB()
{
	head = NULL;
//	tail = NULL;

}

ostream& operator<<(ostream& os, const stockDB& db)
{
	stockNode* tempNode = db.head;
	cout << *tempNode << endl;

	while (tempNode->next != NULL)
	{
		tempNode = tempNode->next;
		cout << *tempNode << endl;
	}

	return os;
}

bool stockDB::load(string fn)
{
	ifstream fin(fn.c_str());
	if (fin.fail())
		return false;
	while (!fin.eof())
	{
		stockNode *stp = new stockNode;
		fin >> *stp;
		stp->next = head;	// add it to the front of linked list
		head = stp;
	}
	fin.close();
	return true;
}

int stockDB::returnMiddleList()
{
	int mid = 0;
//	for (stockNode* temp = head; temp->next != NULL;)
//	{
//		cout << *temp << endl;
//		mid++;
//		temp = temp->next;
//	}

	stockNode* temp = head;
	while (temp->next != NULL)
	{
		//cout << *temp << endl;
		mid++;
		temp = temp->next;
	}
	mid++;
	//cout<<*temp<<endl;

	return mid / 2;

}

void stockDB::splitList(stockDB& newdb)
{
	stockNode* temp = head;
	int middle = returnMiddleList();

	for (int i = 1; i < middle; ++i)
	{
		temp = temp->next;
	}

	cout << "Splitting at node " << middle << endl << "The node contains: "
			<< endl << *temp->next << endl;
	newdb.head = temp->next;
	temp->next = NULL;

}
