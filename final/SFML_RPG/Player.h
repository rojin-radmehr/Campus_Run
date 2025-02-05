#ifndef PLAYER_H
#define PLAYER_H

#include "Entity.h"

class Entity;

class Player :
	public Entity
{
private:

	sf::Clock damageTimer;
	sf::Int32 damageTimerMax;

	//Initializer functions
	void initVariables();
	void initComponents();
	void initAnimations();

public:
	Player(float x, float y, sf::Texture& texture_sheet);
	virtual ~Player();
	

	//Modifier
	const std::string toStringCharacterTab() const;

	//Functions

	void updateAnimation(const float& dt);
	void update(const float& dt, sf::Vector2f& mouse_pos_view, const sf::View& view);

	void render(sf::RenderTarget& target, sf::Shader* shader = NULL, const sf::Vector2f light_position = sf::Vector2f(), const bool show_hitbox = false);
};

#endif