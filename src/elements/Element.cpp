#include "elements/Element.hpp"

std::string Element::render() { return this->internalRender(0, 0); }
