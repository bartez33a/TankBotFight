#include "Caption.hpp"

void Caption::draw(sf::RenderWindow& window, const sf::Font& font) {
  // set properties
  mText.setCharacterSize(mTextSize);
  mText.setColor(mColor);
  mText.setString(mTextContent);
  mText.setFont(font);

  // draw text
  window.draw(mText);
}