#include "LinkedList.h"

std::ostream& operator<<(std::ostream& stream, const Node& node)
{
    stream << node.data;
    return stream;
}

std::ostream& operator<<(std::ostream& stream, const LinkedList& list)
{
    stream << "[" << list.count << "] : { ";
    Node* temp = list.head;
    while (temp != nullptr)
    {
        stream << *temp << " ";
        temp = temp->next;
    }
    stream << "}";
    return stream;
}

Node*& LinkedList::nodeByIndex(int index)
{
    Node* temp = this->head;
    for (int i = 0; i < index; ++i)
    {
        temp = temp->next;
    }
    return temp;
}

LinkedList::~LinkedList()
{
    while (head != nullptr)
    {
        popHead();
    }
}

void LinkedList::pushHead(int element)
{
    head = new Node(element, head);
    if (tail == nullptr)
    {
        tail = head;
    }
    ++count;
}

void LinkedList::pushTail(int element)
{
    if (tail == nullptr)
    {
        return pushHead(element);
    }
    tail->next = new Node(element);
    tail = tail->next;
    ++count;
}

void LinkedList::insert(int element, int index)
{
    if (index == 0)
    {
        return pushHead(element);
    }
    if (index == count)
    {
        return pushTail(element);
    }
    Node* temp = head;
    for (int i = 0; i < index - 1; ++i)
    {
        if (temp->next != tail)
        {
            temp = temp->next;
        }
        else
        {
            return pushTail(element);
        }
    }
    Node* var = new Node(element, temp->next);
    temp->next = var;
    ++count;
}

void LinkedList::swap(int index1, int index2)
{
    int val = this->nodeByIndex(index1)->data;
    this->nodeByIndex(index1)->data = this->nodeByIndex(index2)->data;
    this->nodeByIndex(index2)->data = val;
}

int LinkedList::popHead()
{
    if (head == nullptr)
    {
        return 0;
    }
    --count;
    Node* temp = head;
    int value = head->data;
    head = head->next;
    delete temp;
    if (head == nullptr)
    {
        tail = nullptr;
    }
    return value;
}

int LinkedList::popTail()
{
    if (tail == nullptr)
    {
        return 0;
    }
    if (head == tail)
    {
        return popHead();
    }
    Node* temp = head;
    while (temp->next != tail)
    {
        temp = temp->next;
    }
    --count;
    int value = tail->data;
    delete tail;
    tail = temp;
    tail->next = nullptr;
    return value;
}

int LinkedList::extract(int index)
{
    if (index == 0)
    {
        return popHead();
    }
    if (index == count)
    {
        return popTail();
    }

    Node* temp = head;
    for (int i = 0; i < index - 1; ++i)
    {
        if (temp->next != tail)
        {
            temp = temp->next;
        }
        else
        {
            return popTail();
        }
    }
    int ans = temp->next->data;
    Node* toDelete = temp->next;
    temp->next = temp->next->next;
    --count;
    toDelete->~Node();
    return ans;
}
