#include <iostream>
#include "SinglyLinkedList.h"
#include <string>

void testLinkedList() {
	SinglyLinkedList<int> linkedList = SinglyLinkedList<int>();
	for (int i = 0; i < 100000000; i++) {
		linkedList.addFirst(i);
	}
}


int main()
{
	testLinkedList();
	std::string test;
	std::cin >> test;
}
