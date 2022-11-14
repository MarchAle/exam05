/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:21:11 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 10:39:11 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>

class Warlock
{
	private :
		Warlock();
		Warlock(Warlock const &src);
		Warlock &operator=(Warlock const &src);

		std::string name;
		std::string title;

	public :
		Warlock(std::string nameStr, std::string titleStr);
		~Warlock();

		std::string const	&getName() const;
		std::string const 	&getTitle() const;
		void				setTitle(std::string const &titleStr);
		void				introduce() const;
};

#endif

