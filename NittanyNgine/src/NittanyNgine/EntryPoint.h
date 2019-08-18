#pragma once

#ifdef NN_PLATFORM_WINDOWS

extern NittanyNgine::Application* NittanyNgine::CreateApplication();
int main(int argc , char** argv)
{
	NittanyNgine::Log::Init();
	NN_CORE_WARN("Initialized Log!");
	NN_INFO("Hello");

	auto app = NittanyNgine::CreateApplication();
	app->Run();
	delete app;
}

#endif