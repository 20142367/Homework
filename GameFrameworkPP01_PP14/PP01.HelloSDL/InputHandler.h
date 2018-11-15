#pragma once
#include <SDL.h>
#include <vector>
#include "Vector2D.h"


class InputHandler
{
public:
	const Uint8* m_keystates;

	static InputHandler* Instance();

	void update();
	void clean();	// 디바이스 관련 초기화된 부분을 clear

	// keyboard spcific
	bool isKeyDown(SDL_Scancode key);

	// ====================
	// mouse spcific 

	enum mouse_buttons
	{
		LEFT = 0,
		MIDDLE = 1,
		RIGHT = 2
	};

	// mouse buttion events								
	std::vector<bool> m_mouseButtonStates;

	// mouse motion event					
	Vector2D* m_mousePosition;

	bool getMouseButtonState(int buttonNumber);

	Vector2D*  getMousePosition();

	void onMouseMove(SDL_Event event);
	void onMouseButtonDown(SDL_Event event);
	void onMouseButtonUp(SDL_Event event);
	void onKeyDown();
	void onKeyUp();

private:
	InputHandler();

	static InputHandler* s_pInstance;
};
typedef InputHandler TheInputHandler;