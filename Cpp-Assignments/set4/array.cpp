#include <iostream>
#include"array.h"
#include <algorithm>
using namespace std;



  template<typename T>
  MyArray<T>::MyArray():m_arr{NULL},m_len{0}{}

  template<typename T>
  MyArray<T>::MyArray(int len):m_arr{new int[len]},m_len{len}{}

  template<typename T>
  MyArray<T>::~MyArray(){delete []m_arr;}

  template<typename T>
  void MyArray<T>::append(T val)
  {
    static int i=0;
    m_arr[i]=val;
    i++;
  }

  template<typename T>
  T MyArray<T>::at(int index)
  {

    return m_arr[index];
  }

  template<typename T>
  bool MyArray<T>::search(T key) const
  {
      for(int i=0;i<m_len;i++)
      {
          if(m_arr[i]==key)
          {
              cout<<key<<" Found and is in "<<i<<"th position\n";
              return 1;
          }
      }
      cout<<"Not Found\n";
      return 0;
  }

  template<typename T>
  T MyArray<T>::sum() const
  {
      T s=0;
      for(int i=0;i<m_len;i++)
      {
          s+=m_arr[i];
      }
      return s;
  }

  template<typename T>
  T MyArray<T>::min() const
  {
      T min=m_arr[0];
      for(int i=1;i<m_len;i++)
      {
          if(m_arr[i]<min)
          {
              min=m_arr[i];
          }
      }

      return min;

  }

  template<typename T>
  T MyArray<T>::max() const
  {
      T max=0;
      for(int i=0;i<m_len;i++)
      {
          if(m_arr[i]>max)
          {
              max=m_arr[i];
          }
      }

      return max;
  }

  template<typename T>
  void MyArray<T>::reverse()
  {
      for (int low = 0, high = m_len - 1; low < high; low++, high--)
      {
      swap(m_arr[low],m_arr[high]);
      }
      for (int i = 0; i < m_len; i++)
      {
      cout << m_arr[i] << " ";
      }
      cout<<endl;

  }

  template<typename T>
  void MyArray<T>::sort()
  {
      int i, j, minimum, temp;
      for (i = 0; i < m_len - 1; i++) {
      minimum = i;
      for (j = i + 1; j < m_len; j++)
      if (m_arr[j] < m_arr[minimum])
      minimum = j;
      temp = m_arr[i];
      m_arr[i] = m_arr[minimum];
      m_arr[minimum] = temp;
      }
      for(i=0;i<m_len;i++)
      {
          cout<<m_arr[i]<<" ";
      }
      cout<<endl;
  }
