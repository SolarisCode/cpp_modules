/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:31:08 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/16 13:27:44 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Zombie
{
private:
	std::string _name;
public:
	Zombie(void);
	Zombie(std::string name);
	Zombie(Zombie const& src);
	Zombie& operator=(Zombie const& rhs);
	void	setName(std::string name);
	void announce( void );
	~Zombie(void);
};
