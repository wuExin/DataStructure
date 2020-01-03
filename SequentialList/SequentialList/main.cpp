// SequentialList.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include "sequential_list.h"
#define SIZE 8
int main()
{
	SequentialList list;
	list.init(SIZE);
	list.insertElement(0, 1);
	list.insertElement(1, 2);
	list.insertElement(2, 3);
	list.insertElement(3, 4);
	list.insertElement(4, 5);
	list.insertElement(5, 6);
	list.insertElement(3, 7);
	list.insertElement(5, 8);

	int length;
	list.getListLength(length);
	for (int i = 0; i < length; i++)
	{
		int elememt;
		list.selectElement(i, elememt);
		std::cout << elememt << std::endl;
	}
	list.deleteElement(7);
	list.getListLength(length);
	list.modifyElement(0,100);
	for (int i = 0; i < length; i++)
	{
		int elememt;
		list.selectElement(i, elememt);
		std::cout << elememt << std::endl;
	}

	system("Pause");
    return 0;
}

