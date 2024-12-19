# SonicSpriterZ
 DBFZ Inspired Fighting Game with Sprite of GameBoy Advance Sonic Characters

Basic Routine of Development
Sonic Sprite Fighter (PC first then Port to Vita via VitaSDK)
Vertical Slice:
	1) Gather Libraries and Set up MSVS Project:
	 	a) SFML: Simple and Fast Multimedia Libary handles graphics, input, and audio
		b) SDL2: Simple DirectMedia Layer - handles creation, rendering, and input

	2) Visuals and Gameplay
		a) read input from the user (Keyboard initial priority, then FightStick, then gamepad...)
		b) show effect of input in game (moving image within window etc.)
		
	2) Use Box2D for hitboxes and hurtboxes
		a) hitboxes must match dimensions of character sprites (sketch on iPad)
		b) low hitboxes will need to be made
		c)
	
	3) Sprite Management - manage with libraries like STB Image or SFML built-in's
		a) went with SFML -> Statically Linked so must add Licence for library software
	
	4) State Management for movement - Use Finite State Machines for movement, attacks, hit-detection and specials and supers???

Environment:
-Tools: SFML/SDL2 (Libraries, Compiler, IDE)
-Project and Link to graphics library
-get a window and go...

Input Architecture System
Movement (8-way):
- Up (8), Down (2), Left (4), Right (6)
- Diagonals: UF (9), UB (7), DF (3), DB (1)
- Neutral (5)

Button Layout:
- Light Attack (L)
- Medium Attack (M)
- Heavy Attack (H)
- Special (S)
- Assist/Tag 1 (A1)
- Assist/Tag 2 (A2)

FSM Implementation
Base States:
- Idle
- Walking/Running
- Crouching
- Jumping
- Attack Active
- Hit/Block Stun
- Recovery

Special States:
- Tag Animation
- Super Animation
- Special Move
- Dash

Combat System
Phase 1:
- Basic movement and attacks
- Hit/hurt boxes
- Basic combos
- Block system

Phase 2:
- Cancel system
- Special moves
- Tag mechanics
- Basic frame data implementation

Phase 3:
- Advanced mechanics (air dashing, etc.)
- Super moves
- Counter system
- Advanced cancel options

Local MP Setup
- Input buffer system
- Frame advantage tracking
- Hit confirmation system
- Screen boundary management
- Camera control for 2-player view

(Future Online Implement System)
- Implement deterministic game state
- Frame-by-frame state saving
- Input recording/playback system
- Prepare for rollback integration

-------Credits---------
Sprites:
-Sega

Lead Programmer(s)
-Myself (Chayce Leonard)

Special Thanks:
Akira Toriyama
Lythero
ZzyX_
IHeartJustace
MaxamillianDood
BlackDevilX (Creator of Final Fantasy Sonic X Flash Series and Aeon the Hedgehog)
DashieXP
CoryXKenshin
Markiplier
Sonic Team
Capcom
Marvel
Newgrounds.com

