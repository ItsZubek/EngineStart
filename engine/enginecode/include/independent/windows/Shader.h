/** \file Shader.h
*/
#pragma once

#include <string>
#include <glm/glm.hpp>

namespace Engine {
	/**
\Shader class
*/
	class Shader
	{
	public:
		Shader(const std::string& vertexSrc, const std::string& fragmentSrc);
		~Shader();

		void Bind() const;
		void UnBind() const;
		void UploadUniformMat4(const std::string& name, const glm::mat4& matrix);

		uint32_t getRenderedID() const { return m_RendererID; }
	private:
		uint32_t m_RendererID;
	};
}