#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Text.hpp>

int main() {
    sf::VideoMode desktopMode = sf::VideoMode::getDesktopMode();

    unsigned int screenW = desktopMode.width;
    unsigned int screenH = desktopMode.height;

    sf::RenderWindow window = sf::RenderWindow{ { screenW, screenH }, "CMake/SFML Project" };
    window.setFramerateLimit(60);

    while (window.isOpen()) {
        for (auto event = sf::Event{}; window.pollEvent(event);) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(sf::Color::White);

        sf::Font font;
        font.loadFromFile("src/ubuntu.ttf");

        sf::Text text = sf::Text("Hello, world!", font);
        text.setCharacterSize(30);
        text.setStyle(sf::Text::Bold);
        text.setFillColor(sf::Color::Black);
        sf::FloatRect res = text.getLocalBounds();
        float posX = (screenW / 2) - (res.width / 2);
        float posY = (screenH / 2) - (res.height / 2);

        text.setPosition(sf::Vector2f(posX, posY));

        window.draw(text);
        window.display();
    }
    return 0;
}
