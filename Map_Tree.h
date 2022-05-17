#pragma once
#include <string>
#include <iostream>
struct Tree
{
	std::string data;
	int key;
	Tree* right;
	Tree* left;
	unsigned height;
	Tree(int _key, std::string _data) :key(_key), data(_data), right(nullptr), left(nullptr), height(1) {};
};

class Map_Tree
{
private:
	Tree* root;
	unsigned height(Tree* p);
	int bal_factor(Tree* p);
	void fix_height(Tree* p);
	void delete_tree(Tree* p);
	void print(Tree* p, int level) const;
	Tree* rotate_right(Tree* p);
	Tree* rotate_left(Tree* q);
	Tree* balance(Tree* p);
	Tree* find_min(Tree* p);
	Tree* erase_min(Tree* p);
	Tree* erase_elem(Tree* p, int key);
	Tree* insert(int key, std::string value, Tree* root);
public:
	Map_Tree();
	~Map_Tree();
	void Print() const;
	bool insert(int key, std::string value);
	const std::string& find(int key) const;
	bool erase(int key);
};
