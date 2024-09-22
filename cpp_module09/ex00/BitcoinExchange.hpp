/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melkholy <melkholy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/22 17:47:24 by melkholy          #+#    #+#             */
/*   Updated: 2024/09/22 19:49:47 by melkholy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BTC_EXCHANGE_H
# define BTC_EXCHANGE_H

# include <iostream>
# include <fstream>
# include <map>
# include <string>

enum inputChecker
{
	TOO_LARGE = -3,
	NOT_POSITVE,
	BAD_INPUT,
	VALID_INPUT = 1
};

class BitcoinExchange
{
public:
	BitcoinExchange(void);
	~BitcoinExchange();
	void	display_values( const std::string & db_path, const std::string & infile,\
							bool mode = false );

private:
	static std::map<std::string, double>	db_btc;
	static bool 							db_status;

	double			get_value(const std::string& data) const;
	void			init_databse(const std::string& db_path, bool mode) const;
	void			display_exchange(const std::string& infile) const;
	int				is_valid_input( const std::string& input_line, std::string& input_date,\
									double* input_nb_btc ) const;
	bool			is_valid_year(const std::string& year) const;
	bool			is_valid_month(const std::string& month) const;
	bool			is_valid_day(const std::string& month, const std::string& day) const;
	int				is_valid_input_nb_btc(double input_nb_btc) const;
};

#endif
