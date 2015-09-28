/**
 * Unit Tests for Rando Test
**/

#include <gtest/gtest.h>
#include "rando.h"

/*  
	FUNCTIONS WE NEED TO TEST:

	bool shouldWorry(bool,bool,bool);
	bool isDivisbleBy(int,int);
	bool isPrime(int);
	int nearestToZero(int,int);
*/
 
class RandoTest : public ::testing::Test
{
	protected:
		RandoTest(){} //constructor runs before each test
		virtual ~RandoTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

TEST(RandoTest, allChildrenSmile)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,true,true) );
}

TEST(RandoTest, aChildSmiles)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(true,false,false) );
}

TEST(RandoTest, bChildSmiles)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(false,true,false) );
}

TEST(RandoTest, cChildSmiles)
{
	Rando rando;
	ASSERT_TRUE( rando.shouldWorry(false,false,true) );
}

TEST(RandoTest, noChildSmiles)
{
	Rando rando;
	ASSERT_FALSE( rando.shouldWorry(false,false,false) );
}

TEST(RandoTest, isDivisbleNums)
{
	Rando rando;
	ASSERT_TRUE( rando.isDivisbleBy(10,5) );
	ASSERT_TRUE( rando.isDivisbleBy(420,42) );
	ASSERT_TRUE( rando.isDivisbleBy(555,111) );
}

TEST(RandoTest, isNotDivisbleNums)
{
	Rando rando;
	ASSERT_FALSE( rando.isDivisbleBy(10,4) );
	ASSERT_FALSE( rando.isDivisbleBy(420,419) );
	ASSERT_FALSE( rando.isDivisbleBy(555,112) );
}

TEST(RandoTest, isPrimeNums)
{
	Rando rando;
	ASSERT_TRUE( rando.isPrime(7) );
	ASSERT_TRUE( rando.isPrime(11) );
	ASSERT_TRUE( rando.isPrime(13) );
	ASSERT_TRUE( rando.isPrime(17) );
	ASSERT_TRUE( rando.isPrime(419) );
	ASSERT_TRUE( rando.isPrime(421) );
}


TEST(RandoTest, isNotPrimeNums)
{
	Rando rando;
	ASSERT_FALSE( rando.isPrime(4));
	ASSERT_FALSE( rando.isPrime(6));
	ASSERT_FALSE( rando.isPrime(8));
	ASSERT_FALSE( rando.isPrime(80));
	ASSERT_FALSE( rando.isPrime(420));

}

TEST(RandoTest, ClosestToZeroA)
{
	Rando rando;
	ASSERT_EQ( rando.nearestToZero(-1,5), -1);

}

TEST(RandoTest, ClosestToZeroB)
{
	Rando rando;
	ASSERT_EQ( rando.nearestToZero(5,1), 1);

}