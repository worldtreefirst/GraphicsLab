#ifndef SHADERTOY_EMPTY_APP_H
#define SHADERTOY_EMPTY_APP_H

#include "Direct3D11/D3D11App.h"

class EmptyApp : public D3D11App
{
public:
	char *getTitle() const { return "Empty scene"; }
	void drawFrame();
	bool init();
	bool load();
protected:
	ShaderID m_content_shd;
	float m_width;
	float m_height;

};


#endif