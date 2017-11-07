#define SPDLOG_TRACE_ON
#define SPDLOG_DEBUG_ON
#include <spdlog/spdlog.h>

#include "Something.h"

using namespace starter;

//------------------------------------------------------------------------------

int main(int argc, char** argv) {
  auto log = spdlog::stdout_color_mt("starter");
  log->info("welcome to a C++17 starter project");

  Something s{"something"};
  log->warn("oh my", s.name);
  log->error("this is very unfortunate");
  return 0;
}

//------------------------------------------------------------------------------
