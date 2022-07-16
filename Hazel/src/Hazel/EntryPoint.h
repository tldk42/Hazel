#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

void main(int argc, char** argv)
{
	Hazel::Log::Init();
	HZ_CORE_WARN("Initialized Log");
	HZ_INFO("Hi");

	auto app = Hazel::CreateApplication();
	app->Run();
	delete app;
}

#endif
