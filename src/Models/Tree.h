/*
 * Tree.h
 *
 *  Created on: 2013-05-14
 *      Author: Rahul
 */

#ifndef TREE_H_
#define TREE_H_

struct treeNode {
public:
	bool treeNode();
	bool treeNode(Data* data);

	treeNode* getLeftChild(){
		return mLeftChild;
	}

	treeNode* getRightChild(){
		return mRightChild;
	}

	void setLeftChild(treeNode* child){
		mLeftChild = new treeNode();
		mLeftChild = child;
	}

	void setRightChild(treeNode* child){
		mRightChild = new treeNode();
		mRightChild = child;
	}

private:
	Data* data;
	treeNode* mLeftChild;
	treeNode* mRightChild;
};

bool treeNode::treeNode(){
	treeNode* currNode = new treeNode;
	return true;
}

#endif /* TREE_H_ */
