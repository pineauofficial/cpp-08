/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pineau <pineau@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 13:06:12 by pineau            #+#    #+#             */
/*   Updated: 2024/03/19 14:29:09 by pineau           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>

template <typename T>
void easyfind(T &container, int value) {
	std::cout << "Contenu du container : ";
	for(typename T::iterator it = container.begin(); it != container.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
	std::cout << "Recherche de la valeur : " << value << std::endl;
	for(typename T::iterator it = container.begin(); it != container.end(); it++) {
		if (*it == value) {
			std::cout << "Value found : " << *it << std::endl;
			return ;
		}
	}
	std::cerr << "Value not found" << std::endl;
	return ;
		
}

#endif