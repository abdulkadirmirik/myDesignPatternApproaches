#pragma once
#include "Singleton.h"
class SingletonImplementer :
    public Singleton<SingletonImplementer>
{
};

