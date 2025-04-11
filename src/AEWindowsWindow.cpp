#include <AERMOSS/Core/Window/Platforms/Windows/AEWindowsWindow.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
     AEWindowsWindow::AEWindowsWindow(int width, int height, const char* title)
     : _width(width), _height(height), _title(title)
     {
          glfwInit();
          glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
          glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
          glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
          window = glfwCreateWindow(width, height, title, NULL, NULL);
          if(window == NULL){
               std::cout << "Can't create window!" << std::endl;
               glfwTerminate();
               exit(EXIT_FAILURE);
          }
          glfwMakeContextCurrent(window);
     }
     AEWindowsWindow::~AEWindowsWindow()
     {    
          Destroy();
     }
     void AEWindowsWindow::Update()
     {
          glfwPollEvents();
     }
     void AEWindowsWindow::Render(AERMOSS::AEColor background_color, bool draw, bool render_imgui, bool render_models, bool clear_color)
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
               glViewport(0, 0, _width, _height);
               glfwSwapBuffers(window);
          }
     }
     void AEWindowsWindow::Destroy(){
          glfwDestroyWindow(window);
          glfwTerminate();
     }
AE_NAMESPACE_END()