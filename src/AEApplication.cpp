#include <AERMOSS/Core/App/AEApplication.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)

AEApplication::AEApplication(AEWindow* window)
    : window(window), isRunning(true)
{
}

AEApplication::~AEApplication()
{
    if (window)
    {
        delete window;
        window = nullptr;
    }
}

void AEApplication::Run(const AEColor& backgroundColor)
{
    while (isRunning && window && !window->should_close())
    {
        window->Update();
        window->Render(backgroundColor, false, false, false, true);
    }

    window->Destroy();
}

AE_NAMESPACE_END()
