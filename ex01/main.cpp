/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:49:36 by akovalev          #+#    #+#             */
/*   Updated: 2025/03/12 19:16:17 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
	int arr[] = {1, 3, 5, 7, 11, 13, 17};
	
	std::cout << "Printing elements of the integer array:" << std::endl;
	iter(arr, 7, print<int>);
	
	std::string arr2[] = {"Old", "McDonald", "had", "a", "farm"};
	std::cout << "Printing elements of the string array:" << std::endl;
	iter(arr2, 5, print<std::string>);

	return (0);
}