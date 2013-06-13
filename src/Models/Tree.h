/*
 * Tree.h
 *
 *  Created on: 2013-06-13
 *      Author: Rahul
 */

#ifndef TREE_H_
#define TREE_H_

class Tree{
public:
	bool insertNode (treeNode* node);
	bool removeNode (); // deletes the current node
	bool removeNode (int identifier); //finds and deletes the node with the certain identifier
	static treeNode* searchNode();
	static treeNode* searchNode(int key);
	static int generateKey(); //Dependant on data
private:
	int mKey;//Dependant on data .. could be size ... student numbers ... lenght of string etc ....

};


#endif /* TREE_H_ */
