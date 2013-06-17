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

	static treeNode* searchNode(int key); // static because search is from auto-generated key
	static Data* searchData (int key); // returns data in the node of the given key

	bool writeToFile(); //To save data
	bool readFromFile(std::string filename); //To retrieve data from file

	// TODO: insert operator overloading for search and addition of two trees
private:
	treeNode* mRoot;
	static int generateKey(); //Dependant on data
};

Tree::Tree(){
	mRoot = nullptr;
}

Tree::(Data* data){
	mRoot = new treeNode(generateKey(), data);
}

bool Tree::add(Data* data){
	treeNode* node = new treeNode(generateKey(), data);

	if (mRoot == nullptr){
		mRoot = node;
		return true;
	}
	treeNode* iterator = mRoot;

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

static treeNode* Tree::searchNode(int key){
	if (mRoot == nullptr)
		return nullptr;

	treeNode* iterator = root;
	while (iterator != nullptr && iterator->mKey != key){
		if (iterator->mKey < key)
			iterator = iterator->mLeftChild;
		else
			iterator = iterator->mRightChild;
	}

	if (iterator == nullptr)
		return nullptr;

	return iterator;
}

static Data* Tree::searchData (int key){
	return Tree::searchNode(key)->getData();
}

bool writeToFile(){
	//TODO
}

bool readFromFile(std::string filename){
	//TODO
}
#endif /* TREE_H_ */
