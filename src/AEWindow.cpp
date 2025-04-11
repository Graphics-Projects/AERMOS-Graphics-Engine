#include <AERMOSS/Core/Window/AEWindow.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
     AEWindow::AEWindow(int width, int height, const char* title)
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
     AEWindow::~AEWindow()
     {    
          Destroy();
     }
     void AEWindow::Update()
     {
          glfwPollEvents();
     }
     void AEWindow::Render(AERMOSS::AEColor background_color, bool draw, bool render_imgui, bool render_models, bool clear_color)
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
     void AEWindow::Destroy(){
          glfwDestroyWindow(window);
          glfwTerminate();
     }
AE_NAMESPACE_END()