#include <AERMOSS/Core/App/AEApplication.hpp>
#include <AERMOSS/Core/Window/AEWindow.hpp>
#include <AERMOSS/Util/AEColor.hpp>

int main()
{
    AERMOSS::AEWindow* mainWindow = new AERMOSS::AEWindow(1280, 720, "AERMOSS App With Color");
    AERMOSS::AEApplication app(mainWindow);

    AERMOSS::AEColor bgColor(0.15f, 0.2f, 0.25f, 1.0f); // bluish background
    app.Run(bgColor);

    return 0;
}
