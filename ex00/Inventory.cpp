#include "Inventory.hpp"

void	Inventory::add(const std::string& item)
{
	m_items.push_back(item);
}

bool	Inventory::has(const std::string& item) const
{
	for (const auto& i : m_items)
	{
		if (i == item)
			return false;
	}
	return true;
}

int	Inventory::count() const { return m_items.size(); }
