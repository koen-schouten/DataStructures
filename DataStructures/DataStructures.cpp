#include <iostream>
#include "SinglyLinkedList.h"
	
int main()
{
	SinglyLinkedList<int> linkedList = SinglyLinkedList<int>();
	for (int i = 0; i < 100000000; i++) {
		linkedList.addFirst(i);
	}
	for (int i = 0; i < 100000000; i++) {
		linkedList.removeFirst();
	}

	std::string test;
	std::cin >> test;
}
