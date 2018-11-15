#pragma once
#include <SDL.h>


class InputHandler
{
public:
	const Uint8* m_keystates;

	static InputHandler* Instance();

	void update();
	void clean();	// ����̽� ���� �ʱ�ȭ�� �κ��� clear

	// keyboard spcific
	bool isKeyDown(SDL_Scancode key);

private:
	InputHandler();

	static InputHandler* s_pInstance;
};
typedef InputHandler TheInputHandler;