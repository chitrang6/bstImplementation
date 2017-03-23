


using namespace std;


struct node
{
	int data;
	node* left;
	node* right;
};



class bst
{

	node * root_t;
	int sizeofbst_t;

	node* createNode(int val);
	void deletenode(node* Node);
	



public:
	bst();
	~bst();
	bool isEmpty() const;
	node* getroot() const;
	void add(int val);
	void add(node* Node);
	unsigned long size() const;
	void preordertraversal(node* Node) const;

};