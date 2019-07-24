#include <emscripten/bind.h>
#include <emscripten/val.h>
int main() {
  emscripten::val::global("foo").template as<int* const>();
}
