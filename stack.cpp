#include<iostream>
#include<string>
using namespace std;
class stack{
	private:
		int top;
		int arr[5];
	public:
		stack(){
			top=-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
		}
		bool isFull(){
				if(top==4){
					return true;
				}
				else{
					return false;
				}
			}
		bool isEmpty(){
			   if(top==-1){
					return true;
				}
				else{
					return false;
				}
			}
			void push(int val){
				if(isFull()){
					cout<<"stack overflow";
				}
				else{
					top++;
					arr[top]=val;
				}
			}
			
			int pop(){
				if(isEmpty()){
					cout<<"stack underflow";
				}
				else{
					int popvalue=arr[top];
					arr[top]=0;
					top--;
					return popvalue;
				}
			}
			int count(){
				return (top+1);
			}
			int peek(int pos){
					if(isEmpty()){
					cout<<"stack underflow";
				}
				else{
					return arr[pos];
			}
		}
		int change(int pos,int val){
			arr[pos]=val;
			cout<<"value changed at location"<<pos<<endl;
		}
		void display(){
			for(int i=4;i>=0;i--){
				cout<<arr[i]<<endl;
			}
		}
	};
	
	
	int main(){
		stack s1;
		int option,position,value;
			
				cout<<"1.push()"<<endl;
				cout<<"2.pop()"<<endl;
				cout<<"3.isempty()"<<endl;
				cout<<"4.isfull()"<<endl;
				cout<<"5.peek()"<<endl;
				cout<<"6.count()"<<endl;
				cout<<"7.change()"<<endl;
				cout<<"8.display()"<<endl;
				cout<<"9.clear screen"<<endl;
	
		do{
		cout<<"enter a num from 1 to 9,0 for exit"<<endl;
				cin>>option;
				switch(option)
				{
					case 0:
						break;
					case 1:
						cout<<"enter an item to push in stack"<<endl;
						cin>>value;
						s1.push(value);
						break;
					case 2:
						cout<<"pop called"<<s1.pop()<<endl;
						break;
					case 3:
						if(s1.isEmpty()){
						cout<<"stack is empty"<<endl;
					}
					else{
						cout<<"not empty"<<endl;
					}
						break;
					case 4:
							if(s1.isFull()){
						cout<<"stack is full"<<endl;
					}
					else{
						cout<<"not full"<<endl;
					}
						break;
					case 5:
						cout<<"enter position u want to peek"<<endl;
						cin>>position;
						cout<<"the value present is"<<s1.peek(position)<<endl;
						break;
					case 6:
						cout<<"count function called"<<s1.count()<<endl;
					break;
					case 7:
						cout<<"enter position u want to change"<<endl;
						cin>>position;
						cout<<"enter value u want to change"<<endl;
						cin>>value;
						s1.change(position,value);
						break;
					case 8:
						cout<<"display function called"<<endl;
						s1.display();
					break;
					case 9:
					system("cls");
					break;
					default:
						cout<<"enter proper number"<<endl;
				
						
				}
				
        
			
		}while(option!=0);
		return 0;
	}

