/*
 * Tree.h
 *
 *  Created on: 2013-05-14
 *      Author: Rahul
 */

#ifndef TREE_H_
#define TREE_H_

#include <string>
using namespace std;

class treeNode {
	bool treeNode();
	bool treeNode(Data* data);
	bool treeNode(treeNode* left, treeNode* right, Data* data);

	treeNode* getLeftChild(){
		return mLeftChild;
	}

	treeNode* getRightChild(){
		return mRightChild;
	}

	bool insertNode (treeNode* node);
	bool removeNode (); // deletes the current node
	bool removeNode (int identifier); //finds and deletes the node with the certain identifier
	static treeNode* searchNode();
	static treeNode* searchNode(int key);

	static int generateKey(); //Dependant on data


private:
	Data* mData;
	treeNode* mLeftChild;
	treeNode* mRightChild;

	int mKey;//Dependant on data .. could be size ... student numbers ... lenght of string etc ....

	void initializeChildrenToNullAndKey();
};

void treeNode::initializeChildrenToNullAndKey() {
	this->mLeftChild = nullptr;
	this->mRightChild = nullptr;
	this->mKey = generateKey();
}

bool treeNode::treeNode(){
	initializeChildrenToNullAndKey();
	this->mData = nullptr;
	return true;
}

bool treeNode::treeNode(Data* data){
	initializeChildrenToNullAndKey();
	this->mData = data;
	return true;
}

bool treeNode::treeNode(treeNode* left, treeNode* right, Data* data){
	this->mLeftChild = left;
	this->mRightChild = right;
	this->mData = data;
	this->mKey = generateKey();
	return true;
}

#endif /* TREE_H_ */
