#include<climits>

#include<iostream>
	using namespace std;
class StackUsingArray{
int *data;
int nextindex;
int capacity;
public:
	
StackUsingArray(){
data=new int[4];
nextindex=0;
capacity=4;	
	
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
	int *newdata=new int[2*capacity];
	for(int i=0;i<capacity;i++)
	newdata[i]=data[i];	
		
//		cout<<"Stack full"<<endl;
//		return;
capacity=capacity*2;
	delete [] data;
	data=newdata;
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
