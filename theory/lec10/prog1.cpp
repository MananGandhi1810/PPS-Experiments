#include <iostream>
using namespace std;

class Product
{
  int id;
  string name;
  int quantity;
  float price;

public:
  Product()
  {
    id = 0;
    name = "Product 1";
    quantity = 100;
    price = 1000;
  }
  Product(int i, string n, int q, float p)
  {
    id = i;
    name = n;
    quantity = q;
    price = p;
  }
  void add();
  bool update(int);
  bool canRemove(int);
  void display();
};

void Product::add()
{
  cout << "Enter product id: ";
  cin >> id;
  cout << "Enter product name: ";
  cin >> name;
  cout << "Enter product quantity: ";
  cin >> quantity;
  cout << "Enter product price: ";
  cin >> price;
}

bool Product::update(int required_id)
{
  if (id != required_id)
  {
    return false;
  }
  char choice;
  cout << "Do you want to change name (Y/N): ";
  cin >> choice;
  if (choice == 'Y')
  {
    cout << "Enter new name: ";
    cin >> name;
  }
  cout << "Do you want to change quantity (Y/N): ";
  cin >> choice;
  if (choice == 'Y')
  {
    cout << "Enter new quantity: ";
    cin >> quantity;
  }
  cout << "Do you want to change price (Y/N): ";
  cin >> choice;
  if (choice == 'Y')
  {
    cout << "Enter new price: ";
    cin >> price;
  }
  return true;
}

bool Product::canRemove(int required_id)
{
  return required_id == id;
}

void Product::display()
{
  cout << "Name: " << name << endl
       << "Quantity: " << quantity << endl
       << "Price: " << price << endl
       << endl;
}

int main()
{
  Product p[1000];
  int count = -1;
  bool running = true;
  while (running)
  {
    int choice;
    cout << "1. Add" << endl
         << "2. Update" << endl
         << "3. Remove" << endl
         << "4. Display" << endl
         << "Enter your choice: ";
    cin >> choice;
    int required_id = 0;
    bool found = false;
    switch (choice)
    {
    case 1:
      count++;
      p[count].add();
      break;

    case 2:
      cout << "Enter ID to update: ";
      cin >> required_id;
      for (int i = 0; i <= count; i++)
      {
        found = p[i].update(required_id);
      }
      if (!found)
      {
        cout << "Product not found" << endl;
      }
      break;

    case 3:
      cout << "Enter ID to remove: ";
      cin >> required_id;
      for (int i = 0; i <= count; i++)
      {
        if (p[i].canRemove(i))
        {
          found = true;
          p[i] = p[count];
          count--;
        }
      }
      if (!found)
      {
        cout << "Product not found" << endl;
      }
      break;

    case 4:
      for (int i = 0; i <= count; i++)
      {
        p[i].display();
      }
      break;

    case 0:
      running = false;
      break;

    default:
      break;
    }
  }
}