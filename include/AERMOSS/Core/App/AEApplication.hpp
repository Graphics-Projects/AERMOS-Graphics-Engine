#ifndef AEAPPLICATION_H
#define AEAPPLICATION_H

#pragma once

#include <iostream>
#include <AERMOSS/AERMOSS.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)

    AE_CLASS_BEGIN(AEApplication)
        AE_PUBLIC
            AEWindow* window;
 
            AEApplication(AEWindow* window);
            ~AEApplication();

            void Init();        // Initialize the application (load resources, setup systems)
            void Update();      // Update per frame logic
            void Run(const AEColor& backgroundColor);         // Main loop
            void Shutdown();    // Clean up resources

        AE_PROTECTED
            bool isRunning = true;

    AE_CLASS_END()

AE_NAMESPACE_END()

#endif
