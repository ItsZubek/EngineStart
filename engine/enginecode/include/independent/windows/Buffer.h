/** \file Buffer.h
*/

#pragma once


namespace Engine {
	/**
\class Interface class for Vertex buffers
*/
	class VertexBuffer
	{
	public:
		virtual ~VertexBuffer() {}
		virtual void Bind() const= 0;
		virtual void UnBind() const= 0;

		static VertexBuffer* Create(float* vertices, uint32_t size);
	};
	/**
\class Interface class for Index buffers
*/
	class IndexBuffer
	{
	public:
		virtual ~IndexBuffer() {}
		virtual void Bind() const = 0;
		virtual void UnBind() const = 0;
		
		virtual uint32_t GetCount() const = 0;

		static IndexBuffer* Create(uint32_t* indices, uint32_t size);
	};
}