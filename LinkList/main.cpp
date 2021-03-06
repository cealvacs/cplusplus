#include <cstdlib>
#include <iostream>

using namespace std;
const int SIZE = 35;



struct Entry
{
    char name[SIZE];
    int age;
    Entry *next;
};

//-----------------------------------------
Entry* getNewEntry()
{
    char name[SIZE];
    cout << "Enter a new name (ENTER to quit):";
    cin.getline(name,SIZE);
    if (strlen(name) == 0)
    {
    cout << "You pressed ENTER" << endl;
    return NULL;
    }
    Entry *newOne = new Entry;
    strcpy(newOne->name, name);
    cout << "Age: ";
    cin >> newOne->age;
    cin.ignore(1024,'\n');
    newOne->next = NULL;
    return newOne;
}

//------------------------------
bool addFirst(Entry* newEntry, Entry* &head)
{
    if (newEntry == NULL)
    return false;
    newEntry->next = head;
    head = newEntry;
    return true;
}

//---------------------------
Entry* buildList()
{
    Entry *listHead = NULL; // start of the list
    while(true)
    {
        Entry *newOne = getNewEntry();
        // add to the beginning
        if(!addFirst(newOne, listHead))
        break;
    }
    return listHead;
}

//----------------------------
void displayEntry(Entry* e)
{
     cout << e->name << " " << e->age << endl;
}

//--------------------------------
void displayList(Entry *list)
{
for (Entry *current = list; current!=NULL; current = current->next)

     displayEntry(current);
}   




int main(int argc, char *argv[])
{
    Entry* listHead = buildList();
    displayList(listHead);
    system("PAUSE");
    return EXIT_SUCCESS;
}

