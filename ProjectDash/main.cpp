#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include<iostream>


int main() {
    //defines a window in video mode:
    sf::RenderWindow window(sf::VideoMode(750, 860), "Testing Window for Project Dash!", sf::Style::Default);

    //sf::View view(sf::FloatRect(0.f, 0.f, 640.f, 480.f));
    //window.setView(view);

    // change the position of the window (relatively to the desktop)
    window.setPosition(sf::Vector2i(10, 50));

    // change the size of the window
    window.setSize(sf::Vector2u(640, 480));

    // get the size of the window
    sf::Vector2u size = window.getSize();
    unsigned int width = size.x;
    unsigned int height = size.y;

    // check whether the window has the focus
    bool focus = window.hasFocus();

    //load image->for now just shadow sprites
    sf::Texture texture1;
    if (!texture1.loadFromFile("assets/CharacterSpriteSheets/shadow-2.gif")) {
        return EXIT_FAILURE;
    }
    sf::Sprite sprite(texture1);

    while (window.isOpen()) {
        sf::Event event;
        int eventCount = 0;
        //std::string eventType = event.type;

        while (window.pollEvent(event))
        {
            // window closed
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            else if (event.type == sf::Event::TextEntered) {
                if (event.text.unicode < 128) {
                    std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << std::endl;
                }
            }
            else if (event.type == sf::Event::MouseButtonPressed) {
                if (event.mouseButton.button == sf::Mouse::Left) {
                    std::cout << "Left mouse button pressed." << std::endl;
                }
                else if (event.mouseButton.button == sf::Mouse::Right) {
                    std::cout << "Right mouse button pressed." << std::endl;
                }
            }

            // event counter
            if (event.Count == sf::Event::Count) {
                eventCount += 1;
                std::cout << "event count: " << eventCount << std::endl;
                //std::cout << "event type:  " << event.type << std::endl;
            }

            if (event.type == sf::Event::GainedFocus) {
                window.getDefaultView();
            }

            if (event.type == sf::Event::LostFocus) {
                std::cout << "Lost Window Focus" << std::endl;
            }

            if (event.type == sf::Event::GainedFocus) {
                std::cout << "Gained Window Focus" << std::endl;
            }
            window.clear();
            window.draw(sprite);
            window.display();
        }

        return 0;
    }
}