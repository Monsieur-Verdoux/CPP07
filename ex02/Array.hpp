/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 16:50:53 by akovalev          #+#    #+#             */
/*   Updated: 2025/03/19 17:06:27 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T *_arr;
		unsigned int _size;
	public:
		Array();		
		~Array();
		Array(unsigned int n);
		Array(const Array &original);

	Array &operator=(const Array &original);
	T &operator[](unsigned int index);
	const T &operator[](unsigned int index) const;
	unsigned int size() const;
};

template <typename T>
Array<T>::Array() : _arr(nullptr), _size(0) 
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Array destructor called" << std::endl;
	if (_arr)
		delete[] _arr;
}

template <typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]()), _size(n) // () ensures that the array is zeroed for types that support it
{
	std::cout << "Array constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array &original) : _arr(new T[original._size]), _size(original._size)
{
	std::cout << "Array copy constructor called" << std::endl;
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = original._arr[i];
}

template <typename T>
Array<T> &Array<T>::operator=(const Array &original)
{
	std::cout << "Array assignation operator called" << std::endl;
	if (this == &original)
		return (*this);
	if (_arr)
		delete[] _arr;
	_arr = new T[original._size];
	_size = original._size;
	for (unsigned int i = 0; i < _size; i++)
		_arr[i] = original._arr[i];
	return (*this);
}

template <typename T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return (_arr[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _size)
		throw std::out_of_range("Index out of range");
	return (_arr[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_size);
}