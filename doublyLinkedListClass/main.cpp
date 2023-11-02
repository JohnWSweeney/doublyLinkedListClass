#include <iostream>
#include "nodes.h"
#include "dList.h"

int main()
{
	std::cout << "Doubly Linked List Class v1.0.3\n\n";
	int result;
	int nodeCount;
	int data;
	int position;
	dNode* list = nullptr;
	dNode* ptr = nullptr;

	dList dlist;

	for (int i = -5; i < 5; i++)
	{
		dlist.addNodeBack(&list, pow(i, 4));
	}
	result = dlist.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		dlist.print(list);
	}
	else
	{
		std::cout << "List is empty.\n";
	}
	/// test code here: ////////////////////////////////////////
	
	std::cout << "result: " << result << "\n\n";
	////////////////////////////////////////////////////////////
	result = dlist.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		dlist.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
}