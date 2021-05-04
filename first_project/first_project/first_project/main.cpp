

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


int main()
{	
#ifdef STENCIL_TESTING_MAIN
	return stencil_tesing_cpp();
#endif
	return 1;
}