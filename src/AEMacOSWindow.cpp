#include <AERMOSS/Core/Window/Platforms/MacOS/AEMacOSWindow.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
     AEMacOSWindow::AEMacOSWindow(int width, int height, const char* title)
     : _width(width), _height(height), _title(title)
     {
          glfwInit();
          // Set GLFW Window Hints for macOS
          glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);  
          glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 1);  // macOS supports OpenGL 4.1 max
          glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
          glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // Required for macOS
          window = glfwCreateWindow(width, height, title, NULL, NULL);
          if(window == NULL){
               std::cout << "Can't create window!" << std::endl;
               glfwTerminate();
               exit(EXIT_FAILURE);
          }
          glfwMakeContextCurrent(window);
     }
     AEMacOSWindow::~AEMacOSWindow()
     {    
          Destroy();
     }
     void AEMacOSWindow::Update()
     {
          glfwPollEvents();
     }
     void AEMacOSWindow::Render(AERMOSS::AEColor background_color, bool draw, bool render_imgui, bool render_models, bool clear_color)
     {
          if(draw){
               //start drawing
          }
          else if(render_imgui){
               //render imgui
          }
          else if(render_models){
               //render models
          }
          else if(clear_color){
               gladLoadGL();
               glClearColor(background_color.r, background_color.g, background_color.b, background_color.a);
               glClear(GL_COLOR_BUFFER_BIT);
               glfwSwapBuffers(window);
          }
     }
     void AEMacOSWindow::Destroy(){
          glfwDestroyWindow(window);
          glfwTerminate();
     }
AE_NAMESPACE_END()