#include<iostream>
using namespace std;
class stack{
	public:
		int *ar;
		int top;
		int size;
		stack(int size){
			this->size=size;
			ar=new int[size];
			top=-1;
		}

void push(int elm){
	if(size-top>1){
		top++;
		ar[top]=elm;
	}
	else{
		cout<<"stack overflow"<<endl;
	}
}
void pop(){
	if(top>=0){
		top--;
	}
	else{
		cout<<"stack underflow"<<endl;
	}
}
int peek(){
	if(top>=0){
		return ar[top];
	}
	else{
		cout<<"stack is empty"<<endl;
		return -1;
	}
}
bool isempty(){
	if(top==-1){
		cout<<"stack is empty"<<endl;
	}
	else{
		cout<<"stack is not empty";
		
	}
}
};
int main(){ 
    stack st(5);
    st.push(34);
    st.push(68);
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    st.pop();
    cout<<st.peek()<<endl;
    if(st.isempty()){
    	cout<<"stack is empty"<<endl;
	}
	else{
		cout<<"stack is overflow";
	}
	return 0;
}