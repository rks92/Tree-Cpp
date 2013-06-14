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
	friend int Tree::generateKey();
public:
	treeNode(int key);
	treeNode(int key, Data* data);
	treeNode(int key, treeNode* left, treeNode* right, Data* data);

	int getMKey(){
		return mKey;
	}

private:
	Data* mData;
	treeNode* mLeftChild;
	treeNode* mRightChild;
	int mKey;//Dependant on data .. could be size ... student numbers ... length of string etc ....

	void initializeChildrenToNull();
};

void treeNode::initializeChildrenToNull() {
	this->mLeftChild = nullptr;
	this->mRightChild = nullptr;
}

treeNode::treeNode(int key){
	initializeChildrenToNull();
	this->mData = nullptr;
	this->mKey = key;
}

treeNode::treeNode(int key, Data* data){
	initializeChildrenToNull();
	this->mData = data;
	this->mKey = key;
}

treeNode::treeNode(int key, treeNode* left, treeNode* right, Data* data){
	this->mLeftChild = left;
	this->mRightChild = right;
	this->mData = data;
	this->mKey = key;
}

#endif /* TREE_H_ */
