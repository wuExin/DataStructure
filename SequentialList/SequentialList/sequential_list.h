#pragma once
typedef struct Table 
{
	int* head;
	int  size;
	int  length;
}table;

class SequentialList
{
public:
	SequentialList();
	~SequentialList();
	int init(int size);
	int insertElement(int index,int element);
	int deleteElement(int index);
	int modifyElement(int index, int element);
	int selectElement(int index, int& element);
	int getListLength(int& length);
private:
	table data;
};

