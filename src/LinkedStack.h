/*
 * LinkedStack.h
 *
 *  Created on: Oct 30, 2017
 *      Author: Sean
 */

#ifndef LINKEDSTACK_H_
#define LINKEDSTACK_H_

	//***PART I********************************************

template <class T>
struct Node{//not same type as top, guess the assignment is impossible~
    T data;
    Node<T>* next;//changed capitalization to make it actually work
};

template <class T>
class LinkedStack{
      Node<T> *top;
   public:
      LinkedStack();
      bool isEmpty();
      int getCount();
      Node<T> getTop();
      Node<T> pop();
      void push(const T& datum);
      void destroy();
      ~LinkedStack();
};

template <typename T>//constructor
LinkedStack<T>::LinkedStack(){
	top = NULL;
}

template <typename T>//constructor
bool LinkedStack<T>::isEmpty(){
	return top == NULL;
}

template <typename T>//returns number of entries in stack
int LinkedStack<T>::getCount(){
	int count = 0;
	Node<T> *temp = top;
	while (!isEmpty()){
		temp = temp->next;
		count++;//count after leaving node
	}
	return count;
}

template <typename T>//return top node
Node<T> LinkedStack<T>::getTop(){
	return top;
}

template <typename T>//destroy and return top node
Node<T> LinkedStack<T>::pop(){
	Node<T> *del = top;//to delete
	Node<T> temp = *top;//to return
	if (!isEmpty()){
		top = top->next;
		delete del;//actually delete nodes when lost
	}
	return temp;
}

template <typename T>//add onto the stack
void LinkedStack<T>::push(const T& datum){
	Node<T> *newNode = new Node<T>();
	newNode->data = datum;
	newNode->next = top;
	top = newNode;
}

template <typename T>//empty list
void LinkedStack<T>::destroy(){
	while (!isEmpty()){//top != NULL){
		pop();
	}
}

template <typename T>//destructor
LinkedStack<T>::~LinkedStack(){
	destroy();
}

#endif /* LINKEDSTACK_H_ */
