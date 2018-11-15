#pragma once
#include <SDL.h>


class InputHandler
{
public:
	const Uint8* m_keystates;

	static InputHandler* Instance();

	void update();
	void clean();	// 디바이스 관련 초기화된 부분을 clear

	// keyboard spcific
	bool isKeyDown(SDL_Scancode key);

private:
	InputHandler();

	static InputHandler* s_pInstance;
};
typedef InputHandler TheInputHandler;