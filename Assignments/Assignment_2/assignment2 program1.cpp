#include <iostream>
using namespace std;
class Node{
	private:
		int data;
		Node *next;
	public:
	Node * head;
		
		Node(){
			head==NULL;
		}
		void insert_at_end(int value){
			Node *newnode= new Node();
			if (head==NULL){
				head= newnode;
				head->data= value;
				head->next= NULL;
			}
			else{
				Node *ptr;
				ptr= head;
				while( ptr->next != NULL){
					ptr= ptr->next;
				}
				ptr->next= newnode;
				newnode->data= value;
				newnode->next= NULL;
			
			}
		
		}
		
		void display(){
			cout<<"The linked list is:"<< endl;
			if(head== NULL){
				cout<<"Linked list is empty";
			}
			else{
				Node *temp;
				temp = head;
				while( temp->next!=NULL){
				
					cout<<temp->data<<"  ";
					temp= temp->next;
				}
				cout<<temp->data<< endl;
			}
		}
		void display1(){
	
			Node *temp;
			temp=head;
			cout<<"****head address:**** "<< &head<< endl<<"----------------------------"<<endl<<"head content:  "<< head<< endl;
			cout<<"****ptr address:**** "<< &temp<< endl<<"----------------------------"<<endl<<"ptr content:  "<< temp<< endl;
			if(head==NULL){
				cout<<"Linked list is empty";
				
			}
			else{
				cout<<"-------------------"<<endl<<"ptr-> data: "<< temp->data<<endl<<"-------------------"<<endl<<endl;
				while(temp->next!= NULL){
					temp= temp->next;
					cout<<"ptr: "<<temp<<endl<<"ptr->next: "<< temp->next<< endl<<"ptr->data: "<< temp->data<<endl<<"-------------------"<<endl;	
				
			}
				cout<<"ptr:"<< temp<< endl<< "ptr->next: "<< temp->next<<endl;
			}
			
		
	}
};
int main(){
	Node n;
	n.insert_at_end(1);
	n.insert_at_end(2);
	n.insert_at_end(20);
	n.insert_at_end(30);
	n.display();
	n.display1();
	return 0;
}

