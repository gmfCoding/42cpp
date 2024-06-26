/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clovell <clovell@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 22:58:54 by clovell           #+#    #+#             */
/*   Updated: 2024/03/25 20:09:35 by clovell          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"
class Cat : public AAnimal
{
public:
	Brain* brain;
public:
	Cat();
	Cat(const Cat &copy);
	Cat& operator=(const Cat& rhs);
	~Cat() ;

	bool isDeepCopy(const Cat* other) const;
	void makeSound() const;
};

#endif