#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class PlayerListEntry {
public:
    // prevent constructor by default
    PlayerListEntry& operator=(PlayerListEntry const&);
    PlayerListEntry(PlayerListEntry const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PlayerListEntry@@QEAA@XZ
    MCAPI PlayerListEntry();

    // symbol: ??0PlayerListEntry@@QEAA@AEBVPlayer@@@Z
    MCAPI explicit PlayerListEntry(class Player const&);

    // symbol: ??0PlayerListEntry@@QEAA@VUUID@mce@@@Z
    MCAPI explicit PlayerListEntry(class mce::UUID);

    // symbol: ?clone@PlayerListEntry@@QEBA?AV1@XZ
    MCAPI class PlayerListEntry clone() const;

    // symbol: ?read@PlayerListEntry@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> read(class ReadOnlyBinaryStream&);

    // symbol: ?readRemove@PlayerListEntry@@QEAA?AV?$Result@XVerror_code@std@@@Bedrock@@AEAVReadOnlyBinaryStream@@@Z
    MCAPI class Bedrock::Result<void> readRemove(class ReadOnlyBinaryStream&);

    // symbol: ?write@PlayerListEntry@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void write(class BinaryStream&) const;

    // symbol: ?writeRemove@PlayerListEntry@@QEBAXAEAVBinaryStream@@@Z
    MCAPI void writeRemove(class BinaryStream&) const;

    // symbol: ??1PlayerListEntry@@QEAA@XZ
    MCAPI ~PlayerListEntry();

    // NOLINTEND
};
