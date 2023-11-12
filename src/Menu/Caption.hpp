#pragma once

#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

#include "MenuItem.hpp"

class Caption : MenuItem {
 public:
  Caption(std::string text, sf::Vector2f position, unsigned int size, sf::Color color)
      : MenuItem{position}, mTextContent(text), mTextSize{size}, mTextColor{color} {}

  void draw(sf::RenderWindow& window, const sf::Font& font);

 private:
  std::string mTextContent;
  unsigned int mTextSize;
  sf::Color mTextColor;
  sf::Text mText;
};