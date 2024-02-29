#include <gtest/gtest.h>
#include "../src/shellClass/shell.hpp"
#include "../src/utilClass/util.hpp"
#include "../src/shellExceptionClass/shellException.hpp"

// UTIL Class tests
TEST(OzShTest, TestUtilValidateUserInputWithTooFewArguments) {
    Util testUtil;
    int argc = 1; // Simulate too few arguments (argc must be at least 2)
    char* argv[0];

    EXPECT_THROW(testUtil.is_valid_input(argc, argv), ShellException);
}

TEST(OzShTest, TestUtilValidateUserInputWithTooManyArguments) {
    Util testUtil;
    int argc = 3; // Simulate too many arguments (argc must not exceed 2)
    char* argv[0];
    EXPECT_THROW(testUtil.is_valid_input(argc, argv), ShellException);
}


// Shell Tests
TEST(OzShTest, ValidateShellClassExitsTooFewArguments) {
    Shell testShell;
    int argc = 1; // Simulate too few arguments (argc must be at least 2)
    char* argv[0];

    EXPECT_EXIT({
        testShell.is_valid_input(argc, argv);
    }, ::testing::ExitedWithCode(1), "");
}

TEST(OzShTest, ValidateShellClassExitsTooManyArguments) {
    Shell testShell;
    int argc = 3; // Simulate too many arguments (argc must not exceed 2)
    char* argv[0];

    EXPECT_EXIT({
        testShell.is_valid_input(argc, argv);
    }, ::testing::ExitedWithCode(1), "");
}