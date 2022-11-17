#include "elements/Element.hpp"

std::string Element::render() { return this->internal_render(0, 0); }
