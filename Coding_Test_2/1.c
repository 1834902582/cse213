#include<stdio.h>
#include<stdlib.h>

typedef struct Node node;
struct Node {
int data;
node *next;
};
node *head=NULL;
node *insert_after(node *temp, int key, int value);
node *merge(node *list1,node *list2);
node *copy_list(node *list1);
void delete_after();
void clear ();
void display();
node *create_list1();
node *create_list1();
void menu();


int main (){

menu();
return 0;
}

void display(){
node *temp;
printf("Single Way Linked List\n");
temp=head;
if(temp==NULL){
    printf("List Empty\n");

}
while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
}
}
void clear(){
node *all_delete;
node *temp=head;
while(temp!=NULL){
    all_delete=temp;
    temp=temp->next;
    free(all_delete);
}
}

void delete_after(){
node *to_delete,*temp;
node *head;
int i,n;
printf("Enter node:\n");
scanf("%d",&n);
temp=head;
for(i=0;i<n;i++){
    to_delete=temp;
    temp=temp->next;
if(temp==NULL){
    printf("Litst Empty\n");
    return;
}
}
to_delete->next=temp->next;
free(temp);
printf("%d Node Deleted\n",n);
}

node *insert_after(node *temp, int key, int data){
node *head=temp;
int i=0;
while(temp){
    if(temp->data==key){
        node *new_node=(node *)malloc(sizeof(node));
        new_node->data=data;
        new_node->next=temp->next;
        temp->next=new_node;
        i++;
        return head;
    }
    temp=temp->next;
}
if(i<1 || i>4){
    printf("Index out of range\n");
    printf("Element not Found\n");
}
else
    printf("Element no Found\n");
    return head;
}

node *merge(node *list1, node *list2){
node *temp, *head;
head=list1;
while(list1->next){
    list1=list1->next;
}
list1->next=list2;
return head;
}

node *copy_list(node *list1){
node *head2,*temp;
temp=(node *)malloc(sizeof(node));
temp->data=list1->data;
temp->next=NULL;
head2=temp;
list1=list1->next;
while(list1){
    temp->next=(node*)malloc(sizeof(node));
    temp=temp->next;
    temp->data=list1->data;
    temp->next=NULL;
    list1=list1->next;
}
return head2;
}
node *create_list1(){
node *a,*b,*c,*d;

a=(node*)malloc(sizeof(node));
b=(node*)malloc(sizeof(node));
c=(node*)malloc(sizeof(node));
d=(node*)malloc(sizeof(node));


a->data=1;
a->next=b;
b->data=2;
b->next=c;
c->data=3;
c->next=b;
d->data=4;
d->next=NULL;

return a;

}

node *create_list2(){
node *w,*x,*y,*z;

w=(node*)malloc(sizeof(node));
x=(node*)malloc(sizeof(node));
y=(node*)malloc(sizeof(node));
z=(node*)malloc(sizeof(node));


w->data=11;
w->next=x;
x->data=22;
x->next=y;
y->data=33;
y->next=z;
z->data=44;
z->next=NULL;

return w;

}

void menu(){
node *head1=NULL;
node *head2=NULL;
node *list3=NULL;
node *list1=NULL;
node *list2=NULL;

head1=create_list1();
head2=create_list2();
int op,key,value;

do{
    system("cls");
    printf("1.Insert After\n");
    printf("2.Delete After\n");
    printf("3.Merge Two List\n");
    printf("4.Copy\n");
    printf("5.Clear\n");
    printf("6.Display\n");
    printf("7.Exit \n");

  printf("Enter your choice:\n");
  scanf("%d",&op);

  if(op==1){
    printf("List 1:\n");
    display(head1);
    printf("Enter Key:");
    scanf("%d", &key);
    printf("Enter Value:");
    scanf("%d",&value);
    head1=insert_after(head1,key,value);
    printf("After Insert:\n");
    display(head1);
    getchar();
    printf("Press Enter to Continue\n");
    getchar();
  }
else if(op==2){
    printf("List 1:");
    display(head1);
    delete_after();
    display(head1);
    getchar();
    printf("Press Enter to Continue\n");
    getchar();
  }
else if(op==3){
    list1=head1;
    printf("List 1:\n");
    display(list1);
    list2=head2;
    printf("List 2:\n");
    display(list2);

    list3=merge(list1,list2);
    printf("After Merge:\n");
    display(list3);
    getchar();
    printf("Press Enter to Continue\n");
    getchar();
  }
else if(op==4){
    printf("list 1:\n");
    display(head1);
    list3=copy_list(head1);
    printf("After Copy:\n");
    display(list3);
    getchar();
    printf("Press Enter to Continue\n");
    getchar();
 }

else if(op==5){
    printf("List 1:\n");
    clear();
    printf("All Deleted\n");
    getchar();
    printf("Press Enter to Continue\n");
    getchar();
  }
else if(op==6){
    printf("List 1:\n");
    display(head1);
    printf("List 2:\n");
    display(head2);
    getchar();
    printf("Press Enter to Continue\n");
    getchar();

  }
else if(op==7){
    exit(0);
  }
else {
    printf("Invalid.Please select option between 1to7:\n");
    getchar();
    printf("Press Enter to Continue\n");
    getchar();
}
}
while(op!=7);

}
