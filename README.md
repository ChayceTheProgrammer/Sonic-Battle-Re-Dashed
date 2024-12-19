# SonicSpriterZ
 DBFZ Inspired Fighting Game with Sprite of GameBoy Advance Sonic Characters

Basic Routine of Development
Sonic Sprite Fighter (PC first then Port to Vita)
Vertical Slice:
	1) Gather Libraries - SFML (Simple and Fast Multimedia Libary) handles graphics, input, and audio
								(SDL2 - Simple DirectMedia Layer - handles creation, rendering, and input)
		a) read input from the user (Keyboard initial priority, then FightStick, then gamepad...)
		b) show effect of input in game (moving image within window etc.)
		c)
	2) Use Box2D for hitboxes
	
	3) Sprite Management - manage with libraries like STB Image or SFML built-in's
	
	4) State Management for movement - Use Finite State Machines for movement, attacks, hit-detection and specials and supers???

Environment:
-Tools: SFML/SDL2 (Libraries, Compiler, IDE)
-Project and Link to graphics library
-get a window and go...
