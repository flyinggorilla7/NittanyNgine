#pragma once

#ifdef NN_PLATFORM_WINDOWS

extern NittanyNgine::Application* NittanyNgine::CreateApplication();
int main(int argc , char** argv)
{
	printf("NittanyNgine\n");
	auto app = NittanyNgine::CreateApplication();
	app->Run();
	delete app;
}

#endif