#pragma once

namespace BackEnd {
	class Engine {
	public:

		virtual void Init();
		virtual void Update();
		virtual void Shutdown();

		void Run();

		Engine();
		virtual ~Engine();

	private:

	};
}