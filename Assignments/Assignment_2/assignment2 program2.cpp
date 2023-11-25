#include <iostream>
using namespace std;
class single{
	private:
		int data;
		single *next;
	public:
		single *head;
		single(){
			head=NULL;
		}
		
		void insert_at_begin_singly(int n){
				single *newnode= new single();
				if(head==NULL){
			
				head= newnode;
				head->data=n;
				head->next=NULL;
			}
			else{
				single *ptr;
				ptr=newnode;
				ptr->next=head;
				ptr->data=n;
				head=ptr;
			}
			display_singly();
		}
		
		void insert_at_end_singly(int n){
			single *newnode= new single();
				if(head==NULL){
				head=newnode;
				head->data=n;
				head->next=NULL;
			}
			else{
				single *ptr, *p;
				ptr=head;
				while(ptr->next!=NULL){
					ptr=ptr->next;
				}
				p= newnode;
				p->data=n;
				p->next=NULL;
				ptr->next=p;
			}
			display_singly();
		}
		void insertspecific_singly(int pos, int n){
			single *newnode= new single();
			if(head==NULL){
			head = newnode;
			head->data=n;
				head->next=NULL;
			}
			else{
				single *ptr;
			ptr=head;
				while(ptr->data!=pos){
					ptr=ptr->next;
				}
				single *p;
				p->data=n;
				p->next=ptr->next;
				ptr->next=p;
			}
			display_singly();
			
		}
		
	 	void del_begin_singly(){
			single *ptr;
			ptr= head;
			if(head==NULL){
				cout<<"No node to delete";
			}
			else{
				head=ptr->next;
				delete ptr;
				ptr= NULL;
				
				
			}
			display_singly();
		}
		void del_end_singly(){
			single *ptr, *ptr1;
			ptr = head;
			if(head==NULL){
				cout<<"No node to delete";
			}
			else{
				while(ptr->next !=NULL){
					ptr1= ptr;
					ptr= ptr->next;
				}
				ptr->next= NULL;
				delete ptr;
				ptr= NULL;
			}
			display_singly();
		}
		
		void delspecific_singly(int position){
			if(head==NULL){
				cout<<"No node to delete";
			}
			single *ptr, *ptr1;
			while(ptr->data!= position){
				ptr1= ptr;
				ptr= ptr->next;
			}
			ptr1->next= ptr->next;
			delete ptr;
			ptr=NULL;
			display_singly();
	}
			
		void display_singly(){
			cout<<endl<<"Elements of linked list are= ";
			if (head== NULL){
				cout<<"Linked list is empty";	
			}
			else{
				single *ptr;
				ptr=head;
				while(ptr->next!=NULL){
					ptr= ptr->next;
					cout<<ptr->data<<"  ";
				}
				cout<<ptr->data;
			}
			cout<<endl<<endl;
		}
};

class doubly{
	private:
		int data;
		doubly* next;
		doubly* prev;
	public:
		doubly *head;
		
		doubly(){
			head=NULL;
		}
		
		void insertbegin_doubly(int n){
			doubly *newnode= new doubly();
			doubly *ptr;
			ptr=head;
			if (head== NULL){
				head= newnode;
				head->data=n;
				head->next=NULL;
				head->prev= NULL;
			}
			else{
				newnode->data= n;
				newnode->next= ptr;
				newnode->prev=NULL;
				head= newnode;
			}
			display_doubly();
		}
		void insertend_doubly(int n){
			doubly *newnode= new doubly();
			doubly *ptr;
				ptr=head;
			if (head== NULL){
				head= newnode;
				head->data=n;
				head->next=NULL;
				head->prev= NULL;
			}
			else{
				while(ptr->next!= NULL){
					ptr= ptr->next;
				}
				ptr->next= newnode;
				newnode->data=n;
				newnode->next=NULL;
				newnode->prev= ptr;
				
			}
			display_doubly();
		}
		void insertspecific_doubly(int n, int pos){
			doubly *newnode= new doubly();
			doubly *ptr, *ptr1;
			while(ptr->data!= pos){
				ptr= ptr->next;
				ptr1= ptr;
			}
			newnode->data=n;
			newnode->next= ptr;
			ptr1->next= newnode;
			newnode->prev=ptr1;	
		display_doubly();
		}
		
		void delbegin_doubly(){
			if(head==NULL){
				cout<<"Linked list is empty";
				
			}
			else{
				doubly *ptr;
				ptr= head;
				head= ptr->next;
				head->prev= ptr;
				delete ptr;
				ptr= NULL;
			}
			display_doubly();
		}
		void delend_doubly(){
			doubly *ptr, *ptr1;
			while(ptr!= NULL){
				ptr1= ptr;
				ptr=ptr->next;
			}
			ptr1->next= NULL;
			delete ptr;
			ptr= NULL;
			display_doubly();
		}
		
