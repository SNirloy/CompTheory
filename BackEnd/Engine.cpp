#include "Engine.h"

namespace BackEnd {
	Engine::Engine() {

	}

	void Engine::Init() {

	}

	void Engine::Update() {

	}

	void Engine::Shutdown() {

	}

	void Engine::Run() {
		Init();

		while (true) {
			Update();
		}

		Shutdown();
	}

	Engine::~Engine() {

	}
}