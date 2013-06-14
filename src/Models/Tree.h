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
	bool delete (int key);

	treeNode* searchNode(Data* data); // implementation skipped because from lack of knowledge of data type
	static treeNode* searchNode(int key); // static because search is from auto-generated key
	static Data* searchData (int key); // returns data in the node of the given key

	bool writeToFile(); //To save data
	bool readFromFile(std::string filename); //To retrieve data from file

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
}
#endif /* TREE_H_ */
