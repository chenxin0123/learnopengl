

#include "pch.h"
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

#ifdef BASIC_LIGHTING_DIFFUSE_MAIN
int basic_lighting_diffuse_main();
#endif


#ifdef MATERIALS_MAIN
int materials_main();
#endif

#ifdef MODEL_LOADING_MAIN
int model_loading_main();
#endif

#ifdef STENCIL_TESTING_MAIN
int stencil_tesing_cpp();
#endif

#ifdef BLENDING_SORTED
int blending_sorted();
#endif

#ifdef FRAMEBUFFERS
int framebuffers();
#endif

int main()
{	
#ifdef FRAMEBUFFERS
	return framebuffers();
#endif
	return 1;
}