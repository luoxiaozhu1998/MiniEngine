#include "memory"
#include "Engine.h"
int main()
{
    const auto engine=std::make_unique<mini::Engine>();
    engine->Run();
    return 0;
}