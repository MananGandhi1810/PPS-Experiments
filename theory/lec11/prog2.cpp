/*
Write a C++ program to create a class Book with attribuites title, author, and ISBN. Implement a system where books can be added, searched and displayed.
*/
#include <iostream>
using namespace std;

class Book
{
  string title;
  string author;
  unsigned long int isbn;

public:
  Book()
  {
    title = "The C++ Programming Book";
    author = "Bjarne Stroustrup";
    isbn = 12344;
  }
  Book(string t, string a, int i)
  {
    title = t;
    author = a;
    isbn = i;
  }
  Book(Book &temp)
  {
    title = temp.title;
    author = temp.author;
    isbn = temp.isbn;
  }
  ~Book()
  {
    cout << "Book is destroyed" << endl;
  }
  bool matchByTitle(string);
  bool matchByAuthor(string);
  bool matchByISBN(int);
  void display();
};

bool Book::matchByTitle(string t)
{
  return t == title;
}

bool Book::matchByAuthor(string a)
{
  return a == author;
}

bool Book::matchByISBN(int i)
{
  return i == isbn;
}

void Book::display()
{
  cout << "Title: " << title << endl
       << "Author: " << author << endl
       << "ISBN: " << isbn << endl;
}

int main()
{
  Book books[10000];
  int count = -1;
  int choice;
  bool running = true;
  string t, a;
  int i;
  int search_choice;
  string search_query;
  int search_isbn;
  while (running)
  {
    cout << endl
         << "0. Exit" << endl
         << "1. Create" << endl
         << "2. Search" << endl
         << "3. Display" << endl
         << "Enter choice: ";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << "Enter title: ";
      cin >> t;
      cout << "Enter author: ";
      cin >> a;
      cout << "Enter ISBN: ";
      cin >> i;
      count++;
      books[i] = Book(t, a, i);
      break;

    case 2:
      cout << "1. Search by Title" << endl
           << "2. Search by Author" << endl
           << "3. Search by ISBN" << endl
           << "Enter choice: ";
      cin >> search_choice;
      if (search_choice == 1)
      {
        cout << "Enter title: ";
        cin >> search_query;
        for (int i = 0; i <= count; i++)
        {
          if (books[i].matchByTitle(search_query))
          {
            books[i].display();
            cout << endl;
          }
        }
      }
      else if (search_choice == 2)
      {
        cout << "Enter author: ";
        cin >> search_query;
        for (int i = 0; i <= count; i++)
        {
          if (books[i].matchByAuthor(search_query))
          {
            books[i].display();
            cout << endl;
          }
        }
      }
      else if (search_choice == 3)
      {
        cout << "Enter ISBN: ";
        cin >> search_isbn;
        for (int i = 0; i <= count; i++)
        {
          if (books[i].matchByISBN(search_isbn))
          {
            books[i].display();
            cout << endl;
          }
        }
      }
      break;

    case 3:
      for (int i = 0; i <= count; i++)
      {
        books[i].display();
        cout << endl;
      }
      break;

    case 4:
      running = false;
      break;

    default:
      break;
    }
  }
}