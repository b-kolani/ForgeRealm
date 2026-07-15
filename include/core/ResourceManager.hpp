#pragma once

#include <iostream>
#include <unordered_map>
#include <SFML/Graphics.hpp>

class	ResourceManager
{
	public:
					ResourceManager() = default;
		bool		load_texture(const std::string &id,
						const sf::Texture &texture);
		sf::Texture	getTexture(const std::string &id) const;

	private:
		std::unordered_map<std::string, sf::Texture>	m_textures;
};