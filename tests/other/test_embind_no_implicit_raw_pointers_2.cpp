#include <emscripten/bind.h>
#include <emscripten/val.h>
int main() {
  void* x = nullptr;
  emscripten::val::global("foo")(x); // void*&
}
