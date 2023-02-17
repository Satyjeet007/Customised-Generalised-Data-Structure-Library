#include<iostream>
using namespace std;

////////////////////////////////////////////////////////////////
// Structure for Singly Linear and Singly Circular

template <class T>
struct nodeS
{
    T data;
    struct nodeS *next;
};

////////////////////////////////////////////////////////////////
// Structure for Doubly Linear and doubly Circular

template <class T>
struct nodeD
{
    T data;
    struct nodeD *next;
    struct nodeD *prev;
};

////////////////////////////////////////////////////////////////
// Structure Binary Search Tree

template<class T>
struct nodeT 
{
    T data;
    struct nodeT *lchild;
    struct nodeT *rchild;
};

////////////////////////////////////////////////////////////////

// Class of Singly Linear Linked List

template <class T>
class SinglyLL
{
    public:
        struct nodeS<T> * First;

        SinglyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

        int SearchFirstOccurance(T No);
        int SearchLastOccurance(T No);
        int Frequency(T No);
        int CountEven();
        int CountOdd();
        int Addition();
        int Maximum();
        int Minimum();
        int MiddleElement();
        void Reverse();
        
        int iFactorsSum(T No);      // Helper Function
        void DisplayPerfect();  
        void DisplayPrime();
        int CountFactors(T No);        //Helper Function
        int RevDigit(T No);                //Helper Function
        void DisplaySumDigit();
        void DisplayReverseElement();
        void DisplayPallindome();
        void DisplaySmallDigit();
        void DisplayLargeDigit();                      
};      


////////////////////////////////////////////////////////////////

// Class of Singly Circular Linked List

template <class T>
class SinglyCL
{
    public:
        struct nodeS<T> * First;
        struct nodeS<T> * Last;

        SinglyCL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

        int SearchFirstOccurance(T No);
        int SearchLastOccurance(T No);
        int Frequency(T No);
        int CountEven();
        int CountOdd();
        int Addition();
        int Maximum();
        int Minimum();
        int MiddleElement();
        void Reverse();
        
        int iFactorsSum(T No);      // Helper Function
        void DisplayPerfect();   
        void DisplayPrime();
        int CountFactors(T No);        //Helper Function
        int RevDigit(T No);                //Helper Function
        void DisplaySumDigit();
        void DisplayReverseElement();
        void DisplayPallindome();
        void DisplaySmallDigit();
        void DisplayLargeDigit();                      
};

////////////////////////////////////////////////////////////////

// Class of Doubly Linear Linked List

template <class T>
class DoublyLL
{
    public:
        struct nodeD<T> * First;

        DoublyLL();

        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

        int SearchFirstOccurance(T No);
        int SearchLastOccurance(T No);
        int Frequency(T No);
        int CountEven();
        int CountOdd();
        int Addition();
        int Maximum();
        int Minimum();
        int MiddleElement();
        void Reverse();
        
        int iFactorsSum(T No);      // Helper Function
        void DisplayPerfect();   
        void DisplayPrime();
        int CountFactors(T No);        //Helper Function
        int RevDigit(T No);                //Helper Function
        void DisplaySumDigit();
        void DisplayReverseElement();
        void DisplayPallindome();
        void DisplaySmallDigit();
        void DisplayLargeDigit();                      
};

////////////////////////////////////////////////////////////////

// Class of Doubly Circular Linked List

template <class T>
class DoublyCL
{
    public:
        struct nodeD<T> * First;
        struct nodeD<T> * Last;

        DoublyCL();
        
        void InsertFirst(T no);
        void InsertLast(T no);
        void InsertAtPos(T no, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        int Count();

        int SearchFirstOccurance(T No);
        int SearchLastOccurance(T No);
        int Frequency(T No);
        int CountEven();
        int CountOdd();
        int Addition();
        int Maximum();
        int Minimum();
        int MiddleElement();
        void Reverse();
        
        int iFactorsSum(T No);      // Helper Function
        void DisplayPerfect();  
        void DisplayPrime();
        int CountFactors(T No);        //Helper Function
        int RevDigit(T No);                //Helper Function
        void DisplaySumDigit();
        void DisplayReverseElement();
        void DisplayPallindome();
        void DisplaySmallDigit();
        void DisplayLargeDigit();                       
};

////////////////////////////////////////////////////////////////

// Class of Stack 

template <class T>
class Stack
{
    public:
        struct nodeS<T> *First;
        
        Stack();

        bool IsStackEmpty();
        void Push(T no);
        T Pop();
        void Display();
        int Count();

        int SearchFirstOccurance(T No);
        int SearchLastOccurance(T No);
        int Frequency(T No);
        int CountEven();
        int CountOdd();
        int Addition();
        int Maximum();
        int Minimum();
        int MiddleElement();
        void Reverse();
        
        int iFactorsSum(T No);      // Helper Function
        void DisplayPerfect();   
        void DisplayPrime();
        int CountFactors(T No);        //Helper Function
        int RevDigit(T No);                //Helper Function
        void DisplaySumDigit();
        void DisplayReverseElement();
        void DisplayPallindome();
        void DisplaySmallDigit();
        void DisplayLargeDigit();            

};

////////////////////////////////////////////////////////////////

// Class of Queue 

template <class T>
class Queue
{
    public:
        struct nodeS <T>*First;
        
        Queue();

        bool IsQueueEmpty();
        void EnQueue(T no);
        T DeQueue();
        void Display();
        int Count();

        int SearchFirstOccurance(T No);
        int SearchLastOccurance(T No);
        int Frequency(T No);
        int CountEven();
        int CountOdd();
        int Addition();
        int Maximum();
        int Minimum();
        int MiddleElement();
        void Reverse();
        
        int iFactorsSum(T No);      // Helper Function
        void DisplayPerfect();   
        void DisplayPrime();
        int CountFactors(T No);        //Helper Function
        int RevDigit(T No);                //Helper Function
        void DisplaySumDigit();
        void DisplayReverseElement();
        void DisplayPallindome();
        void DisplaySmallDigit();
        void DisplayLargeDigit();    

};

////////////////////////////////////////////////////////////////

// Class of Binery Search Tree

template<class T>
class BST
{
    public:

        struct nodeT <T> *First;

        BST();
        void Insert(T No);
        
