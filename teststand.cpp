#include "teststand.hpp"


using stand = EngineTestStand;


stand::EngineTestStand(const BaseEngine& engine, int envTemp)
    : _envTemp(envTemp), _engine(engine) {}

void
stand::setEngine(const BaseEngine& engine)
{ _engine = engine; }

void
stand::setEnvTemperature(int temperature)
{ _envTemp = temperature; }

stand::ResultInfo
stand::start()
{
    ResultInfo info;

    _engine.run();

    return info;
}

