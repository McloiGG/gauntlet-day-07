#pragma once
#ifndef INVENTORY_HPP
# define INVENTORY_HPP

#include <string>

class Inventory
{
public:
	void	add(const std::string& item);
	void	remove(const std::string& item);
	bool	has(const std::string& item) const;
	int		count() const;
};

#endif
