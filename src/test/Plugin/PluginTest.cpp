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
 * @file PluginTest.cpp
 * @date Sep 20, 2018
 * @author Mirco Theile, mirco.theile@tum.de
 * @brief
 */


#include <boost/test/unit_test.hpp>
#include <uavAP/FlightControl/FlightControlHelper.h>

BOOST_AUTO_TEST_SUITE(PluginTest)

BOOST_AUTO_TEST_CASE(Test1)
{
	FlightControlHelper helper;
	Aggregator agg = helper.createAggregation("./Plugin/flight_control.json");
}

BOOST_AUTO_TEST_SUITE_END()


