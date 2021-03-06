/** \file Renderer.h
*/
#pragma once

namespace Engine
{
	enum class RendererAPI
	{
		None = 0, OpenGL = 1
	};
	/**
\Renderer Class, uses enums for API choices
*/
	class Renderer
	{
	public:
		inline static RendererAPI GetAPI() { return s_RendererAPI; }
	private:
		static RendererAPI s_RendererAPI;

	};

}
