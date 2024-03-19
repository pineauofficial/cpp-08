/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:36:19 by pineau            #+#    #+#             */
/*   Updated: 2024/03/19 17:09:59 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _n(n){
}

Span::~Span() {	
}

Span::Span(Span const& span) : _n(span._n), _vector(span._vector) {
}

Span& Span::operator=(Span const& span) {
    if (this != &span) {
        _n = span._n;
        _vector = span._vector;
    }
    return *this;
}

void Span::addNumber(int n) {
	if (_vector.size() < _n)
		_vector.push_back(n);
	else
		throw Span::SpanException();
}

int Span::shortestSpan() {
	if (_vector.size() < 2)
		throw Span::SpanEmptyException();
	int shortest = std::abs(_vector[0] - _vector[1]);
	for (unsigned long i = 0; i < _vector.size(); i++)
		for (unsigned long j = i + 1; j < _vector.size(); j++) {
			int distance = std::abs(_vector[i] - _vector[j]);
			shortest = std::min(shortest, distance);
		}
	return shortest;
}

int Span::longestSpan() {
	if (_vector.size() < 2)
		throw Span::SpanEmptyException();
	int longest = 0;
	for (unsigned long i = 0; i < _vector.size(); i++)
		for (unsigned long j = i + 1; j < _vector.size(); j++) {
			int distance = std::abs(_vector[i] - _vector[j]);
			longest = std::max(longest, distance);
		}
	return longest;
}

void	Span::addRange(std::vector<int> v)
{
	if (_vector.size() + v.size() > _n)
		throw Span::TooManyNumbersException();
	_vector.insert(_vector.end(), v.begin(), v.end());
}
