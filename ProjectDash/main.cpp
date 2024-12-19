#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include<iostream>


int main()
{
    //defines a window in video mode:
    sf::RenderWindow window(sf::VideoMode(750, 860), "Testing Window for Project Dash!", sf::Style::Default);

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

    while (window.isOpen())
    {
        int eventCount = 0;
        //Process Events (via switch)
        sf::Event event;
        switch (window.pollEvent(event))
        {
            // window closed
            case sf::Event::Closed:
                window.close();
                break;

            // event counter
            case sf::Event::Count:
                eventCount += 1;
                std::cout << "event count: " << eventCount << std::endl;
                break;

            case sf::Event::EventType(sf::Event::GainedFocus):
                window.getDefaultView();
                break;
                
                /*
                if (event.type == sf::Event::LostFocus)
                    myGame.pause();

                if (event.type == sf::Event::GainedFocus)
                    myGame.resume();
                */
            case sf::Event::TextEntered:
                if (event.text.unicode < 128){
                    std::cout << "ASCII character typed: " << static_cast<char>(event.text.unicode) << std::endl;
                }
                break;

            case sf::Event::MouseButtonPressed:
                std::cout << "mouse input recieved" << std::endl;


            // we don't process other types of events
            default:
                break;







        }
        window.clear();
        window.draw(sprite);
        window.display();
    }
    return 0;
}