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
	for(int i=0;i<n;i++){
		scanf("%d",&x);
		temp=(struct node *)malloc(sizeof(struct node));
		temp->info=x;
		temp->next=NULL;
		if(i==0)//��ʱ�����һ���ڵ� 
			head=temp; //head���ڱ�ǣ�������� 
		else
		    pre->next=temp;
		pre=temp;
	}
	p=head; 
	while(p!=NULL){
		printf("%d\n",p->info);
		p=p->next;
	}
	return 0;
}
