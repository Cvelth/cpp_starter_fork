#if defined(_WIN32) || defined(WIN32)
// see https://github.com/onqtam/doctest/blob/master/doc/markdown/configuration.md#doctest_config_use_std_headers
#  define DOCTEST_CONFIG_USE_STD_HEADERS
#endif

#include <doctest/doctest.h>
#include <greeter.h>

TEST_CASE("Greeter") {
  using namespace greeter;

  Greeter greeter("World");

  CHECK(greeter.greet(LanguageCode::EN) == "Hello, World!");
  CHECK(greeter.greet(LanguageCode::DE) == "Hallo World!");
  CHECK(greeter.greet(LanguageCode::ES) == "¡Hola World!");
  CHECK(greeter.greet(LanguageCode::FR) == "Bonjour World!");
}
