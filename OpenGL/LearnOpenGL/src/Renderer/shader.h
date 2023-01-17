#pragma once
#include <glad/glad.h>
#include <string>
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class Shader
{
public:
	Shader(const std::string& VertexShaderPath, const std::string FragmentShaderPath);
	~Shader();

	//use Program
	void bind() const;
	void unbind() const;

	//Set Uniform
	void set_bool(const std::string& name, bool value) const;
	void set_int(const std::string& name, int value) const;
	void set_float(const std::string& name, float value) const;
	void set_float4(const std::string& name, glm::vec4 values) const;
	void set_mat4(const std::string& name, glm::mat4 value) const;

private:
	std::string read_file(const std::string& FilePath);
	void compile(const std::string& VertexShaderSrc, const std::string& FragmentShaderSrc);
private:
	GLint m_render_ID;
};