#include "Inventory.hpp"

void	Inventory::add(const std::string& item)
{
	m_items.push_back(item);
}

void	Inventory::remove(const std::string& item)
{
	(void) item;
}

bool	Inventory::has(const std::string& item) const
{
	for (const auto& i : m_items)
	{
		if (i == item)
			return true;
	}
	return false;
}

int	Inventory::count() const { return m_items.size(); }
