/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:47:02 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/28 19:16:07 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#ifndef BRAIN_CLASS
#define BRAIN_CLASS

class Brain
{
public:
	Brain(void);
	Brain(const Brain &src);
	Brain &operator=(const Brain &rhs);
	const std::string*	getIdeas(void) const;
	void				setIdeas(const std::string* newIdeas);
	~Brain(void);

protected:
	std::string	_ideas[100];
};

#endif
