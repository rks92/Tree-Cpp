/*
 * Tree.h
 *
 *  Created on: 2013-05-14
 *      Author: Rahul
 */

#ifndef TREE_H_
#define TREE_H_

class treeNode {
	bool treeNode();
	bool treeNode(Data* data);

	treeNode* getLeftChild(){
		return mLeftChild;
	}

	treeNode* getRightChild(){
		return mRightChild;
	}

	bool insertNode (treeNode* node);
	bool deleteNode (); // deletes the current node
	bool deleteNode (int identifier); //finds and deletes the node with the certain identifier
	int generateIdentifier();

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

	int mIdentifier;
};

bool treeNode::treeNode(){
	treeNode* currNode = new treeNode;
	return true;
}

#endif /* TREE_H_ */
