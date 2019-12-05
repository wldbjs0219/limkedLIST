struct linknode{
	int data;
	
	void *next;
} ln_t; 			 //node=data+pointer

static ln_t *list;  //list=start point?

int create_node(int value)
{
	ln_t *ptr;
	ln_t *ptrTrav;
	int cnt=0;
	
	ptr = (ln_t*)malloc(sizeof(ln_t));
	
	if (ptr == NULL)  //memory licking
	{
		//printf(�޸� ������)
		return -1;
	}
	
	ptr->data = value;
	ptr->next = NULL;
	
	if(list == NULL)  //ȭ��ǥ�� �ߴ� ���� 
	{ 
		list = ptr;
	}
	else
	{
		ptrTrav = list;
		cnt++;
		while(ptrTrav->next !=NULL)
		{
			ptrTrav = ptrTrav->next;
			cnt++;
		}
		
		ptrTrav->next = ptr;
	}
	return cnt;
}
