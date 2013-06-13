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

private:
	Data* mData;
	treeNode* mLeftChild;
	treeNode* mRightChild;

	void initializeChildrenToNull();
};

void treeNode::initializeChildrenToNull() {
	this->mLeftChild = nullptr;
	this->mRightChild = nullptr;
}

bool treeNode::treeNode(){
	initializeChildrenToNull();
	this->mData = nullptr;
	return true;
}

bool treeNode::treeNode(Data* data){
	initializeChildrenToNull();
	this->mData = data;
	return true;
}

bool treeNode::treeNode(treeNode* left, treeNode* right, Data* data){
	this->mLeftChild = left;
	this->mRightChild = right;
	this->mData = data;
	return true;
}

#endif /* TREE_H_ */
