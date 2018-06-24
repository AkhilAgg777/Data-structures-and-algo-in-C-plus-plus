#include<climits>

#include<iostream>
	using namespace std;
class StackUsingArray{
int *data;
int nextindex;
int capacity;
public:
	
StackUsingArray(int totalsize){
data=new int[totalsize];
nextindex=0;
capacity=totalsize;	
	
}

//return the no. of elements present in my stack
int size(){
	return nextindex;
}

bool isempty(){
	/*
if(nextindex==0)
return true;

else
return false;
*/

return nextindex==0;	
	
}

//insert element

void push(int element){
	
	if(nextindex==capacity){
		cout<<"Stack full"<<endl;
		return;
	}
	data[nextindex]=element;
	nextindex++;
	}	
	
	//delete element
	
	int pop(){
	if(isempty())	{
		cout<<"stack is empty"<<endl;
		return INT_MIN;
	}
		nextindex--;
		return data[nextindex];
	}
	int top(){
		return data[nextindex-1];
	}
	
};
