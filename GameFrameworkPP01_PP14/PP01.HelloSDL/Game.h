#pragma once
#include <SDL.h>
#include "TextureManager.h"
#include "GameObject.h"
#include "Player.h"
#include "Enemy.h"
#include <vector>

class Game
{
public:
	bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool running() { return m_bRunning; }

	std::vector<GameObject*> m_gameObjects;

	SDL_Renderer* getRenderer() const { return m_pRenderer; }

	static Game* Instance();

private:
	Game() {}

	SDL_Window * m_pWindow;
	SDL_Renderer* m_pRenderer;

	int m_currentFrame;

	bool m_bRunning;

	// create the s_pInstance member variable
	static Game* s_pInstance;
};
typedef Game TheGame;