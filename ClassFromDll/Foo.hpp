#pragma once

//#if defined FOO_DLL_IMPL
#define FOO_DLL_API __declspec(dllexport)
//#else
//#define FOO_DLL_API __declspec(dllimport)
//#endif

class FOO_DLL_API Foo
{
public:
    void scream() const;
};
