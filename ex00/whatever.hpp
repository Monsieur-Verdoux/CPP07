/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akovalev <akovalev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:25:08 by akovalev          #+#    #+#             */
/*   Updated: 2025/03/12 17:44:05 by akovalev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

template <typename T> //declares a template type T which means that the function can accept any type of data

void swap(T &x, T &y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
};

template <typename T>

T min(T x, T y)
{
	return (x < y ? x : y);
};

template <typename T>

T max(T x, T y)
{
	return (x > y ? x : y);
};