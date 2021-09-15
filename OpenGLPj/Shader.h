#ifndef SHADER_CLASS_H
#define SHADER_CLASS_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cerrno>
#include <glm/glm.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <stb/stb_image.h>

std::string get_file_contents(const char* filename);

class Shader
{
protected:

public:
	GLuint ID;
	glm::mat4 trans;
	Shader(const char* vertexFile, const char* fragmentFile);
	void Activate();
	void Delete();
	GLuint GetID();
};

#endif

