#include "Caption.hpp"

void Caption::draw(sf::RenderWindow& window, const sf::Font& font) {
  // set properties
  mText.setCharacterSize(mTextSize);
  mText.setColor(mTextColor);
  mText.setString(mTextContent);
  mText.setFont(font);

  // draw text
  mText.setOrigin(mText.getGlobalBounds().getSize() / 2.f + mText.getLocalBounds().getPosition());
  mText.setPosition(mPosition);
  window.draw(mText);
}