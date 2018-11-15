#pragma once
#include <map>
#include <SDL_image.h>

class TextureManager
{
public:
	TextureManager();
	~TextureManager();

	std::map <std::string, SDL_Texture*> m_textureMap;

	bool load(std::string fileName, std::string id, SDL_Renderer* pRenderer);

	void draw(std::string id, int x, int y, int width, int height, SDL_Renderer* pRenderer, SDL_RendererFlip flip = SDL_FLIP_NONE);

	void drawFrame(std::string id, int x, int y, int width, int height, int currentRow, int currentFrame, SDL_Renderer* pRenderer, SDL_RendererFlip flip = SDL_FLIP_NONE);
};

