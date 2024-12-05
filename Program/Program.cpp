﻿#include <iostream>

using namespace std;

template<typename T>

class BinarySearchTree
{
private:
	struct Node
	{
		T data;
		
		Node* left;
		Node* right;
	};

	Node* root;

public:
	BinarySearchTree()
	{
		root = nullptr;
	}

	Node* RootNode()
	{
		return root;
	}

	Node* CreateNode(T data)
	{
		Node* newNode = new Node();

		newNode->data = data;

		newNode->left = nullptr;
		
		newNode->right = nullptr;

		return newNode;
	}

	void Insert(T data)
	{
		if (root == nullptr)
		{
			root = CreateNode(data);
		}
		else
		{
			Node* currentNode = root;

			while (currentNode != nullptr)
			{
				if (currentNode->data == data)
				{
					return;
				}
				else if(currentNode->data > data)
				{
					if (currentNode->left == nullptr)
					{
						currentNode->left = CreateNode(data);
						break;
					}
					else
					{
						currentNode = currentNode->left;
					}
				}
				else
				{
					if (currentNode->right == nullptr)
					{
						currentNode->right = currentNode(data);

						break;
					}
					else
					{
						currentNode = currentNode->right;
					}
				}

			}
		}
	}

	void Inorder()
	{

	}

};

int main()
{
	BinarySearchTree<int> binarySearchTree;

	

	return 0;
}
