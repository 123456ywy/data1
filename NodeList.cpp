#include<stdio.h> 
#include<stdlib.h>
//����ṹ��
struct node{
	int info;
    struct node *next;	
};

int main(){
	
	int n,x; 
	struct node *head,*temp,*pre,*p;//ͷ����������ݵ�ָ�루����Ϊ����ͷ����ָ�룩 
	           //head:ָ���һ���ڵ㣬temp:����ÿ�ο��ٿռ�,pre:���ڱ����һ���ڵ㣨�仯�ģ�
			   //pre:����������һ�Σ�pre->next=temp; ���¿��ٵĿռ�=��һ���ڵ��nextָ�� 
	head=NULL;
	temp=NULL;
	pre=NULL;//��ʼ��ָ��ָ�� 
	p=NULL;//pָ��������� 
	scanf("%d",&n);//n���ڵ� 
	head=(struct node *)malloc(sizeof(struct node));//����Ϊhead����һ���ռ伴ʹ����Ϊ�գ�ͷ���Ҳ��Ϊ�� 
	pre=head;
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		temp=(struct node *)malloc(sizeof(struct node));
		temp->info=x;
		temp->next=NULL;
		pre->next=temp;
		pre=temp;		
	}
	p=head->next; 
	while(p!=NULL){
		printf("%d\n",p->info);
		p=p->next;
	}
	return 0;
}
