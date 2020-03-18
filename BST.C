#include <stdio.h>
#include <conio.h>
struct tree
{
	int data;
	struct tree *left;
	struct tree *right;
	};
	struct tree *create(int n)
	{
		struct tree *root=NULL,*temp,*ptr,*ptr1;
		int i,ele;
		printf("enter the elements\n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&ele);

temp=(struct tree*)malloc(sizeof(struct tree));
			temp->data=ele;
			temp->left=NULL;
			temp->right=NULL;
			if(root==NULL)
			{
				root=temp;
				continue;
				}
			ptr=ptr1=root;
				while(ptr1!=NULL)
				{
					ptr=ptr1;
			if(ele<ptr->data)
					ptr1=ptr->left;

					else if(ele>ptr->data)
					ptr1=ptr->right;
					else
					{
						printf("duplicate entry\n");
						break;

						}
						}
			if(ele<ptr->data)
						ptr->left=temp;
				else
				ptr->right=temp;
						}
						return root;
						}
				void inorder(struct tree *root)
				{
					struct tree *temp=root;
					if(temp!=NULL)
					{
					inorder(temp->left);
					printf("%d\t",temp->data);
					inorder(temp->right);
						}
						}
				void preorder(struct tree *root)
				{
					struct tree *temp=root;
					if(temp!=NULL)
					{
				printf("%d\t",temp->data);
						preorder(temp->left);
						preorder(temp->right);
						}
						}


				void postorder(struct tree *root)
				{
					struct tree *temp=root;
					if(temp!=NULL)
					{
						postorder(temp->left);
						postorder(temp->right);
						printf("%d\t",temp->data);
						}
						}
	struct tree* search(int key,struct tree *root)
	{
		struct tree*temp=root;
		while(temp!=NULL)
		{
			if(key==temp->data)
			return temp;
			else if(key>temp->data)
			temp=temp->right;
			else
			temp=temp->left;
			}
			return temp;
			}
			void main()
			{
			int i,ch,key,n;
			struct tree *root=NULL,*a=NULL;
			clrscr();
printf("1.create\n2.inorder\n3.preorder\n4.postorder\n5.search\n6.exit\n");
			while(1)
			{
				printf("enter the choice");
				scanf("%d",&ch);
				switch(ch)
{
	case 1:printf("enter the number of nodes\n");
		scanf("%d",&n);
		root=create(n);
		break;
	case 2:printf("inorder traversal is\n");
		inorder(root);
		break;
	case 3:printf("preorder traversal is\n");
		preorder(root);
		break;
	case 4:printf("postorder trasversal is \n");
		postorder(root);
		break;
	case 5:printf("enter the key element\n");
		scanf("%d",&key);
		a=search(key,root);
		if(a==NULL)
		printf("key element not found\n");
		else
	printf("key element found\n");
		break;
		case 6:exit(0);
	}
	}
	}
