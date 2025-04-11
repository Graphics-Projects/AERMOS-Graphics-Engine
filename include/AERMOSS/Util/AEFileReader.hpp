#ifndef AEFILEREADER_H
#define AEFILEREADER_H

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cerrno>
#include <AERMOSS/Util/AEConstants.hpp>

AE_NAMESPACE_BEGIN(AERMOSS)
    std::string AEReadFile(const char* filename);
AE_NAMESPACE_END()

#endif