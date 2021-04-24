#include "FileSystem.h"

std::string FileSystem::getPath(std::string subpath)
{
	return (std::string("./../../../") + subpath);
}
