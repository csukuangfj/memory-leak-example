#include <iostream>
#include <pybind11/embed.h> // everything needed for embedding

namespace py = pybind11;

int main() {
  py::scoped_interpreter guard{}; // start the interpreter and keep it alive
  py::module_ kaldifeat = py::module_::import("torch");
  std::cerr << "Module Loaded" << std::endl;
}
