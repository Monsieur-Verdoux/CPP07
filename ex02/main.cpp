/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 17:09:00 by akovalev          #+#    #+#             */
/*   Updated: 2025/03/19 17:25:06 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{ 
	Array<int> a(7);
	Array<int> c;

	std::cout << "size of c: " << c.size() << std::endl;

	for (unsigned int i = 0; i < a.size(); i++)
		a[i] = i;
	
	std::cout << "printing a" << std::endl;

	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";
	std::cout << std::endl;
	
	Array<int> b(a);
	std::cout << "printing b" << std::endl;

	for (unsigned int i = 0; i < b.size(); i++)
		std::cout << b[i] << " ";

	std::cout << std::endl;
	
	c = a;

	std::cout << "printing c" << std::endl;

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";

	std::cout << std::endl;
	
	for (unsigned int i = 0; i < c.size(); i++)
		c[i] = 999;

	std:: cout << "printing c after changing elements to 999" << std::endl;

	for (unsigned int i = 0; i < c.size(); i++)
		std::cout << c[i] << " ";

	std::cout << std::endl;

	std::cout << "printing a after changing elements of c to see if a is affected" << std::endl;
	
	for (unsigned int i = 0; i < a.size(); i++)
		std::cout << a[i] << " ";

	std::cout << std::endl;

	std::cout << "checking sizes of a, b and c" << std::endl;
	std::cout << a.size() << std::endl;
	std::cout << b.size() << std::endl;
	std::cout << c.size() << std::endl;

	std::cout << "trying to access an element out of bounds" << std::endl;
	try
	{
		std::cout << a[7] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return (0);
	
}