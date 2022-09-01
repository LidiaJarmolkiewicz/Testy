#include "pch.h"
#include <queue>
// 1. Sprawdzic czy nowo utworzona kolejka jest pusta
		//2. Sprawdzic czy jak dodamy kilka elementów (push) to size sie zmieni na prawidlowa wartosc
		//3. Sprawdzic czy jak wywo³amy pop na kolejce z elemntami to zmniejszy sie jej rozmiar
		//4. Sprawdzic czy jak za pomoca push w³o¿y³y elementy o zadanych wartosciach to po wywo³aniu pop odpowiednio bêdzie ustawiony front
		//5. Sprawdzic czy jak wrzucimy 5 elementów i potem 5 razy wywo³amy pop to kolejka bedzie pusta. (polecam uzyc petli for)
TEST(QueueTest, TestNewQueueIsEmpty) 
{
	
	std::queue<int> testedQueue;
  EXPECT_TRUE(testedQueue.empty());
}

TEST(QueueTest, TestQueuePush)
{
	std::queue<int> testedQueue;
	for (int i = 0; i < 3; ++i)
	{
		testedQueue.push(i);
	}
			
	EXPECT_EQ(testedQueue.size(),3);
}

TEST(QueueTest, TestQueuePop)
{
	const size_t queueSize = 15;
	std::queue<int> testedQueue;
	for (int i = 0; i < queueSize; ++i)
	{
		testedQueue.push(i);
	}
		EXPECT_EQ(testedQueue.size(), queueSize);
		testedQueue.pop();
		EXPECT_EQ(testedQueue.size(), queueSize-1);

}
TEST(QueueTest, TestIfFront)
{
	const size_t queueSize = 15;
	std::queue<int> testedQueue;
	for (int i = 0; i < queueSize; ++i)
	{
		testedQueue.push(i);
	}
	testedQueue.push(55);
	for (int i = 0; i < queueSize; ++i)
	{
		EXPECT_EQ(testedQueue.front(),i);
		testedQueue.pop();
	}

}
TEST(QueueTest, TestIfEmpty5)
{
	std::queue<int>testedQueue;
	for (int i = 0; i < 5; ++i)
	{
		testedQueue.push(i);
	}
	for (int i = 0; i < 5; ++i)
	{
		testedQueue.pop();
	}
	
	EXPECT_TRUE(testedQueue.empty());
}
TEST(QueueTest, TestSwap)
{
		std::queue<int>testedQueue;
		testedQueue.push(1);
		testedQueue.push(2);
		testedQueue.push(3);

		std::queue<int>testedQueueOther;
		testedQueueOther.push(8);
		testedQueueOther.push(9);
		std::swap(testedQueue,testedQueueOther);

	EXPECT_TRUE(testedQueue.front(),8);
	EXPECT_TRUE(testedQueueOther.front(), 1);
	EXPECT_TRUE(testedQueue.size(), 2);
	EXPECT_TRUE(testedQueueOther.front(), 3);

}
//test fixture
class StdQueueTest :public::testing::Test
{
public:
	StdQueueTest() {    //konstruktor
		for (int i = 0; i < queueSize; ++i)
		{
			testedQueue.push(i);
		}
	}
protected:
	const size_t queueSize = 15;//tu dodac obiekt ktory testujemy
	std::queue<int>testedQueue;
};

TEST_F(StdQueueTest, TestAdding)
{
	
	EXPECT_EQ(testedQueue.size(), queueSize);
}


TEST_F(StdQueueTest, TestQueuePop)
{
	EXPECT_EQ(testedQueue.size(), queueSize);
	testedQueue.pop();
	EXPECT_EQ(testedQueue.size(), queueSize - 1);
}
TEST_F(StdQueueTest, TestIfEmpty)
{
	
	
	for (int i = 0; i < queueSize; ++i)
	{
		
		testedQueue.pop();
	}
	EXPECT_TRUE(testedQueue.empty());
}