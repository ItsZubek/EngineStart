/** \file window.h
*/
#pragma once

#include "graphicsContext.h"
#include <string>
#include <functional>
#include "systems/MyLogger.h"
#include "events/EventBaseClass.h"

namespace Engine {


	struct WindowProperties //!<Window Properties struct, holding things like the title, width, height and isFullScreen and isVsync
	{
		std::string m_title;
		unsigned int m_width;
		unsigned int m_height;
		bool m_isFullScreen;
		bool m_isVSync;

		WindowProperties(const std::string& title = "My Window", unsigned int width = 800, unsigned int height = 600, bool fullscreen = false) : m_title(title), m_width(width), m_height(height), m_isFullScreen(fullscreen) {}
	};
	/**
\Pure Virtual Class for interface purposes
*/
	class Window
	{
	public:
		using EventCallbackFn = std::function<void(EventBaseClass&)>;

		virtual ~Window() {};
		virtual void onUpdate() = 0;
		virtual void onResize(unsigned int width, unsigned int height) = 0;
		virtual void setVSync(bool VSync) = 0;
		virtual void setEventCallback(const EventCallbackFn& callback) = 0;
		virtual unsigned int getWidth() const = 0;
		virtual unsigned int getHeight() const = 0;
		virtual void* getNativeWindow() const = 0;
		virtual bool isFullScreenMode() const = 0;
		virtual bool isVSync() const = 0;

		static Window* Create(const WindowProperties& properties = WindowProperties());
	protected:
		std::shared_ptr<GraphicsContext> m_context;
	private:
		virtual void init(const WindowProperties& properties) = 0;
		virtual void Shutdown() = 0;
	};
}

