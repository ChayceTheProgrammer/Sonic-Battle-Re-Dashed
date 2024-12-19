#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "Testing Window for Project Dash!");
    sf::CircleShape shape(100.f);
    sf::Texture texture1;

    //load image->for now just shadow sprites
    if (!texture1.loadFromFile("assets/CharacterSpriteSheets/handmadeShadow.png")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture1);

    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        //Process Events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        //window.draw(shape);

        window.draw(sprite);

        window.display();
    }

    return 0;
}