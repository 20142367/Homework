#pragma once
#include <SDL.h>
#include <SDL_image.h>

class Game
{
public:
	Game();
	~Game();
	
	bool init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
	void render();
	void update();
	void handleEvents();
	void clean();
	bool running() { return m_bRunning; }

private:
	SDL_Window * m_pWindow;
	SDL_Renderer* m_pRenderer;

	SDL_Texture* m_pTexture;			// the new SDL_Texture variable
	SDL_Rect m_sourceRectangle;			// ���� Rectangle
	SDL_Rect m_destinationRectangle;	// ��� Rectangle

	bool m_bRunning;
};

