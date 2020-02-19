//=================================================================
// File: container.h
//
// Purpose:
//   This module handles a template container 
//   -It stores each T object into a vector of pairs
//   -The first member of pair indicates the position into the vector
//   -the second member of pair gives the T object itself
//
// Applicable documents
//   <at least, the SRS ad its SDS should be quoted here
//
// Reference documents
//   <Include here the documentation external to the project> 
//   containing helpful information to understand the implementation: algorithms, design patterns, …>
//
// File revision history: 1.0
// Date                 : 26 March 2018
// Author               : François Reygagne
// Copyright            :
//=================================================================
#pragma once 

#ifndef _CONTAINER_H_
#define _CONTAINER_H_

#include<vector>



//
// Class declaration c_Container
//
template <class T> class c_Container
{
private:
	//number of elements in the container
	unsigned int                       m_ElemNumber;

	//Vector of pairs
	//each pair contains on first attribute  the indice 
	//                      second attribute the T object
	std::vector < std::pair<int, T> >  m_Vector; 

public:
	//Constructor using same value repeated N times
	c_Container(T &in_Value, int in_ElemsNumber) : m_ElemNumber(in_ElemsNumber)
	{
	std::pair<int, T> element;

		m_Vector.reserve(m_ElemNumber);
		for (int key(0); key < m_ElemNumber; key++)
		{
			element.first  = key;
			element.second = in_Value;
			m_Vector.push_back(element);
		}	
	}

	//Constructor using an input of array values
	c_Container(T in_Array[], int in_ElemsNumber) : m_ElemNumber(in_ElemsNumber)
	{
	std::pair<int, T> element;

		m_Vector.reserve(m_ElemNumber);

		for (unsigned int key(0); key < m_ElemNumber; key++)
		{
			element.first  = key;
			element.second = in_Array[key];
			m_Vector.push_back(element);
		}		
	}

	//Destructor
	~c_Container() {  };

	// Copy constructor
	c_Container(const c_Container &obj): m_ElemNumber (obj.m_ElemNumber),m_Vector(obj.m_Vector)
	{}

	// user-defined copy assignment, copy-and-swap form
	c_Container& operator=(c_Container other)
	{
		std::swap(m_Vector, other.m_Vector);
		m_ElemNumber = other.m_ElemNumber;
		return *this;
	}

	//Operator index subscripting
	T& c_Container::operator [](unsigned int index)
	{
		if (index < 0 || index > m_ElemNumber)
			return m_Vector[0].second;
		else
			return m_Vector[index].second;
	}

	unsigned int c_Container::get_position(int index)
	{
		return m_Vector[index].first;
	}

	
	//Returns the number of elements in the container
	unsigned int c_Container::size() const
	{
		return m_ElemNumber;
	}

	typename std::vector < std::pair<int, T> >::iterator iterator;
	typename std::vector < std::pair<int, T> >::const_iterator const_iterator;
	typename std::vector < std::pair<int, T> >::iterator begin() { return m_Vector.begin(); }
	typename std::vector < std::pair<int, T> >::iterator end()   { return m_Vector.end(); }

};//end class c_Container


#endif //_c_Container_H_


