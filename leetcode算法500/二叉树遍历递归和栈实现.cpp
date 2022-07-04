#include<iostream> 
#include<stack>
#include<malloc.h>
using namespace std;
typedef struct TreeNode{
	int date;
	TreeNode *left=NULL;
	TreeNode *right=NULL;
}TreeNode;

void PreOrder(TreeNode *p)
{
	
	cout << p->date << endl;
	if(p->left!=NULL)
	PreOrder(p->left);
	if(p->right!=NULL)
	PreOrder(p->right);
	
}


int main()
{
	TreeNode root;
	root.date = 10;
	root.left = new TreeNode;
	root.left->date=2;
	root.left->right = new TreeNode;
	root.left->right->date = 4;
	root.right = new TreeNode;
	root.right->date = 16;
	root.right->left = new TreeNode;
	root.right->left->date = 12;
	root.right->right = new TreeNode;
	root.right->right->date = 20;
	TreeNode *p = &root;
	stack<TreeNode *> temp; 
	// 先序遍历 
//	PreOrder(p);
//	while(p!=NULL | !temp.empty())	{
//		while(p!=NULL)
//		{
//			cout << p->date << " ";
//			temp.push(p);
//			p = p->left;
//		}
//		p = temp.top();
//		temp.pop();
//		p = p->right;
//	}
	
	//中序遍历
	
//	while(p!=NULL | !temp.empty())	{
//		while(p!=NULL)
//		{
//			temp.push(p);
//			p = p->left;
//		}
//		p = temp.top();	
//		temp.pop();
//		cout << p->date <<endl;
//		p = p->right;
//	}	 
//	后序遍历
	TreeNode *previsit=NULL;	
	while(p!=NULL | !temp.empty())	{
		while(p!=NULL)
		{
			temp.push(p);
			p = p->left;
		}
		p = temp.top();	temp.pop();

		if(p->right==NULL | p->right == previsit) {
		cout << p->date << endl;
		previsit = p;
		p=NULL;
		}
		else{
			temp.push(p);
			p = p->right;
		}		
	}	 		
}
