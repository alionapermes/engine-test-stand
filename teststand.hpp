#pragma once

#include "baseengine.hpp"


class EngineTestStand
{
public:
    struct ResultInfo
    {
        size_t work_time = 0;
        size_t last_temp = 0;
    };

    EngineTestStand() = default;

    EngineTestStand(const BaseEngine& engine, int evtTemp);

    void
    setEngine(const BaseEngine& engine);

    void
    setEnvTemperature(int temperature);

    ResultInfo
    start();

private:
    int _envTemp = 0;
    BaseEngine _engine;
};

