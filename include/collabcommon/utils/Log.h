#pragma once

#include <iostream>

namespace collab {

#ifdef NDEBUG
#define LOG std::clog << "[LOG]: "
#else
#define LOG std::clog << "[LOG]:[" << __func__ << "@" << __LINE__ << "]: "
#endif

}  // namespace collab
