#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueID {
public:
    // prevent constructor by default
    ActorUniqueID& operator=(ActorUniqueID const&);
    ActorUniqueID(ActorUniqueID const&);
    ActorUniqueID();

public:
    // NOLINTBEGIN
    // symbol: ?INVALID_ID@ActorUniqueID@@2U1@B
    MCAPI static struct ActorUniqueID const INVALID_ID;

    // NOLINTEND
};
