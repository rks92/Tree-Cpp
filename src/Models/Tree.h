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
	Tree();
	Tree(Data* data);
	bool insertNode (treeNode* node);
	bool removeNode (); // deletes the current node
	bool removeNode (int identifier); //finds and deletes the node with the certain identifier
	static treeNode* searchNode();
	static treeNode* searchNode(int key);
	static int generateKey(); //Dependant on data
private:
	treeNode* root;
};

Tree::Tree(){
	root = nullptr;
}

Tree::(Data* data){
	root = new treeNode(generateKey(), data);
}
#endif /* TREE_H_ */
