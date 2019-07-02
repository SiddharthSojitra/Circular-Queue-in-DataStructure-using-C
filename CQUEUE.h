#define MAX 10

typedef struct
{
	int data[MAX];
	int f,r;
}QUEUE;

void init(QUEUE *q)
{

	q->f=-1;
	q->r=-1;
}

void insert(QUEUE *q,int val)
{
	if((q->r+1)==q->f || (q->r==MAX-1 && q->f==0))
	{
		printf("\nQueue is OVERFLOW");
	}
	else
	{
		if(q->f==-1 && q->r==-1)
		{
			q->f=0;
			q->r=0;
		}
		else if(q->r==MAX-1)
		{
			q->r=0;
		}
		else
		{
			q->r++;
		}
		q->data[q->r]=val;
	}
}


int display(QUEUE *q,int val)
{
	int i;
	if(q->f==-1 && q->r==-1)
	{
		printf("\nQueue is Empty");
	}
	else if(q->f<=q->r)
	{
		for(i=q->f;i<=q->r;i++)
		{
			printf("\nDATA = %d",q->data[i]);
		}
		printf("\n");
	}
	else
	{
		for(i=q->f;i<MAX;i++)
		{
			printf("\nDATA = %d",q->data[i]);
		}
		printf("\n");
		for(i=q->f;i<=q->r;i++)
		{
			printf("\nDATA = %d",q->data[i]);
		}
		printf("\n");
	}
}

int isdelete(QUEUE *q)
{
	int val=NULL;
	if(q->f==-1 && q->r==-1)
	{
		printf("\n Queue is Empty");
	}
	else
	{
		val=q->data[q->f];
		if(q->f==q->r)
		{
			q->f=-1;
			q->r=-1;
		}
		else if(q->f==MAX-1)
			{
				q->f=0;
			}
			else
			{
				q->f++;
			}
	}
	return val;
}

int isempty(QUEUE *q)
{
    if(q->r==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int peek(QUEUE *q)
{
	int val=NULL;
	if(q->f==-1 && q->r==-1)
	{
		printf("\nQueue is Empty");
	}
	else
	{
		val=q->data[q->f];
	}
	return val;
}

int change(QUEUE *q,int pos,int val)
{
	int i;
	if(q->f==-1 && q->r==-1)
	{
		printf("\nQueue is Empty");
	}
	else
	{
		i=(pos+q->f-1)%MAX;
	}
	if((i>=q->f && i<=q->r && q->f<=q->r) || (q->f>q->r && (i>=q->f && i<MAX)) || (i>=0 && i<=q->r))
	{
		q->data[i]=val;
	}
	else
	{
		printf("\nINVALID POSITION");
	}
}
