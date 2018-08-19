#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Application.h"

class QMutex;
class WeightProcessor;

class Application : public QMainWindow
{
	Q_OBJECT

public:
	static Application *Get();

	~Application() = default;

private:
	Application();
	static std::shared_ptr<Application> m_instance;

	std::unique_ptr<QMutex> m_mutex;

	Ui::ApplicationClass ui;

	std::shared_ptr<WeightProcessor> m_weightprocessor;

};
