#define APPROVALS_CATCH_EXISTING_MAIN
#include "ApprovalTests.v.10.12.2.hpp"

int main(int argc, char* argv[]) {
	int result = Catch::Session().run(argc, argv);


	return result;
}