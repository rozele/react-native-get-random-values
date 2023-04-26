#pragma once

#define NOMINMAX

#pragma push_macro("GetCurrentTime")
#undef GetCurrentTime
#include <unknwn.h>

#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Security.Cryptography.h>
#include <winrt/Windows.Storage.Streams.h>

#include <winrt/Microsoft.ReactNative.h>
#pragma pop_macro("GetCurrentTime")
