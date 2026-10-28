#include "Engine.h"
#include <iostream>

class Game : public BackEnd::Engine {
	virtual void Init() override {
		std::cout << "INITIALIZE" << std::endl;
	}

	virtual void Update() override {
		std::cout << "UPDATING" << std::endl;

	}
};

int main() {
	Game game;
	game.Run();
	return 0;
}