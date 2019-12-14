#include<stdio.h>
#include<conio.h>
#define max 20;
int q[20];

struct btree
{
int data;
struct btree *left, *right;
};
void insert_tree(struct btree *r, struct btree *p)
{
char ans;
printf("\n current node is %d",r->data);
printf("\nadd to left or right %d (l/r)",r->data);
ans = getche();
if(ans == 'r'||ans== 'R')
 {  if(r->right == NULL)
      r->right = p;
   else
      //printf("\n node %d has rightchild %d"
      insert_tree(r->right,p);
 }
 else
   {
   if(r->left == NULL)
      r->left=p;
   else
   insert_tree(r->left,p);
    }
 }

void bfs(btree t)
{
int level = 0;
treeptr temp = root,dummy = NULL;
addq(temp);
addq=dummy;
printf("\n level :%d ",level);
do
 {
 temp = deleq();
 if(temp != dummy)
    printf("%5d",temp->info);
 if (temp==dummy)
  {
  if(!emptyq())
    level++;
    printf("\n level :%d",level);
    addq(dummy);
  }
  else
  {
   if(temp->left)
      addq(temp->left);
   if(temp->right)
      addq(temp->right);
  }
}while(!empty())
printf("\n The height of the tree is %d",level+1);
}
void main()
{
char temp;
struct btree *b,*root=NULL;
clrscr();
do{
b =  (struct btree *)malloc(sizeof(struct btree));
b->left=NULL;
b->right=NULL;
printf("\nEnter data: ");
scanf("%d",&b->data);
if(root == NULL)
   root = b;
else
   insert_tree(root,b);
   printf("\nEnter more elements(y/n) ");
   scanf("\n%c",&temp);
}while(temp=='y');
printf("\nPre order -");
pre_order(root);
getch();
printf("\npost order- ");
post_order(root);
getch();
printf("\nIn order - ");
in_order(root);
//display(root);
getch();
}


