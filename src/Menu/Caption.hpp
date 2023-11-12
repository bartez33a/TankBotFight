#pragma once

#include <SFML/Graphics.hpp>
#include <string>

#include "MenuItem.hpp"

class Caption : MenuItem {
 public:
  Caption(sf::Vector2f position, std::string text, unsigned int size, sf::Color color)
      : MenuItem(position), mTextContent{text}, mTextSize{size}, mColor{color} {}

  void draw(sf::RenderWindow& window, const sf::Font& font);

 private:
  std::string mTextContent;
  sf::Color mColor;
  unsigned int mTextSize;
  sf::Text mText;
};