#pragma once

#include "Core.h"

namespace NittanyNgine {

	class NN_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be defined in client
	Application* CreateApplication();
}

