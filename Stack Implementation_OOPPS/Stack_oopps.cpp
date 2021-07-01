#include <bits/stdc++.h>
using namespace std;

#define size 100


class Stack
{
private:
	int a[size];
	int top;

public:
	Stack(){
		top = -1 ;

	}

	//lets write all the operations one by one for stack

	void push(int n){
		//need not return anything
		if(top==n-1){
			cout<<"Sorry : Stack is overflown, try popping some elements first !"<<endl;
		}
		a[++top] = n ;
	}

	void pop(){
		if(top == -1){
			cout<<"Sorry : Stack is empty, try pushing some elements first !"<<endl;
		}
		top--;
	}

	int Top(){
		if(top ==-1){
			cout<<"Sorry Stack is empty"<<endl;
			return 0;
		}

		cout<<a[top]<<endl;
		return a[top];
	}

	bool isEmpty(){

		/*(top == -1) ? return true : return false ; 
		return false;*/
		if(top == -1){
			return true;
		}
		return false;
	}

	 //constructor
	
	
};

int main(){
	Stack s;
	s.push(5);
	bool is = s.isEmpty();
	cout<<is<<endl;
	s.push(4);
	s.push(78);
	s.push(98);
	int t = s.Top();
	//cout<<t<<endl;
	s.pop();
	t = s.Top();
	//cout<<t<<endl;




}