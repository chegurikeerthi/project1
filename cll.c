
//keerthi kumari
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *link,*prev;
};
int addcount;


void display(struct node *start)
{
	struct node *p;
	if(start==NULL)
	{
		printf("empty ll\n");
	}
	p=start;
	while(p!=NULL)
	{
		printf("%d",p->info);
		p=p->link;
	}
        printf("\n");
}


void displaydoub(struct node *start)
{
        struct node *p;
        if(start==NULL)
        {
                printf("empty ll\n");
        }
        p=start;
        while(p!=NULL)
        {
                printf("%d\n",p->info);
                //printf("%d\n",p->prev->info);
                p=p->link;
        }
}

void displaybackss(struct node *start)
{
struct node *j=start,*k=start;
if(j->link==NULL)
return;
else
j=j->link;
displaybackss(j);
printf("%d",j->info);
//printf("%d",k->info);
}


void displayback(struct node *head)
{
	struct node *t,*p;
	t=p=head;
	t=t->prev;
	while(t!=p)
	{
		printf("%d\n",t->info);
		t=t->prev;
	}
	printf("%d\n",t->info);
}


struct node *makedouble(struct node *head1)
{
struct node *temp=NULL,*p=NULL,*q=NULL,*p1=NULL;
if(head1==NULL)
{
printf("list is empty\n");
}
q=p=head1;
while(p!=NULL)
{
temp=p;
p->prev=p1;
p1=p;
p=p->link;
}
q->prev=temp;
//p->prev=temp;
return head1;
}


struct node *create(struct node *head)
{
	struct node *temp=NULL,*p=NULL;
	while(addcount)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("enter data\n");
		scanf("%d",&(temp->info));
		temp->link=NULL;
		if(head==NULL)
		{
			head=temp;
			p=head;
		}
		else
		{
			p->link=temp;
			p=p->link;			
		}
		addcount--;
	}
	return head;
}

int main()
{
	int data,i=1;
	struct node *start=NULL,*doublee=NULL,*head=NULL;
	printf("enter addcount\n");
	scanf("%d",&addcount);
        head=create(start);
        display(head);
        //printf("%p",head);
        displaybackss(head);
        doublee=makedouble(head);
        displaydoub(doublee);
        displayback(doublee);
        
}
