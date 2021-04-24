
#include "pch.h"
#include "a.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

#ifdef BASIC_LIGHTING_DIFFUSE_MAIN
int basic_lighting_diffuse_main();
#endif


#ifdef MATERIALS_MAIN
int materials_main();
#endif

int main()
{	
#ifdef MATERIALS_MAIN
	return materials_main();
#endif
	return 1;
}