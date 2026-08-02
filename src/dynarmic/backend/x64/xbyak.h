// SPDX-FileCopyrightText: Copyright 2026 Eden Emulator Project
// SPDX-License-Identifier: GPL-3.0-or-later

#pragma once

// You must ensure this matches with src/dynarmic/common/x64/xbyak.h on root dir
//
// DYNARMIC_XBYAK_CUSTOM_CONTAINERS is an ODR-sensitive setting -- it must
// be identical in every TU in the final binary, so it's a compile
// definition set by whoever embeds dynarmic, not something toggled by
// editing this file. Undefined = Xbyak's own default containers. See
// common/x64/xbyak.h for the rest of what this flag controls.
#ifdef DYNARMIC_XBYAK_CUSTOM_CONTAINERS
#include <ankerl/unordered_dense.h>
#include <boost/unordered_map.hpp>
#define XBYAK_STD_UNORDERED_SET ankerl::unordered_dense::set
#define XBYAK_STD_UNORDERED_MAP ankerl::unordered_dense::map
#define XBYAK_STD_UNORDERED_MULTIMAP boost::unordered_multimap
#endif
#include <xbyak/xbyak.h>
#include <xbyak/xbyak_util.h>
