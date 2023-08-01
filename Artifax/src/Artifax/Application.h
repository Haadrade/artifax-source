#pragma once

#include "Core.h"

namespace Artifax
{
	class ARTIFAX_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	//To be define in client
	Application* CreateApplication();
}

