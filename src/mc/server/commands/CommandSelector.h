#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class CommandSelector {
public:
    // prevent constructor by default
    CommandSelector& operator=(CommandSelector const&);
    CommandSelector(CommandSelector const&);
    CommandSelector();
};
