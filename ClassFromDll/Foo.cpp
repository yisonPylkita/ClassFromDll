#include <iostream>
#define FOO_DLL_IMPL
#include <ClassFromDll/Foo.hpp>

//void FOO_DLL_API Foo::scream() const
void Foo::scream() const
{
    std::wcout << L"Hello from exported class" << std::endl;
}
