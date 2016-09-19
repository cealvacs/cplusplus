#include <cstdlib>
#include <iostream>

using namespace std;
/*
struct Stack
{
       int info;
               
};
*/
void displayMenu();
void push(int myStack[], int &top);
void pop (int myStack[], int &top);
void displayStack (int myStack[], int top);



const int MAX = 5;
int main(int argc, char *argv[])
{
    
    int stack[MAX];
    int top = -1;
    int choice;
    
    
    
    do
    {
        displayMenu();
        cin >> choice;
        switch (choice)
        {
               case 1:
                    push (stack, top);
                    break;
               case 2:
                    pop (stack, top);
                    break;
               case 3:
                    displayStack (stack, top);
                    break;
               case 4:
                    cout << "Thank you for using program" << endl;
                    exit (0);
                    break;
               default:
                       cout << "Wrong choice. Enter 1,2,3,4 only" << endl;
        }
    
    }while(choice !=4);
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void push(int myStack[], int &top)
{
     int item;
     if (top == MAX)
     {
             cout << "Stack is Full" << endl;
             return;
     }
     else 
     {
             cout << "Item: ";
             cin >> item;
             top++;
     }
     
     myStack [top] = item;
}

void pop (int myStack[], int &top)
{
     int item;
     if (top == -1)
     {
            cout << "Stack is Empty" << endl;
             return; 
     }     
     else
     {
         item = myStack[top];
         top--;
     }
     
     cout << "Popped: " << item << endl;
     
}

void displayStack (int myStack[], int top)
{
     for (int i =0; i <=  top; i++)
     {
         cout  << myStack[i] << endl;
     }
}

void displayMenu()
{
     cout << "1. Push " << endl;
     cout << "2. Pop " << endl;
     cout << "3. Display " << endl;
     cout << "4. Exit " << endl;
     
     cout << "Enter your choice" ;     
}
