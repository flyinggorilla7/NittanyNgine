#include <NittanyNgine.h>

class Sandbox : public NittanyNgine::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

NittanyNgine::Application* NittanyNgine::CreateApplication()
{
	return new Sandbox();
}