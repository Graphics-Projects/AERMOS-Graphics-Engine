#include <AERMOSS/Rendering/Shaders/AEShader.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
     AEShader::AEShader(const char* vertexFile, const char* fragmentFile)
     {
          std::string vertexCode = AERMOSS::AEReadFile(vertexFile);
	     std::string fragmentCode = AERMOSS::AEReadFile(fragmentFile);

	     // Convert the shader source strings into character arrays
	     const char* vertexSource = vertexCode.c_str();
	     const char* fragmentSource = fragmentCode.c_str();

          GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
          glShaderSource(vertexShader, 1, &vertexSource, NULL);
          glCompileShader(vertexShader);

          GLuint fragmentShader = glCreateShader(GL_VERTEX_SHADER);
          glShaderSource(fragmentShader, 1, &fragmentSource, NULL);
          glCompileShader(fragmentShader);

          shaderProgram = glCreateProgram();
          glAttachShader(shaderProgram, vertexShader);
          glAttachShader(shaderProgram, fragmentShader);
          glLinkProgram(shaderProgram);

          glDeleteShader(vertexShader);
          glDeleteShader(fragmentShader);
     }

     AEShader::~AEShader(){
          Destroy();
     }

     void AEShader::Active(){
          glUseProgram(shaderProgram);
     }

     void AEShader::Destroy(){
          glDeleteProgram(shaderProgram);
     }
AE_NAMESPACE_END()