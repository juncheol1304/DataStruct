﻿#include <iostream>

using namespace std;

template <typename T>

class DoubleLinkedList
{
private:
	struct Node
	{
		T data;
		Node* previous;
		Node* next;
	};

	int size;

	Node* head;
	Node* tail;

public:
	DoubleLinkedList()
	{
		size = 0;
		head = nullptr;
		tail = nullptr;
	}
	void PushFront(T data)
	{
		Node* newNode = new Node;

		newNode->data = data;
		newNode->previous = nullptr;
		newNode->next = nullptr;

		if (head == nullptr)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			head->previous = newNode;
			newNode->next = head;

			head = newNode;
		}

		size++;
	}
	void PopFront()
	{
		if (head == nullptr)
		{
			cout << "Linked List is Empty" << endl;
		}
		else
		{
			Node* deleteNode = head;

			if (head == tail)
			{
				head = nullptr;
				tail = nullptr;
			}
			else
			{
				deleteNode->next->previous = nullptr;

				head = head->next;
			}

			delete deleteNode;

			size--;
		}

	}
};

int main()
{
	DoubleLinkedList<int> doubleLinkedList;

	doubleLinkedList.PushFront(10);
	doubleLinkedList.PushFront(20);

	doubleLinkedList.PopFront();
	doubleLinkedList.PopFront();

	doubleLinkedList.PopFront();


	return 0;
}
