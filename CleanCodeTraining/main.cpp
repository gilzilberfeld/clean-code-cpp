#define APPROVALS_CATCH_EXISTING_MAIN
#include "ApprovalTests.v.10.12.2.hpp"

int main(int argc, char* argv[]) {
	// your setup ...
	auto directoryDisposer =
		ApprovalTests::Approvals::useApprovalsSubdirectory("approval_tests");

	int result = Catch::Session().run(argc, argv);

	// your clean-up...

	return result;
}