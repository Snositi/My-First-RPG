#include "Player.h"
float Player::takeDamage(float damage)
{
    float totalDamage = damage - m_shield.getStatusBoost();

    return takeDamage(damage);
}

float Player::attack(Character* other)
{
    return other->takeDamage(getDamage());
}

float Player::getDamage()
{
    return Character::getDamage() + m_weapon.getStatusBoost();
}

float Player::getDefense()
{
    return Character::getDefense() + m_shield.getStatusBoost();
}

float Player::getHealth()
{
    return Character::getHealth();
}

const char* Player::getName()
{
    return Character::getName();
}