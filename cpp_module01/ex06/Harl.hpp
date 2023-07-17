/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 23:11:19 by melkholy          #+#    #+#             */
/*   Updated: 2023/07/18 00:44:33 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

class Harl
{
public:
	Harl( void );
	Harl(const Harl& src);
	Harl&	operator=(const Harl  &rhs);
	void	complain( std::string level );
	~Harl( void );

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );
};
