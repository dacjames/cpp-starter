#define CATCH_CONFIG_MAIN
#include <catch.hpp>

#include "Something.h"

using namespace starter;

//------------------------------------------------------------------------------

TEST_CASE( "Test1", "[Test something super trivial]" ) {
  Something s{"foo"};
  
  REQUIRE (s.name == "foo" );

  s.name = "foobar";

  REQUIRE (s.name != "foo" );
}

//------------------------------------------------------------------------------
