/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 22:27:08 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/06 22:27:09 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Weapon {
private:
	std::string _type;
public:
	Weapon(void);
	Weapon(std::string type);
	Weapon(Weapon const& src);
	Weapon&	operator=(Weapon const& rhs);
	void	setType(std::string type);
	std::string const&	getType(void) const;
	~Weapon(void);
};