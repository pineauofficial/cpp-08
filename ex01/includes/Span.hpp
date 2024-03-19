/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:35:44 by pineau            #+#    #+#             */
/*   Updated: 2024/03/19 17:10:20 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span(unsigned int n);
		Span(Span const& span);
		~Span();
		Span& operator=(Span const& span);

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void addRange(std::vector<int> v);

		class SpanException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Error: span is full";
				}
		};
		
		class SpanEmptyException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Error: span is empty";
				}
		};

		class TooManyNumbersException : public std::exception
		{
			public:
				virtual const char* what() const throw()
				{
					return "Error: too many numbers";
				}
		};
		
	private:
		unsigned int _n;
		std::vector<int> _vector;	
};

#endif