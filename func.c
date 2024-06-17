#include <stdio.h>

// func declaration/ function proto type - tell the copiler
// func definition- what to do
//  func call -use the work

// void printHello();
// int main()
// {
//     printHello();
//     printHello();
//     printHello();
//     return 0;
// }

// void printHello()
// {
//     printf("hello \n");
//     printf("My name is Shivi \n");
//     printf("laila");
// }

// void printHello();
// void printBye();
// int main()
// {

//     printHello();
//     printBye();
//     return 0;
// }
// void printHello()
// {
//     printf("Hey hello namaste \n");
// }

// void printBye()
// {
//     printf("Good Bye");
// }

// dec
//  void printLang(char ch);
//  int main()
//  {
//      char ch;
//      scanf("%c", &ch);
//      //call- arguments pass kiye
//      printLang(ch);
//  }
//  //def
//  void printLang(char ch)
//  {
//      if (ch == 'i')
//      {
//          printf("Indian");
//      }
//      else if (ch == 'f')
//      {
//          printf("french");
//      }
//      else
//      {
//          printf("universal");
//      }
//  }

// properties ---
// Execution always starts from main
// A function gets called directly or inirectly form main
// there can be multiple functions ina program

// int sum(int x, int y);

// int main()
// {
//     int a, b;
//     scanf("%d", &a);
//     scanf("%d", &b);
//     //calling staement m jo pass kr rhe h usko argument kehte h //actual parameters
//     int ret = sum(a, b);
//     printf("%d", ret);
//     return 0;
// }
// //aur yahan parameters
// int sum(int x, int y)
// {
//     int sum = x + y;
//     return sum;
// }

void printTable(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printTable(n);

    return 0;
}
void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d \n", i * n);
    }
}

// argu Vs parameters{
// arguments -passed in fnc call
// para-- passe in dec && def

// used to send value
//  used to recieve value

// actual para
// formal para
//}

// Note : function can only return one value at a time
// Changes to a prameter in fnc dont change the values in the calling fnc
// becoz a copy of argument is passed

// int n =4;
// printf("%d",pow(n,2));
