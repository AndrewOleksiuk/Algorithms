#include "Tree.h"

void main()
{
	Tree tree(5);
	tree.addElement(3);
	tree.addElement(4);
	tree.addElement(1);
	tree.addElement(0);
	tree.addElement(10);
	tree.addElement(8);
	vector<Node*> vector;
	tree.RAB(tree.getRoot() ,vector);
	for (size_t i = 0; i < vector.size(); i++)
	{
		cout << "Vertex " << i + 1 << " : " << vector[i]->value << endl;
	}
	system("pause");
}