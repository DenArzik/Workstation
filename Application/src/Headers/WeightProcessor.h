#pragma once

#include <QObject>

#include "Declarations.h"

class QSerialPort;

class WeightProcessor : public QObject
{
	Q_OBJECT

public:
	WeightProcessor(tiny_uint weightsCount);
	~WeightProcessor();

private:
	ThreadItemMap<QSerialPort> m_serial_map;
};
