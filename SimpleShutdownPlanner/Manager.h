#pragma once
#include <cstdlib>

class Manager
{
public:
	Manager();
	void setUnitOfMeasurement(int unit) { m_unitOfMeasurement = unit; };
	void setShutdownTime(int time);
	void ShutdownSystem();
	void DisableShutdown();
	void SetOptions(bool option) { m_shutdownOption = option; };
private:
	int m_unitOfMeasurement;	//Unit of measurement (secounds, minutes, etc.)
	int m_timeToShutdown;		//Time to shutdown in secounds
	bool m_shutdownOption;		//Shutdown or restart
	bool m_scheduled;
};

