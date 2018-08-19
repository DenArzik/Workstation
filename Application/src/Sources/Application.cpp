#include "stdafx.h"
#include "Application.h"

#include "WeightProcessor.h"

std::shared_ptr<Application> Application::m_instance(nullptr);

static const unsigned char ScalesNumber = 5;

Application::Application()
	: QMainWindow(nullptr)
	, m_mutex(new QMutex)
{
	ui.setupUi(this);

	m_weightprocessor.reset(new WeightProcessor())
}

Application *Application::Get()
{
	if (m_instance == nullptr)
	{
		QMutex tempMutex;
		tempMutex.lock();
		if (m_instance == nullptr)
		{
			m_instance.reset(new Application);
		}
		tempMutex.unlock();
	}
	return m_instance.get();
}