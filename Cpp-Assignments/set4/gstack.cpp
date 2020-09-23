#include"gstack.h"
#include<iostream>
using namespace std;
template <class T>
MyStack<T>::MyStack()
{
	m_arr[max_size];
	m_maxlen = 0;
	m_top = -1;
}
template <class T>
MyStack<T>::MyStack(int s)
{
	m_arr[s];
	m_maxlen = s;
	m_top = -1;
}
template <class T>
void MyStack<T>::push(T x)
{
	if (isFull())
	{
		cout << "Empty";
		exit(EXIT_FAILURE);
	}
	cout << "Inserting " << x << endl;
	m_arr[++m_top] = x;
}
template <class T>
T MyStack<T>::pop()
{
	if (isEmpty())
	{
		cout << "Empty";
		exit(EXIT_FAILURE);
	}
	cout << "Removing " << peek() << endl;
	return m_arr[m_top--];
}
template <class T>
T MyStack<T>::peek()
{
	if (!isEmpty())
		return m_arr[m_top];
	else
		exit(EXIT_FAILURE);
}
template <class T>
bool MyStack<T>::isEmpty()
{
	return m_top == -1;
}
template <class T>
bool MyStack<T>::isFull()
{
	return m_top == m_maxlen - 1;
}