        void Inorder(struct nodeT <T> *Root);
        void Preorder(struct nodeT <T> *Root);
        void Postorder(struct nodeT <T> *Root);
        bool Search(T No);
        int CountLeafNode(struct nodeT <T> *Root);
        int CountParentNode(struct nodeT <T> *Root);
        int CountCompleteParentNode(struct nodeT <T> *Root);
};

///////////////////////////////////////////////////////////////////////////////
//
//                  ####################################
//                  #//////////////////////////////////#
//                  #//////////////////////////////////#
//                  #//// Singly Liner Linked List ////#
//                  #//////////////////////////////////#
//                  #//////////////////////////////////#
//                  ####################################
//
///////////////////////////////////////////////////////////////////////////////

template <class T>
SinglyLL <T> :: SinglyLL()
{
    First = NULL;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	InsertFirst
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	None
//	Description 	: 	It Insert Node At First Position In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: InsertFirst(T iNo)
{
    struct nodeS <T> *newn = new  nodeS <T> ;  // PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	InsertLast
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	None
//	Description 	: 	It Insert Node At Last Position In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: InsertLast(T iNo)
{
    struct nodeS <T> *newn = new  nodeS <T>;
    struct nodeS <T> *Temp = First;

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else 
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DeleteFirst
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Delete Node From First Position In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: DeleteFirst()
{
    struct nodeS <T> *Temp = First;

    if(First == NULL)
    {
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete Temp;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DeleteLast
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Delete Node From Last Position In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: DeleteLast()
{
    struct nodeS <T> *Temp = First;

    if(First == NULL)
    {
        return;
    } 
    else if (First->next == NULL)
    { 
        delete First;
        First = NULL;
    }
    else
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        delete Temp->next;
        Temp->next = NULL;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Display
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Display The Content Of Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: Display()
{
  struct nodeS <T> *Temp = First;

    if(First == NULL)
    {
        cout<<"Singly Liner Linked List is Empty "<<"\n";
    }
    else
    {
        cout<<"Elements in Linked List are : "<<"\n";

        while(Temp != NULL)
        {
            cout<<"| "<<Temp->data<<" | -> ";
            Temp = Temp->next;
        }
        cout<<"NULL "<<"\n";
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Count
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Count Number Of Nodes From Singly Liner Linked List 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
int SinglyLL <T> :: Count()
{
    struct nodeS <T> *Temp = First;
    int iCnt = 0;

    if(First == NULL)
    {
        return -1;
    }
    else
    {
        while(Temp != NULL)
        {
            iCnt++;
            Temp = Temp->next;
        }
        return iCnt;
    }
} 

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	InsertAtPos
//	Input			: 	T (Any Type Of Data Type) , Integer
//	Output			: 	None
//	Description 	: 	It Insert Node At Given Position In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: InsertAtPos(T iNo , int iPos)
{   
    int iCount = 0;

    iCount = Count();

    if(iPos < 1 || iPos > iCount +1)
    {
        cout<<"Invaild Position "<<"\n";
        return;
    }
  
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount +1)
    {
        InsertLast(iNo);
    }
    else
    {
        struct nodeS <T> *newn = new  nodeS <T>;
        struct nodeS <T> *Temp = First;

        newn->data = iNo;
        newn->next = NULL;
    
        for(int iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DeleteAtPos
//	Input			: 	Integer
//	Output			: 	None
//	Description 	: 	It Delete Node From Given Position In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: DeleteAtPos(int iPos)
{
    int iCount = 0;

    iCount = Count();

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invaild Position "<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeS <T> *Temp1  = First;
        struct nodeS <T> *Temp2 = NULL;

        for(int iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            Temp1 = Temp1->next;
        }
        Temp2 = Temp1->next;

        Temp1->next = Temp2->next;
        delete Temp2;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	SearchFirstOccurance
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	Search Node From Given Data And Will Return Index Where It Occurance Firstly 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: SearchFirstOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeS <T> *Temp = First; 

    while(Temp != NULL)
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        Temp = Temp->next;
    }

    return iPos;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	SearchLastOccurance
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	Search Node From Given Data And Will Return Index Where It Occurance Lastly 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: SearchLastOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeS <T> *Temp = First; 

    while(Temp != NULL)
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
        }
        iCnt++;
        Temp = Temp->next;
    }

    return iPos;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Frequency
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	It Will Count The Frequency Of Givin Data And Return How Many Times It Occurance 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: Frequency(T No)
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;

    while(Temp != NULL)
    {   
        if(Temp->data == No)
        {
            iCnt++;
        }
        Temp = Temp->next;
    } 

    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	CountEven
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Count Number Of Even Elements In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: CountEven()
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;
    
    while(Temp != NULL)
    {
        if((Temp->data % 2) == 0)
        {
            iCnt++;
        }
        Temp = Temp->next;
    }

    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	CountOdd
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Count Number Of Odd Elements In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: CountOdd()
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;

    while(Temp != NULL)
    {
        if((Temp->data % 2) == 1)
        {
            iCnt++;
        }
        Temp = Temp->next;
    }

    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Addition
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Do All Elements Addition In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: Addition()
{
    int iSum = 0;
    struct nodeS <T> *Temp = First;

    while(Temp != NULL)
    {
        iSum = iSum + Temp->data;
        Temp = Temp->next;
    }
    
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Maximum
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Return The Largest Elements In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: Maximum()
{
    struct nodeS <T> *Temp = First;
    int iMax = Temp->data;

    while(Temp != NULL)
    {
        if(Temp->data > iMax)
        {
            iMax = Temp->data;
        }
        Temp = Temp->next;
    }

    return iMax; 
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Minimum
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Return The Smallest Elements In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: Minimum()
{
    struct nodeS <T> *Temp = First;
    int iMin = Temp->data;

    while(Temp != NULL)
    {
        if(Temp->data < iMin)
        {
            iMin = Temp->data;
        }
        Temp = Temp->next;
    }

    return iMin; 
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	MiddleElement
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Return The Middle Element In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: MiddleElement()
{
    struct nodeS <T> *Teacher = First;
    struct nodeS <T> *Student = First;

    while((Teacher != NULL) && (Teacher->next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }

    return(Student->data);
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Reverse
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Reverse The Singly Liner Linked List Physically
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: Reverse()
{
    struct nodeS <T> *Previous , *Next , *Current;

    Previous = NULL;
    Next = NULL;
    Current = First;

    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;

        Current = Next;
    }

    First = Previous;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	iFactorsSum (Helper Function)
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	It Will Return The Factors Summation Of An Element 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: iFactorsSum(T No)
{ 
    int iSum = 0;

    for(int iCnt = 1 ; iCnt < No ; iCnt++)
    {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayPerfect 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Display The Perfect Elements (Number) In Singly Liner Linked List 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: DisplayPerfect()
{
    struct nodeS <T> *Temp = First;
    int iFact = 0;
    
    cout<<"Perfect Numbers are : "<<"\n";

    while(Temp != NULL)
    {
        iFact = 0;
           
        iFact = iFactorsSum(Temp->data);

        if(iFact == Temp->data)
        {
            cout<<iFact<<"\t";
        }

        Temp = Temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	CountFactors (Helper Function) 
//	Input			: 	T No (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	It Will Return Count Of Factors From A Element  
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: CountFactors(T No)
{
    int iCount = 0;

    for(int iCnt = 1 ; iCnt <= No ; iCnt ++)
    {
        if((No % iCnt) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayPrime 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Display The Prime Elements (Numbers) In Singly Liner Linked List 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: DisplayPrime()
{
    struct nodeS <T> *Temp = First;
    int iFact = 0;

    cout<<"Prime Numbers Are : "<<"\n";

    while(Temp != NULL)
    {
        iFact = CountFactors(Temp->data);

        if(iFact == 2)
        {
            cout<<Temp->data<<"\t";
        }
        
        Temp = Temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	RevDigit (Helper Function)
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Reverse An Digits Of An Element 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyLL <T> :: RevDigit(T No)
{
    int iDigit = 0 , Rev = 0;

    while(No != 0)
    {   
        iDigit = No % 10;

        Rev = (Rev * 10) + iDigit;

        No = No / 10;
    }
    
    return Rev;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplaySumDigit 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Display Summation Of Digits Of An Element In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> ::  DisplaySumDigit()
{
    struct nodeS <T> *Temp = First;
    int iDigit = 0 , iSum = 0 , iNo = 0;

    cout<<"Summtion of Digits are : "<<"\n";

    while(Temp != NULL)
    {
        iNo = Temp->data;
        iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }
        
        cout<<iSum<<"\t";

        Temp = Temp->next;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayReverseElement 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Display Reverse Element (Digits) In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: DisplayReverseElement()
{
    struct nodeS <T> *Temp = First;
    int iRev = 0;

    cout<<"Reverse Elements are : "<<"\n";

    while(Temp != NULL)
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        cout<<iRev<<"\t";

        Temp = Temp->next;
    }
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayPallindome 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Displays All Pallindome Elements In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: DisplayPallindome()
{
    struct nodeS <T> *Temp = First;
    int iRev = 0;
    
    cout<<"Pallindome Numbers are : "<<"\n";

    while(Temp != NULL)
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        if(iRev == Temp->data)
        {
            cout<<Temp->data<<"\t";
        }

        Temp = Temp->next;
    }

    cout<<"\n";
    
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplaySmallDigit 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Displays Smallest Digits Of An Element In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: DisplaySmallDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeS <T> *Temp = First;

    cout<<"Smallest Digits are "<<"\n";

    while(Temp != NULL)
    {   
        iValue = Temp->data;
        iTemp = 9;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            
            if(iDigit < iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        if(iTemp == 9)
        {
            cout<<"0"<<"\t";
        }
        else
        {
            cout<<iTemp<<"\t";
        }

        Temp = Temp->next;
    }

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayLargeDigit 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Displays Largest Digits Of An Element In Singly Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyLL <T> :: DisplayLargeDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeS <T> *Temp = First;

    cout<<"Largest Digits are "<<"\n";

    while(Temp != NULL)
    {   
        iValue = Temp->data;
        iTemp = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;

            if(iDigit > iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        cout<<iTemp<<"\t";

        Temp = Temp->next;
    }

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////
//
//               #####################################
//               #///////////////////////////////////#
//               #///////////////////////////////////#
//               #/// Singly Circular Linked List ///#
//               #///////////////////////////////////#
//               #///////////////////////////////////#
//               #####################################
//
///////////////////////////////////////////////////////////////////////////////

template<class T>
SinglyCL <T> :: SinglyCL()
{
    First = NULL;
    Last = NULL;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	InsertFirst
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	None
//	Description 	: 	It Insert Node At First Position In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL <T> :: InsertFirst(T iNo)
{
    struct nodeS <T> *newn = new nodeS <T>;

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        (Last)->next = First;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	InsertLast
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	None
//	Description 	: 	It Insert Node At Last Position In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL <T> :: InsertLast(T iNo)
{
    struct nodeS <T> *newn = new nodeS <T>;

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = Last = newn;
        (Last)->next = First;
    }
    else
    {
        (Last)->next = newn;
        Last = Last->next;
        Last->next = First;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DeleteFirst
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Delete Node From First Position In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL <T> :: DeleteFirst()
{
    struct nodeS <T> *Temp = First;

    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Temp;
        Last->next = First;
    } 
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DeleteLast
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Delete Node From Last Position In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> :: DeleteLast()
{
    struct nodeS <T> *Temp = First;

    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        while(Temp->next != Last)
        {
            Temp = Temp->next; 
        }
        Last = Temp;
        delete Temp->next;
        Last->next = First;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Display
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Display The Content Of Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL <T> :: Display()
{
    struct nodeS <T> *Temp = First;

    if(First == NULL)
    {
        cout<<"Singly Circular Linked List is Empty "<<"\n";
    }
    else
    { 
        cout<<"Elements in Linked List are : "<<"\n";

        do
        {
            cout<<"| "<<Temp->data<<" | -> ";
            Temp = Temp->next; 
        }while(Temp != Last->next);

        cout<<"\n";

    }

}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Count
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Count Number Of Nodes From Singly Circular Linked List 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
int SinglyCL <T> :: Count()
{
    struct nodeS <T> *Temp = First;
    int iCnt = 0;

    if(First == NULL)
    {
        return -1;
    }
    else
    {
        do 
        {
            iCnt++;
            Temp = Temp->next; 
        }while(Temp != Last->next);

        return iCnt;
    }
} 

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	InsertAtPos
//	Input			: 	T (Any Type Of Data Type) , Integer
//	Output			: 	None
//	Description 	: 	It Insert Node At Given Position In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> :: InsertAtPos(T iNo , int iPos)
{   
    int iCount = 0;

    iCount = Count();
    
    if(iPos < 1 || iPos > iCount +1)
    {
        cout<<"Invaild Position "<<"\n";
        return;
    }
  
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount +1)
    { 
        InsertLast(iNo);
    }
    else
    {
        struct nodeS <T> *newn = new nodeS <T>;
        struct nodeS <T> *Temp = First;

        newn->data = iNo;
        newn->next = NULL;

        for(int iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            Temp = Temp->next;
        }
    
        newn->next = Temp->next;
        Temp->next = newn;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DeleteAtPos
//	Input			: 	Integer
//	Output			: 	None
//	Description 	: 	It Delete Node From Given Position In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template<class T>
void SinglyCL <T> :: DeleteAtPos(int iPos)
{
    int iCount = 0;

    iCount = Count();

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invaild Position "<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeS <T> *Temp1 = First;
        struct nodeS <T> *Temp2 = NULL;

        for(int iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            Temp1 = Temp1->next;
        }
        Temp2 = Temp1->next;

        Temp1->next = Temp2->next;
        delete Temp2;
    }
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	SearchFirstOccurance
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	Search Node From Given Data And Will Return Index Where It Occurance Firstly 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: SearchFirstOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeS <T> *Temp = First; 

    do 
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
            break;
        }
        Temp = Temp->next; 
        iCnt++;

    }while(Temp != Last->next);

    return iPos;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	SearchLastOccurance
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	Search Node From Given Data And Will Return Index Where It Occurance Lastly 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: SearchLastOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeS <T> *Temp = First; 

    do 
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
        }
        Temp = Temp->next; 
        iCnt++;

    }while(Temp != Last->next);

    return iPos;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Frequency
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	It Will Count The Frequency Of Givin Data And Return How Many Times It Occurance 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: Frequency(T No)
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;

    do
    {   
        if(Temp->data == No)
        {
            iCnt++;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iCnt;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	CountEven
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Count Number Of Even Elements In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: CountEven()
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;
    
    do
    {
        if((Temp->data % 2) == 0)
        {
            iCnt++;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iCnt;
} 

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	CountOdd
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Count Number Of Odd Elements In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: CountOdd()
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;

    do
    {
        if((Temp->data % 2) == 1)
        {
            iCnt++;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iCnt;
} 

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Addition
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Do All Elements Addition In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: Addition()
{
    int iSum = 0;
    struct nodeS <T> *Temp = First;

    do
    {
        iSum = iSum + Temp->data;
        Temp = Temp->next;

    }while(Temp != Last->next);
    
    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Maximum
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Return The Largest Elements In Circular Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: Maximum()
{
    struct nodeS <T> *Temp = First;
    int iMax = Temp->data;

    do
    {
        if(Temp->data > iMax)
        {
            iMax = Temp->data;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iMax; 
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Minimum
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Return The Smallest Elements In Circular Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: Minimum()
{
    struct nodeS <T> *Temp = First;
    int iMin = Temp->data;

    do
    {
        if(Temp->data < iMin)
        {
            iMin = Temp->data;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iMin; 
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	MiddleElement
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Return The Middle Element In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: MiddleElement()
{
    struct nodeS <T> *Teacher = First;
    struct nodeS <T> *Student = First;

    do
    {
        Teacher = Teacher->next->next;
        Student = Student->next;

    }while(((Teacher != First) && (Teacher->next != First)));

    return(Student->data);
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	Reverse
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Reverse The Singly Circular Linked List Physically
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> :: Reverse()
{
    struct nodeS <T> *Previous , *Next , *Current;

    Previous = Last; 
    Next = NULL;
    Current = First;

    do
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;

        Current = Next;

    }while(Current != First);

    First = Previous;
    Last = Current;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	iFactorsSum (Helper Function)
//	Input			: 	T (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	It Will Return The Factors Summation Of An Element 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: iFactorsSum(T No)
{ 
    int iSum = 0;

    for(int iCnt = 1 ; iCnt < No ; iCnt++)
    {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayPerfect 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Display The Perfect Elements (Numbers) In Singly Circular Linked List 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> :: DisplayPerfect()
{
    struct nodeS <T> *Temp = First;
    int iFact = 0;
    
    cout<<"Perfect Numbers are : "<<"\n";

    do
    {
        iFact = 0;
           
        iFact = iFactorsSum(Temp->data);

        if(iFact == Temp->data)
        {
            cout<<iFact<<"\t";
        }

        Temp = Temp->next;

    }while(Temp != Last->next);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	CountFactors (Helper Function) 
//	Input			: 	T No (Any Type Of Data Type)
//	Output			: 	Integer
//	Description 	: 	It Will Return Count Of Factors From A Element  
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: CountFactors(T No)
{
    int iCount = 0;

    for(int iCnt = 1 ; iCnt <= No ; iCnt ++)
    {
        if((No % iCnt) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayPrime 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Display The Prime Elements (Numbers) In Singly Circular Linked List 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> :: DisplayPrime()
{
    struct nodeS <T> *Temp = First;
    int iFact = 0;

    cout<<"Prime Numbers Are : "<<"\n";

    do
    {
        iFact = CountFactors(Temp->data);

        if(iFact == 2)
        {
            cout<<Temp->data<<"\t";
        }
        
        Temp = Temp->next;
        
    }while(Temp != Last->next);
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	RevDigit (Helper Function)
//	Input			: 	None
//	Output			: 	Integer
//	Description 	: 	It Will Reverse An Digits Of An Element 
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
int SinglyCL <T> :: RevDigit(T No)
{
    int iDigit = 0 , Rev = 0;

    while(No != 0)
    {   
        iDigit = No % 10;

        Rev = (Rev * 10) + iDigit;

        No = No / 10;
    }
    
    return Rev;
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplaySumDigit 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Display Summation Of Digits Of An Element In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> ::  DisplaySumDigit()
{
    struct nodeS <T> *Temp = First;
    int iDigit = 0 , iSum = 0 , iNo = 0;

    cout<<"Summtion of Digits are : "<<"\n";

    do
    {
        iNo = Temp->data;
        iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }
        
        cout<<iSum<<"\t";

        Temp = Temp->next;

    }while(Temp != Last->next);
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayReverseElement 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Display Reverse Element (Digits) In Circular Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> :: DisplayReverseElement()
{
    struct nodeS <T> *Temp = First;
    int iRev = 0;

    cout<<"Reverse Elements are : "<<"\n";

    do
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        cout<<iRev<<"\t";

        Temp = Temp->next;

    }while(Temp != Last->next);
    
    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayPallindome 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Displays All Pallindome Elements In Circular Liner Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> :: DisplayPallindome()
{
    struct nodeS <T> *Temp = First;
    int iRev = 0;
    
    cout<<"Pallindome Numbers are : "<<"\n";

    do
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        if(iRev == Temp->data)
        {
            cout<<Temp->data<<"\t";
        }

        Temp = Temp->next;

    }while(Temp != Last->next);

    cout<<"\n";
    
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplaySmallDigit 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Displays Smallest Digits Of An Element In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> :: DisplaySmallDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeS <T> *Temp = First;

    cout<<"Smallest Digits are "<<"\n";

    do
    {   
        iValue = Temp->data;
        iTemp = 9;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            
            if(iDigit < iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        if(iTemp == 9)
        {
            cout<<"0"<<"\t";
        }
        else
        {
            cout<<iTemp<<"\t";
        }

        Temp = Temp->next;

    }while(Temp != Last->next);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////////////////
//
//	Function Name	: 	DisplayLargeDigit 
//	Input			: 	None
//	Output			: 	None
//	Description 	: 	It Will Displays Largest Digits Of An Element In Singly Circular Linked List
//	Author			: 	Satyjeet Patil
//	Date			:	15 Feb 2023
//
///////////////////////////////////////////////////////////////////////////////////////////

template <class T>
void SinglyCL <T> :: DisplayLargeDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeS <T> *Temp = First;

    cout<<"Largest Digits are "<<"\n";

    do
    {   
        iValue = Temp->data;
        iTemp = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;

            if(iDigit > iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        cout<<iTemp<<"\t";

        Temp = Temp->next;

    }while(Temp != Last->next);

    cout<<"\n";
}


///////////////////////////////////////////////////////////////////////////////
//
//                  ####################################
//                  #//////////////////////////////////#
//                  #//////////////////////////////////#
//                  #//// Doubly Liner Linked List ////#
//                  #//////////////////////////////////#
//                  #//////////////////////////////////#
//                  ####################################
//
///////////////////////////////////////////////////////////////////////////////

template<class T>
DoublyLL <T> :: DoublyLL()
{
    First = NULL;
}

template<class T>
void DoublyLL <T> :: InsertFirst(T iNo)
{
    struct nodeD <T> *newn = new nodeD <T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        First->prev = newn;
        newn->next = First;
        First = newn;
    }
}

template<class T>
void DoublyLL <T> :: InsertLast(T iNo)
{
    struct nodeD <T> *newn = new  nodeD <T>;
    struct nodeD <T> *Temp = First;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }

        Temp->next = newn;
        newn->prev = Temp;
    }
}

template<class T>
void DoublyLL <T> :: DeleteFirst()
{
    struct nodeD <T> *Temp = First;

    if(First == NULL)
    {
        return;
    } 
    else if ((First)->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        (First) = (First)->next;
        (First)->prev = NULL;
        free(Temp);
    }
}

template<class T>
void DoublyLL <T> :: DeleteLast()
{
    struct nodeD <T> *Temp = First;

    if(First == NULL)
    {
        return;
    }
    else if (First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    { 
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        delete Temp->next;
        Temp->next = NULL;
    }
}

template <class T>
void DoublyLL <T> :: Display()
{
  struct nodeD <T> *Temp = First;

    if(First == NULL)
    {
        cout<<"Doubly Liner Linked List is Empty "<<"\n";
    }
    else
    {
        cout<<"Elements in Linked List are : "<<"\n";

        while(Temp != NULL)
        {
            cout<<"| "<<Temp->data<<" | -> ";
            Temp = Temp->next;
        }
        cout<<"NULL "<<"\n";
    }
}

template<class T>
int DoublyLL <T> :: Count()
{
    struct nodeD <T> *Temp = First;
    int iCnt = 0;

    if(First == NULL)
    {
        return -1;
    }
    else
    {
        while(Temp != NULL)
        {
            iCnt++;
            Temp = Temp->next;
        }
        return iCnt;
    }
} 

template<class T>
void DoublyLL <T> :: InsertAtPos(T iNo , int iPos)
{
    int iCount = 0;

    iCount = Count();

    if(iPos < 1 || iPos > iCount +1)
    {
        cout<<"Invaild Position "<<"\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount +1)
    {
        InsertLast(iNo);
    }
    else
    {
        struct nodeD <T> *newn = new nodeD <T>;
        struct nodeD <T> *Temp = First;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for(int iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            Temp = Temp->next;
        }

        Temp->next->prev = newn;
        newn->next = Temp->next;
        newn->prev = Temp;
        Temp->next = newn;
    }
}

template<class T>
void DoublyLL <T> :: DeleteAtPos(int iPos)
{
    int iCount = 0;

    iCount = Count();

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invaild Position "<<"\n";
        return;
    }
  
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeD <T> *Temp1 = First;
        struct nodeD <T> *Temp2 = NULL;

        for(int iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            Temp1 = Temp1->next;
        }   
        Temp2 = Temp1->next;

        Temp1->next = Temp2->next;
        Temp2->next->prev = Temp1;
        delete Temp2;
    }
}

template <class T>
int DoublyLL <T> :: SearchFirstOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeD <T> *Temp = First; 

    while(Temp != NULL)
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        Temp = Temp->next;
    }

    return iPos;
}

template <class T>
int DoublyLL <T> :: SearchLastOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeD <T> *Temp = First; 

    while(Temp != NULL)
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
        }
        iCnt++;
        Temp = Temp->next;
    }

    return iPos;
}

template <class T>
int DoublyLL <T> :: Frequency(T No)
{
    int iCnt = 0;
    struct nodeD <T> *Temp = First;

    while(Temp != NULL)
    {   
        if(Temp->data == No)
        {
            iCnt++;
        }
        Temp = Temp->next;
    } 

    return iCnt;
}

template <class T>
int DoublyLL <T> :: CountEven()
{
    int iCnt = 0;
    struct nodeD <T> *Temp = First;
    
    while(Temp != NULL)
    {
        if((Temp->data % 2) == 0)
        {
            iCnt++;
        }
        Temp = Temp->next;
    }

    return iCnt;
} 

template <class T>
int DoublyLL <T> :: CountOdd()
{
    int iCnt = 0;
    struct nodeD <T> *Temp = First;

    while(Temp != NULL)
    {
        if((Temp->data % 2) == 1)
        {
            iCnt++;
        }
        Temp = Temp->next;
    }

    return iCnt;
} 

template <class T>
int DoublyLL <T> :: Addition()
{
    int iSum = 0;
    struct nodeD <T> *Temp = First;

    while(Temp != NULL)
    {
        iSum = iSum + Temp->data;
        Temp = Temp->next;
    }
    
    return iSum;
}

template <class T>
int DoublyLL <T> :: Maximum()
{
    struct nodeD <T> *Temp = First;
    int iMax = Temp->data;

    while(Temp != NULL)
    {
        if(Temp->data > iMax)
        {
            iMax = Temp->data;
        }
        Temp = Temp->next;
    }

    return iMax; 
}

template <class T>
int DoublyLL <T> :: Minimum()
{
    struct nodeD <T> *Temp = First;
    int iMin = Temp->data;

    while(Temp != NULL)
    {
        if(Temp->data < iMin)
        {
            iMin = Temp->data;
        }
        Temp = Temp->next;
    }

    return iMin; 
}

template <class T>
int DoublyLL <T> :: MiddleElement()
{
    struct nodeD <T> *Teacher = First;
    struct nodeD <T> *Student = First;

    while((Teacher != NULL) && (Teacher->next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }

    return(Student->data);
}

template <class T>
void DoublyLL <T> :: Reverse()
{
    struct nodeD <T> *Previous , *Next , *Current;

    Previous = NULL;
    Next = NULL;
    Current = First;

    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Current->prev = Next;
        Previous = Current;

        Current = Next;
    }

    First = Previous;
}

template <class T>
int DoublyLL <T> :: iFactorsSum(T No)
{ 
    int iSum = 0;

    for(int iCnt = 1 ; iCnt < No ; iCnt++)
    {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

template <class T>
void DoublyLL <T> :: DisplayPerfect()
{
    struct nodeD <T> *Temp = First;
    int iFact = 0;
    
    cout<<"Perfect Numbers are : "<<"\n";

    while(Temp != NULL)
    {
        iFact = 0;
           
        iFact = iFactorsSum(Temp->data);

        if(iFact == Temp->data)
        {
            cout<<iFact<<"\t";
        }

        Temp = Temp->next;
    }
    cout<<"\n";
}

template <class T>
int DoublyLL <T> :: CountFactors(T No)
{
    int iCount = 0;

    for(int iCnt = 1 ; iCnt <= No ; iCnt ++)
    {
        if((No % iCnt) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

template <class T>
void DoublyLL <T> :: DisplayPrime()
{
    struct nodeD <T> *Temp = First;
    int iFact = 0;

    cout<<"Prime Numbers Are : "<<"\n";

    while(Temp != NULL)
    {
        iFact = CountFactors(Temp->data);

        if(iFact == 2)
        {
            cout<<Temp->data<<"\t";
        }
        
        Temp = Temp->next;
    }
    cout<<"\n";
}


template <class T>
int DoublyLL <T> :: RevDigit(T No)
{
    int iDigit = 0 , Rev = 0;

    while(No != 0)
    {   
        iDigit = No % 10;

        Rev = (Rev * 10) + iDigit;

        No = No / 10;
    }
    
    return Rev;
}

template <class T>
void DoublyLL <T> ::  DisplaySumDigit()
{
    struct nodeD <T> *Temp = First;
    int iDigit = 0 , iSum = 0 , iNo = 0;

    cout<<"Summtion of Digits are : "<<"\n";

    while(Temp != NULL)
    {
        iNo = Temp->data;
        iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }
        
        cout<<iSum<<"\t";

        Temp = Temp->next;
    }
}

template <class T>
void DoublyLL <T> :: DisplayReverseElement()
{
    struct nodeD <T> *Temp = First;
    int iRev = 0;

    cout<<"Reverse Elements are : "<<"\n";

    while(Temp != NULL)
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        cout<<iRev<<"\t";

        Temp = Temp->next;
    }
    cout<<"\n";
}

template <class T>
void DoublyLL <T> :: DisplayPallindome()
{
    struct nodeD <T> *Temp = First;
    int iRev = 0;
    
    cout<<"Pallindome Numbers are : "<<"\n";

    while(Temp != NULL)
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        if(iRev == Temp->data)
        {
            cout<<Temp->data<<"\t";
        }

        Temp = Temp->next;
    }

    cout<<"\n";
    
}

template <class T>
void DoublyLL <T> :: DisplaySmallDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeD <T> *Temp = First;

    cout<<"Smallest Digits are "<<"\n";

    while(Temp != NULL)
    {   
        iValue = Temp->data;
        iTemp = 9;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            
            if(iDigit < iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        if(iTemp == 9)
        {
            cout<<"0"<<"\t";
        }
        else
        {
            cout<<iTemp<<"\t";
        }

        Temp = Temp->next;
    }

    cout<<"\n";
}

template <class T>
void DoublyLL <T> :: DisplayLargeDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeD <T> *Temp = First;

    cout<<"Largest Digits are "<<"\n";

    while(Temp != NULL)
    {   
        iValue = Temp->data;
        iTemp = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;

            if(iDigit > iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        cout<<iTemp<<"\t";

        Temp = Temp->next;
    }

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////
//
//               #####################################
//               #///////////////////////////////////#
//               #///////////////////////////////////#
//               #/// Doubly Circular Linked List ///#
//               #///////////////////////////////////#
//               #///////////////////////////////////#
//               #####################################
//
///////////////////////////////////////////////////////////////////////////////

template<class T>
DoublyCL <T> :: DoublyCL()
{
    First = NULL;
    Last = NULL;
}

template<class T>
void DoublyCL <T> :: InsertFirst(T iNo)
{
    struct nodeD <T> *newn = new nodeD <T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL && Last == NULL)
    {
        First = Last = newn;
        Last->next = First;
        Last->prev = First;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
  
        First->prev = Last;
        Last->next = First;
    }

}

template<class T>
void DoublyCL <T> :: InsertLast(T iNo)
{
  struct nodeD <T> *newn = new nodeD <T>;

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL && Last == NULL)
    {
        First = Last = newn;
        Last->next = First;
        Last->prev = First;
    }
    else
    {
        Last->next = newn;
        Last->next->prev = Last;

        Last = newn;
        Last->next = First;
        First->prev = Last;
    }
}

template<class T>
void DoublyCL <T> :: DeleteFirst()
{
    struct nodeD <T> *Temp = First;

    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    { 
        First = First->next;
        Last->next = First;
        First->prev = Last;
        delete Temp;
    }
}

template<class T>
void DoublyCL <T> ::DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    { 
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = Last->prev;
        delete Last->next;
        Last->next = First;
        First->prev = Last;
    }
}

template<class T>
void DoublyCL <T> :: Display()
{
    struct nodeD <T> *Temp = First;

    if(First == NULL)
    {
        cout<<"Doubly Circular Linked List is Empty "<<"\n";
    }
    else
    { 
        cout<<"Elements in Linked List are : "<<"\n";

        do
        {
            cout<<"| "<<Temp->data<<" | -> ";
            Temp = Temp->next; 
        }while(Temp != Last->next);

        cout<<"\n";

    }

}
template<class T>
int DoublyCL <T> :: Count()
{
    struct nodeD <T> *Temp = First;
    int iCnt = 0;

    if(First == NULL)
    {
        return -1;
    }
    else
    {
        while(Temp != NULL)
        {
            iCnt++;
            Temp = Temp->next;
        }
        return iCnt;
    }
} 

template<class T>
void DoublyCL <T> :: InsertAtPos(T iNo , int iPos)
{
    int iCount = 0;

    iCount = Count();

    if(iPos < 1 || iPos > iCount +1)
    {
        cout<<"Invaild Position "<<"\n";
        return;
    }
  
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if (iPos == iCount +1)
    {
        InsertLast(iNo);
    } 
    else
    {
        struct nodeD <T> *newn = new nodeD <T>;
        struct nodeD <T> *Temp = First;

        newn->data = iNo;
        newn->next = NULL;

        for(int iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            Temp = Temp->next;
        }
    
        newn->next = Temp->next;
        Temp->next = newn;
    }
}

template<class T>
void DoublyCL <T> :: DeleteAtPos(int iPos)
{
    int iCount = 0;

    iCount = Count();

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invaild Position "<<"\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if (iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct nodeD <T> *Temp1 = First;
        struct nodeD <T> *Temp2 = NULL;

        for(int iCnt = 1 ; iCnt < iPos -1 ; iCnt++)
        {
            Temp1 = Temp1->next;
        }
        Temp2 = Temp1->next;

        Temp1->next = Temp2->next;
        delete Temp2;
    } 
}

template <class T>
int DoublyCL <T> :: SearchFirstOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeD <T> *Temp = First; 

    do 
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
            break;
        }
        Temp = Temp->next; 
        iCnt++;

    }while(Temp != Last->next);

    return iPos;
}

template <class T>
int DoublyCL <T> :: SearchLastOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeD <T> *Temp = First; 

    do 
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
        }
        Temp = Temp->next; 
        iCnt++;

    }while(Temp != Last->next);

    return iPos;
}

template <class T>
int DoublyCL <T> :: Frequency(T No)
{
    int iCnt = 0;
    struct nodeD <T> *Temp = First;

    do
    {   
        if(Temp->data == No)
        {
            iCnt++;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iCnt;
}

template <class T>
int DoublyCL <T> :: CountEven()
{
    int iCnt = 0;
    struct nodeD <T> *Temp = First;
    
    do
    {
        if((Temp->data % 2) == 0)
        {
            iCnt++;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iCnt;
} 

template <class T>
int DoublyCL <T> :: CountOdd()
{
    int iCnt = 0;
    struct nodeD <T> *Temp = First;

    do
    {
        if((Temp->data % 2) == 1)
        {
            iCnt++;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iCnt;
} 

template <class T>
int DoublyCL <T> :: Addition()
{
    int iSum = 0;
    struct nodeD <T> *Temp = First;

    do
    {
        iSum = iSum + Temp->data;
        Temp = Temp->next;

    }while(Temp != Last->next);
    
    return iSum;
}

template <class T>
int DoublyCL <T> :: Maximum()
{
    struct nodeD <T> *Temp = First;
    int iMax = Temp->data;

    do
    {
        if(Temp->data > iMax)
        {
            iMax = Temp->data;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iMax; 
}

template <class T>
int DoublyCL <T> :: Minimum()
{
    struct nodeD <T> *Temp = First;
    int iMin = Temp->data;

    do
    {
        if(Temp->data < iMin)
        {
            iMin = Temp->data;
        }
        Temp = Temp->next;

    }while(Temp != Last->next);

    return iMin; 
}


template <class T>
int DoublyCL <T> :: MiddleElement()
{
    struct nodeD <T> *Teacher = First;
    struct nodeD <T> *Student = First;

    do
    {
        Teacher = Teacher->next->next;
        Student = Student->next;

    }while(((Teacher != First) && (Teacher->next != First)));

    return(Student->data);
}

template <class T>
void DoublyCL <T> :: Reverse()
{
    struct nodeD <T> *Previous , *Next , *Current;

    Previous = Last; 
    Next = NULL;
    Current = First;

    do
    {
        Next = Current->next;
        Current->next = Previous;
        Current->prev = Next;
        Previous = Current;

        Current = Next;

    }while(Current != First);

    First = Previous;
    Last = Current;
}

template <class T>
int DoublyCL <T> :: iFactorsSum(T No)
{ 
    int iSum = 0;

    for(int iCnt = 1 ; iCnt < No ; iCnt++)
    {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

template <class T>
void DoublyCL <T> :: DisplayPerfect()
{
    struct nodeD <T> *Temp = First;
    int iFact = 0;
    
    cout<<"Perfect Numbers are : "<<"\n";

    do
    {
        iFact = 0;
           
        iFact = iFactorsSum(Temp->data);

        if(iFact == Temp->data)
        {
            cout<<iFact<<"\t";
        }

        Temp = Temp->next;

    }while(Temp != Last->next);

    cout<<"\n";
}

template <class T>
int DoublyCL <T> :: CountFactors(T No)
{
    int iCount = 0;

    for(int iCnt = 1 ; iCnt <= No ; iCnt ++)
    {
        if((No % iCnt) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

template <class T>
void DoublyCL <T> :: DisplayPrime()
{
    struct nodeD <T> *Temp = First;
    int iFact = 0;

    cout<<"Prime Numbers Are : "<<"\n";

    do
    {
        iFact = CountFactors(Temp->data);

        if(iFact == 2)
        {
            cout<<Temp->data<<"\t";
        }
        
        Temp = Temp->next;
        
    }while(Temp != Last->next);
    cout<<"\n";
}


template <class T>
int DoublyCL <T> :: RevDigit(T No)
{
    int iDigit = 0 , Rev = 0;

    while(No != 0)
    {   
        iDigit = No % 10;

        Rev = (Rev * 10) + iDigit;

        No = No / 10;
    }
    
    return Rev;
}

template <class T>
void DoublyCL <T> ::  DisplaySumDigit()
{
    struct nodeD <T> *Temp = First;
    int iDigit = 0 , iSum = 0 , iNo = 0;

    cout<<"Summtion of Digits are : "<<"\n";

    do
    {
        iNo = Temp->data;
        iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }
        
        cout<<iSum<<"\t";

        Temp = Temp->next;

    }while(Temp != Last->next);
}

template <class T>
void DoublyCL <T> :: DisplayReverseElement()
{
    struct nodeD <T> *Temp = First;
    int iRev = 0;

    cout<<"Reverse Elements are : "<<"\n";

    do
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        cout<<iRev<<"\t";

        Temp = Temp->next;

    }while(Temp != Last->next);
    
    cout<<"\n";
}

template <class T>
void DoublyCL <T> :: DisplayPallindome()
{
    struct nodeD <T> *Temp = First;
    int iRev = 0;
    
    cout<<"Pallindome Numbers are : "<<"\n";

    do
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        if(iRev == Temp->data)
        {
            cout<<Temp->data<<"\t";
        }

        Temp = Temp->next;

    }while(Temp != Last->next);

    cout<<"\n";
    
}

template <class T>
void DoublyCL <T> :: DisplaySmallDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeD <T> *Temp = First;

    cout<<"Smallest Digits are "<<"\n";

    do
    {   
        iValue = Temp->data;
        iTemp = 9;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            
            if(iDigit < iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        if(iTemp == 9)
        {
            cout<<"0"<<"\t";
        }
        else
        {
            cout<<iTemp<<"\t";
        }

        Temp = Temp->next;

    }while(Temp != Last->next);

    cout<<"\n";
}

template <class T>
void DoublyCL <T> :: DisplayLargeDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeD <T> *Temp = First;

    cout<<"Largest Digits are "<<"\n";

    do
    {   
        iValue = Temp->data;
        iTemp = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;

            if(iDigit > iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        cout<<iTemp<<"\t";

        Temp = Temp->next;

    }while(Temp != Last->next);

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////
//
//                  ###################################
//                  #/////////////////////////////////#
//                  #/////////////////////////////////#
//                  #///////////// Stack /////////////#
//                  #/////////////////////////////////#
//                  #/////////////////////////////////#
//                  ###################################
//
///////////////////////////////////////////////////////////////////////////////

template <class T>
Stack <T> :: Stack()
{
    First = NULL;
}

template <class T>
bool Stack <T> :: IsStackEmpty()
{
    if(First == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
void Stack  <T> :: Push(T iNo) 
{
    struct nodeS <T> *newn = new nodeS <T>;

    newn->Data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    cout<<iNo<<" gets pushed in the stack succesfully "<<"\n";
}

template <class T>
T Stack <T> :: Pop() 
{
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty."<<"\n";
        return -1;
    }
    else
    {
        T Value = First->Data;
        struct nodeS <T> *Temp = First;

        First = First->next;
        delete Temp;

        return Value;
    }
} 

template <class T>
void Stack <T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty"<<"\n";
    }
    else
    {
        cout<<"Elements in Linked List are : "<<"\n";

        struct nodeS <T> *Temp = First;

        while(Temp != NULL)
        {
            cout<<"| "<<Temp->Data<<" |-> ";
            Temp = Temp->next;
        }
        cout<<"NULL"<<"\n";
    }
}

template <class T>
int Stack <T> :: Count()
{
    int iCnt = 0;
    if(First == NULL)
    {
        cout<<"Stack is empty"<<"\n";
    }
    else
    {
        struct nodeS <T>*Temp = First;

        while(Temp != NULL)
        {
            iCnt++;
            Temp = Temp->next;
        }
        return iCnt;
    }

}

template <class T>
int Stack <T> :: SearchFirstOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeS <T> *Temp = First; 

    while(Temp != NULL)
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        Temp = Temp->next;
    }

    return iPos;
}

template <class T>
int Stack <T> :: SearchLastOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeS <T> *Temp = First; 

    while(Temp != NULL)
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
        }
        iCnt++;
        Temp = Temp->next;
    }

    return iPos;
}

template <class T>
int Stack <T> :: Frequency(T No)
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;

    while(Temp != NULL)
    {   
        if(Temp->data == No)
        {
            iCnt++;
        }
        Temp = Temp->next;
    } 

    return iCnt;
}

template <class T>
int Stack <T> :: CountEven()
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;
    
    while(Temp != NULL)
    {
        if((Temp->data % 2) == 0)
        {
            iCnt++;
        }
        Temp = Temp->next;
    }

    return iCnt;
} 

template <class T>
int Stack <T> :: CountOdd()
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;

    while(Temp != NULL)
    {
        if((Temp->data % 2) == 1)
        {
            iCnt++;
        }
        Temp = Temp->next;
    }

    return iCnt;
} 

template <class T>
int Stack <T> :: Addition()
{
    int iSum = 0;
    struct nodeS <T> *Temp = First;

    while(Temp != NULL)
    {
        iSum = iSum + Temp->data;
        Temp = Temp->next;
    }
    
    return iSum;
}

template <class T>
int Stack <T> :: Maximum()
{
    struct nodeS <T> *Temp = First;
    int iMax = Temp->data;

    while(Temp != NULL)
    {
        if(Temp->data > iMax)
        {
            iMax = Temp->data;
        }
        Temp = Temp->next;
    }

    return iMax; 
}

template <class T>
int Stack <T> :: Minimum()
{
    struct nodeS <T> *Temp = First;
    int iMin = Temp->data;

    while(Temp != NULL)
    {
        if(Temp->data < iMin)
        {
            iMin = Temp->data;
        }
        Temp = Temp->next;
    }

    return iMin; 
}

template <class T>
int Stack <T> :: MiddleElement()
{
    struct nodeS <T> *Teacher = First;
    struct nodeS <T> *Student = First;

    while((Teacher != NULL) && (Teacher->next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }

    return(Student->data);
}

template <class T>
void Stack <T> :: Reverse()
{
    struct nodeS <T> *Previous , *Next , *Current;

    Previous = NULL;
    Next = NULL;
    Current = First;

    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;

        Current = Next;
    }

    First = Previous;
}

template <class T>
int Stack <T> :: iFactorsSum(T No)
{ 
    int iSum = 0;

    for(int iCnt = 1 ; iCnt < No ; iCnt++)
    {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

template <class T>
void Stack <T> :: DisplayPerfect()
{
    struct nodeS <T> *Temp = First;
    int iFact = 0;
    
    cout<<"Perfect Numbers are : "<<"\n";

    while(Temp != NULL)
    {
        iFact = 0;
           
        iFact = iFactorsSum(Temp->data);

        if(iFact == Temp->data)
        {
            cout<<iFact<<"\t";
        }

        Temp = Temp->next;
    }
    cout<<"\n";
}

template <class T>
int Stack <T> :: CountFactors(T No)
{
    int iCount = 0;

    for(int iCnt = 1 ; iCnt <= No ; iCnt ++)
    {
        if((No % iCnt) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

template <class T>
void Stack <T> :: DisplayPrime()
{
    struct nodeS <T> *Temp = First;
    int iFact = 0;

    cout<<"Prime Numbers Are : "<<"\n";

    while(Temp != NULL)
    {
        iFact = CountFactors(Temp->data);

        if(iFact == 2)
        {
            cout<<Temp->data<<"\t";
        }
        
        Temp = Temp->next;
    }
    cout<<"\n";
}


template <class T>
int Stack <T> :: RevDigit(T No)
{
    int iDigit = 0 , Rev = 0;

    while(No != 0)
    {   
        iDigit = No % 10;

        Rev = (Rev * 10) + iDigit;

        No = No / 10;
    }
    
    return Rev;
}

template <class T>
void Stack <T> ::  DisplaySumDigit()
{
    struct nodeS <T> *Temp = First;
    int iDigit = 0 , iSum = 0 , iNo = 0;

    cout<<"Summtion of Digits are : "<<"\n";

    while(Temp != NULL)
    {
        iNo = Temp->data;
        iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }
        
        cout<<iSum<<"\t";

        Temp = Temp->next;
    }
}

template <class T>
void Stack <T> :: DisplayReverseElement()
{
    struct nodeS <T> *Temp = First;
    int iRev = 0;

    cout<<"Reverse Elements are : "<<"\n";

    while(Temp != NULL)
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        cout<<iRev<<"\t";

        Temp = Temp->next;
    }
    cout<<"\n";
}

template <class T>
void Stack <T> :: DisplayPallindome()
{
    struct nodeS <T> *Temp = First;
    int iRev = 0;
    
    cout<<"Pallindome Numbers are : "<<"\n";

    while(Temp != NULL)
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        if(iRev == Temp->data)
        {
            cout<<Temp->data<<"\t";
        }

        Temp = Temp->next;
    }

    cout<<"\n";
    
}

template <class T>
void Stack <T> :: DisplaySmallDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeS <T> *Temp = First;

    cout<<"Smallest Digits are "<<"\n";

    while(Temp != NULL)
    {   
        iValue = Temp->data;
        iTemp = 9;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            
            if(iDigit < iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        if(iTemp == 9)
        {
            cout<<"0"<<"\t";
        }
        else
        {
            cout<<iTemp<<"\t";
        }

        Temp = Temp->next;
    }

    cout<<"\n";
}

template <class T>
void Stack <T> :: DisplayLargeDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeS <T> *Temp = First;

    cout<<"Largest Digits are "<<"\n";

    while(Temp != NULL)
    {   
        iValue = Temp->data;
        iTemp = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;

            if(iDigit > iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        cout<<iTemp<<"\t";

        Temp = Temp->next;
    }

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////
//
//                  ###################################
//                  #/////////////////////////////////#
//                  #/////////////////////////////////#
//                  #///////////// Stack /////////////#
//                  #/////////////////////////////////#
//                  #/////////////////////////////////#
//                  ###################################
//
///////////////////////////////////////////////////////////////////////////////

template <class T>
Queue <T> :: Queue()
{
    First = NULL;
}

template <class T>
bool Queue <T> :: IsQueueEmpty()
{
    if(First == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
void Queue  <T> :: EnQueue(T iNo) 
{
    struct nodeS <T> *newn = new nodeS <T>;
    struct nodeS <T> *Temp = First;

    newn->Data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
    cout<<iNo<<" gets EnQueue in the Queue succesfully "<<"\n";
}

template <class T>
T Queue  <T> :: DeQueue() 
{
    if(First == NULL)
    {
        cout<<"Unable to DeQueue the element as Queue is empty."<<"\n";
        return (T)-1;
    }
    else
    {
        T Value = First->Data;
        struct nodeS <T> *Temp = First;

        First = First->next;
        delete Temp;

        return Value;

    }
} 

template <class T>
void Queue <T> :: Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty"<<"\n";
    }
    else
    {
        cout<<"Elements in Linked List are : "<<"\n";

        struct nodeS <T>*Temp = First;

        while(Temp != NULL)
        {
            cout<<"| "<<Temp->Data<<" |-> ";
            Temp = Temp->next;
        }
        cout<<"NULL"<<"\n";
    }
}

template <class T>
int Queue <T> :: Count()   
{
    int iCnt = 0;
    if(First == NULL)
    {
        cout<<"Stack is empty"<<"\n";
    }
    else
    {
        struct nodeS <T>*Temp = First;

        while(Temp != NULL)
        {
            iCnt++;
            Temp = Temp->next;
        }
        return iCnt;
    }

}

template <class T>
int Queue <T> :: SearchFirstOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeS <T> *Temp = First; 

    while(Temp != NULL)
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
            break;
        }
        iCnt++;
        Temp = Temp->next;
    }

    return iPos;
}

template <class T>
int Queue <T> :: SearchLastOccurance(T No)
{
    int iPos  = -1 , iCnt = 1;
    struct nodeS <T> *Temp = First; 

    while(Temp != NULL)
    {
        if(Temp->data == No)
        {
            iPos = iCnt;
        }
        iCnt++;
        Temp = Temp->next;
    }

    return iPos;
}

template <class T>
int Queue <T> :: Frequency(T No)
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;

    while(Temp != NULL)
    {   
        if(Temp->data == No)
        {
            iCnt++;
        }
        Temp = Temp->next;
    } 

    return iCnt;
}

template <class T>
int Queue <T> :: CountEven()
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;
    
    while(Temp != NULL)
    {
        if((Temp->data % 2) == 0)
        {
            iCnt++;
        }
        Temp = Temp->next;
    }

    return iCnt;
} 

template <class T>
int Queue <T> :: CountOdd()
{
    int iCnt = 0;
    struct nodeS <T> *Temp = First;

    while(Temp != NULL)
    {
        if((Temp->data % 2) == 1)
        {
            iCnt++;
        }
        Temp = Temp->next;
    }

    return iCnt;
} 

template <class T>
int Queue <T> :: Addition()
{
    int iSum = 0;
    struct nodeS <T> *Temp = First;

    while(Temp != NULL)
    {
        iSum = iSum + Temp->data;
        Temp = Temp->next;
    }
    
    return iSum;
}

template <class T>
int Queue <T> :: Maximum()
{
    struct nodeS <T> *Temp = First;
    int iMax = Temp->data;

    while(Temp != NULL)
    {
        if(Temp->data > iMax)
        {
            iMax = Temp->data;
        }
        Temp = Temp->next;
    }

    return iMax; 
}

template <class T>
int Queue <T> :: Minimum()
{
    struct nodeS <T> *Temp = First;
    int iMin = Temp->data;

    while(Temp != NULL)
    {
        if(Temp->data < iMin)
        {
            iMin = Temp->data;
        }
        Temp = Temp->next;
    }

    return iMin; 
}

template <class T>
int Queue <T> :: MiddleElement()
{
    struct nodeS <T> *Teacher = First;
    struct nodeS <T> *Student = First;

    while((Teacher != NULL) && (Teacher->next != NULL))
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }

    return(Student->data);
}

template <class T>
void Queue <T> :: Reverse()
{
    struct nodeS <T> *Previous , *Next , *Current;

    Previous = NULL;
    Next = NULL;
    Current = First;

    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;

        Current = Next;
    }

    First = Previous;
}

template <class T>
int Queue <T> :: iFactorsSum(T No)
{ 
    int iSum = 0;

    for(int iCnt = 1 ; iCnt < No ; iCnt++)
    {
        if((No % iCnt) == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

template <class T>
void Queue <T> :: DisplayPerfect()
{
    struct nodeS <T> *Temp = First;
    int iFact = 0;
    
    cout<<"Perfect Numbers are : "<<"\n";

    while(Temp != NULL)
    {
        iFact = 0;
           
        iFact = iFactorsSum(Temp->data);

        if(iFact == Temp->data)
        {
            cout<<iFact<<"\t";
        }

        Temp = Temp->next;
    }
    cout<<"\n";
}

template <class T>
int Queue <T> :: CountFactors(T No)
{
    int iCount = 0;

    for(int iCnt = 1 ; iCnt <= No ; iCnt ++)
    {
        if((No % iCnt) == 0)
        {
            iCount++;
        }
    }

    return iCount;
}

template <class T>
void Queue <T> :: DisplayPrime()
{
    struct nodeS <T> *Temp = First;
    int iFact = 0;

    cout<<"Prime Numbers Are : "<<"\n";

    while(Temp != NULL)
    {
        iFact = CountFactors(Temp->data);

        if(iFact == 2)
        {
            cout<<Temp->data<<"\t";
        }
        
        Temp = Temp->next;
    }
    cout<<"\n";
}


template <class T>
int Queue <T> :: RevDigit(T No)
{
    int iDigit = 0 , Rev = 0;

    while(No != 0)
    {   
        iDigit = No % 10;

        Rev = (Rev * 10) + iDigit;

        No = No / 10;
    }
    
    return Rev;
}

template <class T>
void Queue <T> ::  DisplaySumDigit()
{
    struct nodeS <T> *Temp = First;
    int iDigit = 0 , iSum = 0 , iNo = 0;

    cout<<"Summtion of Digits are : "<<"\n";

    while(Temp != NULL)
    {
        iNo = Temp->data;
        iSum = 0;
        
        while(iNo != 0)
        {
            iDigit = iNo % 10;

            iSum = iSum + iDigit;

            iNo = iNo / 10;
        }
        
        cout<<iSum<<"\t";

        Temp = Temp->next;
    }
}

template <class T>
void Queue <T> :: DisplayReverseElement()
{
    struct nodeS <T> *Temp = First;
    int iRev = 0;

    cout<<"Reverse Elements are : "<<"\n";

    while(Temp != NULL)
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        cout<<iRev<<"\t";

        Temp = Temp->next;
    }
    cout<<"\n";
}

template <class T>
void Queue <T> :: DisplayPallindome()
{
    struct nodeS <T> *Temp = First;
    int iRev = 0;
    
    cout<<"Pallindome Numbers are : "<<"\n";

    while(Temp != NULL)
    {
        iRev = 0;

        iRev = RevDigit(Temp->data);

        if(iRev == Temp->data)
        {
            cout<<Temp->data<<"\t";
        }

        Temp = Temp->next;
    }

    cout<<"\n";
    
}

template <class T>
void Queue <T> :: DisplaySmallDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeS <T> *Temp = First;

    cout<<"Smallest Digits are "<<"\n";

    while(Temp != NULL)
    {   
        iValue = Temp->data;
        iTemp = 9;

        while(iValue != 0)
        {
            iDigit = iValue % 10;
            
            if(iDigit < iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        if(iTemp == 9)
        {
            cout<<"0"<<"\t";
        }
        else
        {
            cout<<iTemp<<"\t";
        }

        Temp = Temp->next;
    }

    cout<<"\n";
}

template <class T>
void Queue <T> :: DisplayLargeDigit()
{
    int iValue = 0 , iTemp = 0 , iDigit = 0;
    struct nodeS <T> *Temp = First;

    cout<<"Largest Digits are "<<"\n";

    while(Temp != NULL)
    {   
        iValue = Temp->data;
        iTemp = 0;

        while(iValue != 0)
        {
            iDigit = iValue % 10;

            if(iDigit > iTemp)
            {
                iTemp = iDigit;
            }

            iValue = iValue / 10;
        }

        cout<<iTemp<<"\t";

        Temp = Temp->next;
    }

    cout<<"\n";
}

///////////////////////////////////////////////////////////////////////////////
//
//               ######################################
//               #////////////////////////////////////#
//               #////////////////////////////////////#
//               #//////// Binery Search Tree ////////#
//               #////////////////////////////////////#
//               #////////////////////////////////////#
//               ######################################
//
///////////////////////////////////////////////////////////////////////////////

template<class T>
BST <T> :: BST()
{
    First = NULL;
}

template<class T>
void BST <T> :: Insert(T No)
{
    struct nodeT <T> *newn = new nodeT <T>;

    newn->data = No;
    newn->lchild = NULL;
    newn->rchild = NULL;

    struct nodeT <T> *Temp = First;

    if(First == NULL)
    {
        First = newn;
        Temp = newn;
    }
    else
    {
        while(1)
        {
            if(No > Temp->data)
            {
                if(Temp->rchild == NULL)
                {
                    Temp->rchild = newn;
                    break;
                }
                Temp = Temp->rchild;
            }
            else if(No < Temp->data)
            {
                if(Temp->lchild == NULL)
                {
                    Temp->lchild = newn;
                    break;
                }
                Temp = Temp->lchild;
            }
            else if(Temp->data == No)
            {
                delete newn;
                cout<<"Duplicate element not allowed."<<"\n";
                break;
            }
        }        
    }
}

template<class T>
void BST <T> :: Inorder(struct nodeT <T> *Root)
{
    if(Root != NULL)
    {
        Inorder(Root->lchild);
        cout<<Root->data<<"\t";
        Inorder(Root->rchild);
    }
}

template<class T>
void BST <T> :: Preorder(struct nodeT <T> *Root)
{
    if(Root != NULL)
    {
        cout<<Root->data<<"\t";
        Preorder(Root->lchild);
        Preorder(Root->rchild);
    }
}

template<class T>
void BST <T> :: Postorder(struct nodeT <T>  *Root)
{
    if(Root != NULL)
    {
        Postorder(Root->lchild);
        Postorder(Root->rchild);
        cout<<Root->data<<"\t";
    }
}

template<class T>
bool BST <T> :: Search(T No)
{
    bool flag = false;
    struct nodeT <T> *Temp = First;

    while(Temp != NULL)
    {
        if(Temp->data == No)
        {
            flag = true;
            break;
        }
        else if(No > Temp->data)
        {
            Temp = Temp->rchild;
        }
        else if(No < Temp->data)
        {
            Temp = Temp->lchild;
        }
    }

    return flag;
}

template<class T>
int BST <T> ::  CountLeafNode(struct nodeT <T> *Root)
{
    static int iCnt = 0;

    if(Root != NULL)
    {
        if((Root->lchild == NULL) && (Root->rchild == NULL))
        {
            iCnt++;
        }
        CountLeafNode(Root->lchild);
        CountLeafNode(Root->rchild);
    }

    return iCnt;
}

template <class T>
int BST <T> :: CountParentNode(struct nodeT <T> *Root)
{
    static int Count = 0;

    if(Root != NULL)
    {
        if((Root->lchild != NULL) || (Root ->rchild != NULL))
        {
            Count++;
        } 
        CountParentNode(Root->lchild);
        CountParentNode(Root->rchild);
    }

    return Count;
}

template <class T>
int BST <T> :: CountCompleteParentNode(struct nodeT <T> *Root)
{
    static int Count = 0;

    if(Root != NULL)
    {
        if((Root->lchild != NULL) && (Root ->rchild != NULL))
        {
            Count++;
        } 
        CountCompleteParentNode(Root->lchild);
        CountCompleteParentNode(Root->rchild);
    }

    return Count;
}


int main()
{
    SinglyLL <int> iObj1;
    SinglyCL <int> iObj2;
    DoublyLL <int> iObj3;
    DoublyCL <int> iObj4;
    
    Stack <int> iObj5;
    Queue <int> iObj6;
    BST <int> iObj7;

    SinglyLL <char> cObj1;
    SinglyCL <char> cObj2;
    DoublyLL <char> cObj3;
    DoublyCL <char> cObj4;
    
    Stack <char> cObj5;
    Queue <char> cObj6;
    BST <char> cObj7;

    return 0;
}