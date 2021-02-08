#include <gtest.h>
#include "Stack.h"
TEST(Stack, can_create_stack)
{
    ASSERT_NO_THROW(TStack<int>(5));
}

TEST(Stack, cant_create_stack_with_zero_capacity)
{
    ASSERT_ANY_THROW(TStack<int>(0));
}

TEST(Stack, can_Push_item_to_stack)
{
    TStack<int> s(5);
    ASSERT_NO_THROW(s.Push(1));
}


TEST(Stack, can_Pop_item_from_stack)
{
    TStack<int> s(5);
    s.Push(1);
    int number = s.Pop();
    EXPECT_EQ(number, 1);
}

TEST(Stack, default_stack_is_empty)
{
    TStack<int> s(5);
    EXPECT_EQ(s.IsEmpty(), true);
}

TEST(Stack, item_Pop_makes_stack_empty)
{
    TStack<int> s(5);
    s.Push(1);
    int number = s.Pop();
    EXPECT_EQ(s.IsEmpty(), true);
}

TEST(Stack, stack_with_items_is_not_empty)
{
    TStack<int> s(5);
    s.Push(1);
    s.Push(2);
    s.Push(3);
    EXPECT_EQ(s.IsEmpty(), false);
}

TEST(Stack, item_Push_makes_stack_full)
{
    TStack<int> s(3);
    s.Push(1);
    s.Push(2);
    s.Push(3);
    EXPECT_EQ(s.IsFull(), true);
}

TEST(Stack, cant_add_item_to_full_stack)
{
    TStack<int> s(3);
    s.Push(1);
    s.Push(2);
    s.Push(3);
    ASSERT_ANY_THROW(s.Push(4));
}

TEST(Stack, cant_Pop_item_from_empty_stack)
{
    TStack<int> s(1);
    s.Push(1);
    s.Pop();
    ASSERT_ANY_THROW(s.Pop());
}

TEST(Stack, can_get_max_element)
{
    TStack<int> s(3);
    s.Push(1);
    s.Push(2);
    s.Push(3);
    EXPECT_EQ(s.MaxElem(), 3);

}

TEST(Stack, can_get_least_element)
{
    TStack<int> s(3);
    s.Push(1);
    s.Push(2);
    s.Push(3);
    EXPECT_EQ(s.MinElem(), 1);
}

