#include "MainForm.h"

///<summary>
///Sets the unit of measurement for shutdown
///</summary>
void SimpleShutdownPlanner::MainForm::setUnit(int unit)	//0 - secounds, 1 - minutes and so on
{
	m_manager->setUnitOfMeasurement(unit);
}
