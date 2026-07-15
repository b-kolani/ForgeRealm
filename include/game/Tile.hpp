#pragma once

enum class	TileType
{
	Air,
	Dirt,
	Stone,
	grass
};

class	Tile
{
	public:
		explicit	Tile(TileType type = TileType::Air);
		TileType	getType() const;
		void		setType(TileType type);
		bool		isSolid() const;
	
	private:
		TileType	m_type;
};