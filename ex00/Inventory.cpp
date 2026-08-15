#include "Inventory.hpp"

void	Inventory::add(const std::string& item)
{
	m_items.push_back(item);
}

void	Inventory::remove(const std::string& item)
{
	for (auto it = m_items.begin(); it != m_items.end(); ++it)
	{
		if (*it == item)
		{
			m_items.erase(it);
			return;
		}
	}
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
