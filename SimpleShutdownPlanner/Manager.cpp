#include "Manager.h"
#include <string>

Manager::Manager()
{
	m_unitOfMeasurement = 0;	//default for secounds
	m_shutdownOption = false;	//false - shutdown, true - restart
	m_timeToShutdown = 1;		//default one secound
	m_scheduled = false;
}

void Manager::setShutdownTime(int time)
{
	switch (m_unitOfMeasurement)
	{
	case 0:
		m_timeToShutdown = time;
		break;
	case 1:
		m_timeToShutdown = time * 60;
		break;
	case 2:
		m_timeToShutdown = time * 60 * 60;
		break;
	case 3:
		m_timeToShutdown = time * 60 * 60 * 24;
		break;
	}
}

void Manager::ShutdownSystem()
{
	if (m_scheduled)
	{
		DisableShutdown();
	}
	
	std::string command = "shutdown ";
	if (m_shutdownOption)
	{
		command += "/s ";
	}
	else
	{
		command += "/r ";
	}

	command += "/t ";
	command += std::to_string(m_timeToShutdown);
	command += " ";

	m_scheduled = true;
	system(command.c_str());
}

void Manager::DisableShutdown()
{
	m_scheduled = false;
	system("shutdown /a");
}
