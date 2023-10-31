#include "../headers/maze.h"

/**
 * main - entry point
 * @argc: number of arguments passed in the command line
 * @argv: vector of arguments passed in the command line
 *
 * Return: 0 on success, 1 otherwise
*/
int main(int argc, char **argv)
{
	int game_active;
	SDL_Instance instance;

	game_active	= initialize_instance(&instance);

	/* SDL_SetRenderDrawColor(instance->renderer, 0, 0, 0, 0);
	SDL_RenderClear(instance->renderer);

	SDL_RenderPresent(instance->renderer);
	SDL_Delay(10000); */

	while(game_active == 0)
	{
		SDL_SetRenderDrawColor(instance.renderer, 0, 0, 0, 0);
		SDL_RenderClear(instance.renderer);

		SDL_RenderPresent(instance.renderer);

		/* SDL_Delay(100000); */
		game_active = 1;
		
	}
	/*destroy_instance(&instance);*/
	return (0);
}
