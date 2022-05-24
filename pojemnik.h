
#ifndef POJEMNIK_H
#define POJEMNIK_H
#include <iostream>


using namespace std;

template<typename T>
struct pojemnik
{
    private:

    struct Node
    {
        T value;
        Node* next;
        Node(T v, Node* n = nullptr)
        {
            value = v;
            next = n;
        }
    };

    Node* head = nullptr;
    int counter = 0;


    public:



    pojemnik() = default;

    ~pojemnik();

    void insert(T);


    T pop();

    void remove(T);

    void clear();

    int size() const;


    void print() const;








};

template<typename T>
pojemnik<T>::~pojemnik()
{
    clear();
}
template<typename T>
void pojemnik<T>::insert(T value)
{
    Node* pred = nullptr;
    Node* succ = head;
    while(succ != nullptr && succ->value < value)
    {
        pred = succ;
        succ = succ->next;

    }
    Node* creator = new Node(value, succ);
    if(pred != nullptr)
        pred->next = creator;
    else
        head = creator;
    counter++;
}

template<typename T>
T pojemnik<T>::pop()
{
    if(counter == 0)
        throw logic_error ("Pusta lista");
    Node* killer = head;
    T value = killer->value;
    head = killer->next;
    delete killer;
    counter--;
    return value;
}

template<typename T>
void pojemnik<T>::remove(T value)
{
     Node* pred = nullptr;
     Node* succ = head;
      while(succ != nullptr && succ->value < value)
    {
        pred = succ;
        succ = succ->next;

    }
    if(succ == nullptr || succ->value != value)
        throw logic_error ("Nie znaleziono");
    Node* killer = succ;
    succ = succ->next;
    if(pred != nullptr)
    {
        pred->next = succ;
    }
    else
    {
        head = succ;
    }


    delete killer;
    counter--;

}

template<typename T>
void pojemnik<T>::clear()
{
    while(head != nullptr)
    {
        Node* killer = head;
        head = killer->next;
        delete killer;
    }
    counter=0;
}


template<typename T>
int pojemnik<T>::size() const
{
    return counter;
}

template<typename T>
void pojemnik<T>::print() const
{
    if(counter == 0)
        cout<<"Pusta lista";
    Node* walker = head;
    while(walker != nullptr)
    {
        cout << walker->value << " ";
        walker = walker->next;
    }
    cout<<endl;
}






#endif // POJEMNIK_H

