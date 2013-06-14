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

//	bool addGeneral (); // to add general Data
	bool add (Data* data);
	bool remove (int key);

	treeNode* searchNode(Data* data); // implementation skipped because from lack of knowledge of data type
	static treeNode* searchNode(int key); // static because search is from auto-generated key
	static Data* searchData (int key); // returns data in the node of the given key

	bool writeToFile(); //To save data
	bool readFromFile(std::string filename); //To retrieve data from file

	// TODO: insert operator overloading
private:
	treeNode* root;
	static int generateKey(); //Dependant on data
};

Tree::Tree(){
	root = nullptr;
}

Tree::(Data* data){
	root = new treeNode(generateKey(), data);
}

bool Tree::add(Data* data){
	treeNode* node = new treeNode(generateKey(), data);

	if (root == nullptr){
		root = node;
		return true;
	}
	treeNode* iterator = root;

	while (iterator){
		if (node->getMKey() < iterator->getMKey()){
			if (iterator->mLeftChild == nullptr){
				iterator->mLeftChild = node;
				return true;
			} else {
				iterator = iterator->mLeftChild;
			}
		} else if (node->getMKey() > iterator->getMKey()){
			if (iterator->mRightChild == nullptr){
				iterator->mRightChild = node;
				return true;
			} else {
				iterator = iterator->mRightChild;
			}
		} else if (node->getMKey() == iterator->getMKey()){
			// TODO: Insert implementation to throw exception due to invalid generated key
		}
	}
}

bool Tree::remove(int key){
	// TODO: Insert implementation
}

static treeNode* Tree::searchNode(int key{
	//TODO: Insert implementation
}
#endif /* TREE_H_ */
