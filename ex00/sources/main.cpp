/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:05:52 by pineau            #+#    #+#             */
/*   Updated: 2024/03/19 14:32:07 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	easyfind(v, 2);
	std::cout << std::endl;
	easyfind(v, 4);
	std::cout << std::endl;
	
	std::list<int> l;
	l.push_back(1);
	l.push_front(2);
	l.push_back(3);

	easyfind(l, 2);
	std::cout << std::endl;
	easyfind(l, 4);
    
	return 0;
}
