/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:49:59 by akovalev          #+#    #+#             */
/*   Updated: 2025/03/12 19:12:58 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T, typename F>

void iter(T *arr, size_t len, F fn)
{
	for (size_t i = 0; i < len; i++)
		fn(arr[i]);
};

template <typename T>

void print(const T &x)
{
	std::cout << x << std::endl;
};