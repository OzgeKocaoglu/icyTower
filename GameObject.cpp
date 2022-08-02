#include "GameObject.h"
#include "TextureManager.h"

GameObject::GameObject(const char* textureSheet, SDL_Renderer* ren, int x, int y)
{
	renderer = ren;
	objectTexture = TextureManager::LoadTexture(textureSheet, renderer);
	xpos = x;
	ypos = y;
}

void GameObject::Update()
{
	xpos++;
	ypos++;

	sourceRect.h = 64;
	sourceRect.w = 64;
	sourceRect.x = 0;
	sourceRect.y = 0;

	destinationRect.x = xpos;
	destinationRect.y = ypos;

	destinationRect.w = sourceRect.w * 2;
	destinationRect.h = sourceRect.h * 2;
}

void GameObject::Render()
{
	SDL_RenderCopy(renderer, objectTexture, &sourceRect, &destinationRect);
}

