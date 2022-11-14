/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarchal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:45:37 by amarchal          #+#    #+#             */
/*   Updated: 2022/11/14 11:53:18 by amarchal         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "Warlock.hpp"
# include "ASpell.hpp"

class ASpell;

class ATarget
{
	protected :
		std::string type;
		
	public :
		ATarget();
		ATarget(std::string typeStr);
		virtual ~ATarget();
		ATarget(ATarget const &src);
		ATarget &operator=(ATarget const &src);

		std::string getType() const;

		virtual ATarget *clone() const = 0;

		void	getHitBySpell(ASpell const &spell) const;
};

#endif
