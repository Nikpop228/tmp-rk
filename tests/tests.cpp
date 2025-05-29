#include "zoo.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>

using ::testing::_;

class MockCat : public Cat
{
public:
	MOCK_METHOD(void, play, (const IAnimal& animal), (const, override));
};

class MockDog : public Dog
{
public:
	MOCK_METHOD(void, play, (const IAnimal& animal), (const, override));
};

class MockBird : public Bird
{
public:
	MOCK_METHOD(void, play, (const IAnimal& animal), (const, override));
};

//=================================================
//                     GTEST
//=================================================

TEST(Cat, name)
{
	Cat cat;
	EXPECT_EQ("Cat", cat.name());
}

TEST(Dog, name)
{
	Dog dog;
	EXPECT_EQ("Dog", dog.name());
}

TEST(Bird, name)
{
	Bird bird;
	EXPECT_EQ("Bird", bird.name());
}

//=================================================
//                      GMOCK
//=================================================

TEST(MockCat, play)
{
	MockCat cat;
	Dog dog;

	EXPECT_CALL(cat, play(_)).Times(1);
	play(dog, cat);
}

TEST(MockDog, play)
{
	MockDog dog;
	Cat cat;

	EXPECT_CALL(dog, play(_)).Times(1);
	play(cat, dog);
}

TEST(MockBird, play)
{
	MockBird bird;
	Cat cat;

	EXPECT_CALL(bird, play(_)).Times(1);
	play(cat, bird);
}

int main(int argc, char** argv)
{
	::testing::InitGoogleTest(&argc, argv);
	::testing::InitGoogleMock(&argc, argv);
	return RUN_ALL_TESTS();
}