/*
 * todo (https://github.com/goncrust/todo)
 *
 * Element class.
 *
 * Copyright (c) 2022 by goncrust
 * Released under the GPL v3.0
 * https://github.com/goncrust/todo/blob/main/LICENSE
 */

#include "elements/Element.hpp"

std::string Element::render() { return this->internalRender(0, 0); }
