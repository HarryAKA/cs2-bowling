/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_GameTest_init = false;
#include "GameTest.h"

static GameTest suite_GameTest;

static CxxTest::List Tests_GameTest = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_GameTest( "GameTest.h", 18, "GameTest", suite_GameTest, Tests_GameTest );

static class TestDescription_suite_GameTest_testConstructorGame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testConstructorGame() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 20, "testConstructorGame" ) {}
 void runTest() { suite_GameTest.testConstructorGame(); }
} testDescription_suite_GameTest_testConstructorGame;

static class TestDescription_suite_GameTest_testConstructorRolls : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testConstructorRolls() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 25, "testConstructorRolls" ) {}
 void runTest() { suite_GameTest.testConstructorRolls(); }
} testDescription_suite_GameTest_testConstructorRolls;

static class TestDescription_suite_GameTest_testConstructorLastFrame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testConstructorLastFrame() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 30, "testConstructorLastFrame" ) {}
 void runTest() { suite_GameTest.testConstructorLastFrame(); }
} testDescription_suite_GameTest_testConstructorLastFrame;

static class TestDescription_suite_GameTest_testConstructorPins : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testConstructorPins() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 35, "testConstructorPins" ) {}
 void runTest() { suite_GameTest.testConstructorPins(); }
} testDescription_suite_GameTest_testConstructorPins;

static class TestDescription_suite_GameTest_testConstructorStrikes : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testConstructorStrikes() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 40, "testConstructorStrikes" ) {}
 void runTest() { suite_GameTest.testConstructorStrikes(); }
} testDescription_suite_GameTest_testConstructorStrikes;

static class TestDescription_suite_GameTest_testConstructorScore : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testConstructorScore() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 45, "testConstructorScore" ) {}
 void runTest() { suite_GameTest.testConstructorScore(); }
} testDescription_suite_GameTest_testConstructorScore;

static class TestDescription_suite_GameTest_testSetRolls : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testSetRolls() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 50, "testSetRolls" ) {}
 void runTest() { suite_GameTest.testSetRolls(); }
} testDescription_suite_GameTest_testSetRolls;

static class TestDescription_suite_GameTest_testSetPins : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testSetPins() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 55, "testSetPins" ) {}
 void runTest() { suite_GameTest.testSetPins(); }
} testDescription_suite_GameTest_testSetPins;

static class TestDescription_suite_GameTest_testSetStrikes : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testSetStrikes() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 60, "testSetStrikes" ) {}
 void runTest() { suite_GameTest.testSetStrikes(); }
} testDescription_suite_GameTest_testSetStrikes;

static class TestDescription_suite_GameTest_testSetScore : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testSetScore() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 65, "testSetScore" ) {}
 void runTest() { suite_GameTest.testSetScore(); }
} testDescription_suite_GameTest_testSetScore;

static class TestDescription_suite_GameTest_testSetLastFrame : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_GameTest_testSetLastFrame() : CxxTest::RealTestDescription( Tests_GameTest, suiteDescription_GameTest, 70, "testSetLastFrame" ) {}
 void runTest() { suite_GameTest.testSetLastFrame(); }
} testDescription_suite_GameTest_testSetLastFrame;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
