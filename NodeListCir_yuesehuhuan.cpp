#include<stdio.h> 
#include<stdlib.h>
//����ṹ��
struct node{
	int info;
    struct node *next;	
};
int n,s,m;

struct node* creat_xunhuanList(){ 
	struct node *head,*temp,*pre,*p;//ͷ����������ݵ�ָ�루����Ϊ����ͷ����ָ�룩 
	           //head:ָ���һ���ڵ㣬temp:����ÿ�ο��ٿռ�,pre:���ڱ����һ���ڵ㣨�仯�ģ�
			   //pre:����������һ�Σ�pre->next=temp; ���¿��ٵĿռ�=��һ���ڵ��nextָ�� 
	head=NULL;
	temp=NULL;
	pre=NULL;//��ʼ��ָ��ָ�� 
	p=NULL;//pָ��������� 
//	head=(struct node *)malloc(sizeof(struct node));//����Ϊhead����һ���ռ伴ʹ����Ϊ�գ�ͷ���Ҳ��Ϊ�� 

	for(int i=0;i<n;i++){	
		temp=(struct node *)malloc(sizeof(struct node));
		if(i==0){
	    	head=temp;
			pre=temp;	
		}
		temp->info=i+1;
		temp->next=head;
		pre->next=temp;
		pre=temp;		
	}
	return head;	
}
void yuesefuhuan(struct node*head){
	struct node*p;
	p=head;
	int i=1;//����ͷ���
	while(s--) 
	   p=p->next;//��p��s������ʼ�����ڵ� 
	while(p!=NULL){
		if(p==p->next){//��ʾ�Ѿ�ֻʣ��һ����Ч���ݽڵ㣨��ͷ����⣩ 
			printf("%d\n",p->info);
			break; 
		}
		if((i+1)%(m-1)==0){//Ȼ�������һ��
		printf("%d,",p->next->info);//��������ɾ��
		p->next=p->next->next;//ɾ����һ���ڵ�
		}
		p=p->next;		
		i++;		
	} 
//	p=head->next; 
//	while(p!=head){
//		printf("%d\n",p->info);
//		p=p->next;
//	}
}
int main(){
	while(scanf("%d%d%d",&n,&s,&m)!=EOF){
	if(n==0&&s==0&&m==0)
	   break;
	struct node*head;
	head=creat_xunhuanList();
	yuesefuhuan(head); 	
}
return 0;
}
