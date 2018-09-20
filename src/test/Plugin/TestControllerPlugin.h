////////////////////////////////////////////////////////////////////////////////
// Copyright (C) 2018 University of Illinois Board of Trustees
//
// This file is part of uavAP.
//
// uavAP is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// uavAP is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
////////////////////////////////////////////////////////////////////////////////
/**
 * @file TestControllerPlugin.h
 * @date Sep 20, 2018
 * @author Mirco Theile, mirco.theile@tum.de
 * @brief
 */

#ifndef TEST_PLUGIN_TESTCONTROLLERPLUGIN_H_
#define TEST_PLUGIN_TESTCONTROLLERPLUGIN_H_
#include <uavAP/Core/Object/IAggregatableObject.h>
#include <uavAP/FlightControl/Controller/IController.h>

extern "C"
{
void
register_plugin();
}

class TestControllerPlugin: public IAggregatableObject, public IController
{
public:

	static constexpr TypeId typeId = "test_controller";

	TestControllerPlugin() = default;

	ADD_CREATE_WITHOUT_CONFIG(TestControllerPlugin)

	void
	notifyAggregationOnUpdate(const Aggregator& agg) override;

	void
	setControllerTarget(const ControllerTarget& target) override;

};

#endif /* TEST_PLUGIN_TESTCONTROLLERPLUGIN_H_ */
