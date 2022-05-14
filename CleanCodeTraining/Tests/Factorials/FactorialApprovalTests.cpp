#include "catch2/catch.hpp"
#include "../../ApprovalTests.v.10.12.2.hpp"
using namespace ApprovalTests;

#include "..\..\Code\Factorials\Factorials.h"

TEST_CASE("Approval Factorial Tests", "[.]")
{
	std::stringstream log;
	Factorials factorial;
	log << "1 -> " << factorial.Calculate(1) << '\n';
	log << "2 -> " << factorial.Calculate(2) << '\n';
	log << "3 -> " << factorial.Calculate(3) << '\n';

	Approvals::verify(log.str());

}


