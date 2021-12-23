#pragma once
#include "Core.h"
namespace Hazel {
	class HAZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};
	/// <summary>
	/// to be defined in Client
	/// </summary> 
	/// <returns></returns>
	Application* CreateApplication();
}