		void delspecific_doubly(int pos){
			doubly *ptr, *ptr1;
			ptr= head;
			while (ptr->data != pos){
				ptr1= ptr;
				ptr = ptr->next;	
			}
			ptr1->next=ptr->next;
			ptr->next->prev= ptr1;
			delete ptr;
			ptr= NULL;
			display_doubly();
			
		}
		
		void display_doubly(){
			doubly *ptr;
			ptr= head;
			if(head== NULL){
				cout<<"Linked list is empty";				
			}
			else{
				cout<<"Elements of linked list are= ";
				while(ptr!=NULL){
					cout<< ptr->data;
					ptr= ptr->next;
				}
				cout<<endl;
			}
			
			
		}
};

class circle{
	private:
		int data;
		circle *next;
	public:
		circle *head;
		
		circle(){
			head= NULL;
		}
		
		void insertbeg_circular(int n){
			
			circle *ptr,*ptr1;
			ptr= head;
			circle *NewNode= new circle;
			if(head== NULL){
				head= NewNode;
				NewNode->next= NewNode;
			}
			while(ptr->next!= head){
				ptr= ptr->next;
			}
			circle *newnode= new circle();
			newnode->data= n;
			newnode->next= head;
			head= newnode;
			ptr->next= head;
			display_circular();
		}
		
		void insertend_circular(int n){
			circle* NewNode = new circle();
			NewNode->data= n;
			NewNode->next= NULL;
			if (head==NULL){
				head= NewNode;
				NewNode->next= NewNode;
				
			}
			else{
				circle *ptr;
				ptr= head;
				while(ptr->next !=head){
					ptr= ptr->next;
			}
				ptr->next= NewNode;
				NewNode->next= head;
					
				}
				display_circular();
		}
		
		void insertspecific_circular(int n, int pos){
			circle *ptr, *ptr1;
			ptr= head;
			circle *newnode= new circle();
			while(ptr->data!= pos){
				ptr1= ptr;
				ptr= ptr->next;
			}
			newnode->data= n;
			newnode->next= ptr;
			ptr1->next= newnode;
			display_circular();
		}
		
		void delbeg_circular(){
			if (head== NULL){
				cout<<"Nothing to delete"<< endl;
			}
			else{
				circle *ptr;
				ptr= head;
				while(ptr->next!= head){
					ptr= ptr->next;
				}
				head= head->next;
				ptr->next= head;
				delete ptr;
					
			}
			display_circular();
		}
		void delend_circular(){
			if (head== NULL){
			cout<<"Nothing to delete"<< endl;
			}
			circle *ptr, *ptr1;
			ptr= head;
			while(ptr->next!= head){
				ptr1= ptr;
				ptr= ptr->next;
			}
			ptr1->next= head;
			delete ptr;
			ptr= NULL;
		display_circular();	
			
		}
		void delspecific_circular(int pos){
				if (head== NULL){
			cout<<"Nothing to delete"<< endl;
			}
			else{
				circle *ptr, *ptr1;
				ptr=head;
				while(ptr->data!= pos){
					ptr1= ptr;
					ptr= ptr->next;
				}
				ptr1->next= ptr->next;
				delete ptr;
				ptr= NULL;
			}
			display_circular();
		}
		void display_circular(){
			if (head== NULL){
				cout<<"Linked list is empty";
				
			}
			else{
				cout<<"Elements of linked list are= ";
				circle *ptr;
				ptr= head;
				while( ptr->next!= head){
					ptr= ptr->next;
					cout<<ptr->data<<"  ";
					
				}
				cout<<ptr->data;
			}
		}
};
int main(){
	single obj1;
	doubly obj2;
	circle obj3;
	int n, v, id, mn;
	do
	{
	cout << "Select any One Linked List" << endl;
	cout << "1: SINGLY" << endl;
	cout << "2: DOUBLY" << endl;
	cout << "3: CIRCULAR" << endl;
	cin >> mn;
	switch (mn){
	case 1:
		min:
		cout << "Select any One Operation You want to Perform.." << endl;
		cout << "1: INSERTION" << endl;
		cout << "2: DELETION" << endl;
		cin >> id;
		switch (id)
		{

		case 1:
			cout << "1: To add Node at Begining" << endl;
			cout << "2: To add Node at End" << endl;
			cout << "3: To add Node at Specific Location" << endl;
			cout << "4: to Back" << endl;
			cout << "5: to exit" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				cout << "\nEnter the value to insert: ";
				cin >> v;
				obj1.insert_at_begin_singly(v);
				break;
			case 2:
				cout << "\nEnter the value to insert: ";
				cin >> v;
				obj1.insert_at_end_singly(v);
				break;
			case 3:
				int o, loc;
				cout << "Enter location value: ";
				cin >> loc;
				cout << "Enter the value to insert: ";
				cin >> v;
				obj1.insertspecific_singly(loc, v);
				break;
			case 4:
				goto min;
			case 5:
				exit(1);
			default:
				cout << "Choose valid Option" << endl;
				break;
			}
			break;
			system("pause");

		case 2:

			cout << "1: To Delete Node from Begining" << endl;
			cout << "2: To Delete Node from End" << endl;
			cout << "3: To Delete Specific Node" << endl;
			cout << "4: to Back" << endl;
			cout << "5: to exit" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				cout<<"Node deleted from Begining....";
				obj1.del_begin_singly();
				break;
			case 2:
				cout<<"Node deleted from END....";
				obj1.del_end_singly();
				break;
			}
			case 3:
			cout << "Enter the node value to Delete: ";
				cin >> v;
				obj1.delspecific_singly(v);
				obj1.display_singly();
				break;
			default:
				cout << "Choose valid Option" << endl;
				break;
			
		}
		break;
//end of case singly
//-----------------------------------------------
	case 2:
		tg:
		cout << "Select any One Operation You want to Perform.." << endl;
		cout << "1: INSERTION" << endl;
		cout << "2: DELETION" << endl;
		cin >> id;
		switch (id){
//insertion in doubly		
		case 1:
			
			cout << "1: To add Node at Begining" << endl;
			cout << "2: To add Node at End" << endl;
			cout << "3: To add Node at Specific Location" << endl;
			cout << "4: to Back" << endl;
			cout << "5: to exit" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				cout << "\nEnter the value to insert: ";
				cin >> v;
				obj2.insertbegin_doubly(v);
				break;
				
			case 2:
				cout << "\nEnter the value to insert: ";
				cin >> v;
				obj2.insertend_doubly(v);
				break;	
			
			case 3:
				int o, loc;
				cout << "Enter location value: ";
				cin >> loc;
				cout << "Enter the value to insert: ";
				cin >> v;
				obj2.insertspecific_doubly(v,loc);
				
			case 4:
				goto tg;
			case 5:
				exit(1);
			default:
				cout << "Choose valid Option" << endl;
				break;
			}
			break;
//deletion in doubly
		case 2:
			cout << "1: To Delete Node from Begining" << endl;
			cout << "2: To Delete Node from End" << endl;
			cout << "3: To Delete Specific Node" << endl;
			cout << "4: to Back" << endl;
			cout << "5: to exit" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				cout<<"Node deleted from Begining....";
				obj2.delbegin_doubly();
				break;
			case 2:
				cout<<"Node deleted from END....";
				obj2.delend_doubly();
				break;
			case 3:
			cout << "Enter the node value to Delete: ";
				cin >> v;
				obj2.delspecific_doubly(v);
			
				break;
			default:
				cout << "Choose valid Option" << endl;
				break;
			}
				

		}
		break;
