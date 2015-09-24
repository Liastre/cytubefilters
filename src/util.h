#pragma once

#include <v8.h>

#include "./filter.h"

using v8::Local;
using v8::Object;
using v8::Persistent;
using v8::String;

namespace Util
{
    bool ValidFilter(const Local<Object>& obj);
    Filter NewFilter(const Local<Object>& obj);
    void PackFilter(const Filter& src, Local<Object>& dst);
}
