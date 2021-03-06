/** \file OpenGLContext.h
*/
#pragma once
#include "windows/graphicsContext.h"


struct GLFWwindow;


namespace Engine {
	/**
\class OpenGLContext
Adaptation of the GraphicsContext base class, implemented for OpenGL
*/
	class OpenGLContext : public GraphicsContext
	{
	public:
		OpenGLContext(GLFWwindow* windowHandle);

		virtual void init() override;
		virtual void swapBuffers() override;
	private:
		GLFWwindow* m_WindowHandle;
	};

}