//end of case doubly
//-----------------------------------
case 3:
		gb:
		cout << "Select any One Operation You want to Perform.." << endl;
		cout << "1: INSERTION" << endl;
		cout << "2: DELETION" << endl;
		cin >> id;
		switch (id){
//insertion in Circular		
		case 1:
			
			cout << "1: To add Node at Begining" << endl;
			cout << "2: To add Node at End" << endl;
			cout << "3: To add Node at Specific Location" << endl;
			cout << "4: to Back" << endl;
			cout << "5: to exit" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				cout << "\nEnter the value to insert: ";
				cin >> v;
				obj3.insertbeg_circular(v);
				break;
				
			case 2:
				cout << "\nEnter the value to insert: ";
				cin >> v;
				obj3.insertend_circular(v);
				break;	
			
			case 3:
				int o, loc;
				cout << "Enter location value: ";
				cin >> loc;
				cout << "Enter the value to insert: ";
				cin >> v;
				obj3.insertspecific_circular(v,loc);
				
			case 4:
				goto gb;
			case 5:
				exit(1);
			default:
				cout << "Choose valid Option" << endl;
				break;
			}
			break;
//deletion in Circular
		case 2:
			cout << "1: To Delete Node from Begining" << endl;
			cout << "2: To Delete Node from End" << endl;
			cout << "3: To Delete Specific Node" << endl;
			cout << "4: to Back" << endl;
			cout << "5: to exit" << endl;
			cin >> n;
			switch (n)
			{
			case 1:
				cout<<"Node deleted from Begining....";
				obj3.delbeg_circular();
				break;
			case 2:
				cout<<"Node deleted from END....";
				obj3.delend_circular();
				break;
			case 3:
			cout << "Enter the node value to Delete: ";
				cin >> v;
				obj3.delspecific_circular(v);
				break;
			default:
				cout << "Choose valid Option" << endl;
				break;
			}
				

		}
		break;
//end of case circular




	default:
		cout << "Choose valid Option" << endl;
		break;
		

//end of singly/doubly switch
	}
	

	} while (n != 4);
	system("pause");
	return 0;
}
	 
	 



