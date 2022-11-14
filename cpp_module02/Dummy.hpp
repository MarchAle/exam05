/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:14:03 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 11:27:54 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class Dummy : public ATarget
{
	public :
		Dummy();
		~Dummy();
		Dummy *clone() const;
};


#endif
