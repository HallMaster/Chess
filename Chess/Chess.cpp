// Chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <utility>

using namespace std;

int main()
{
   system("pause");
   std::cout << "Hello World!\n";
}

// I want to make it so that only CPiece can use CPostion. How can I do this?
class CPosition
{
   CPosition(int iHorizontal, char chVirtical)
   {
      m_iHorizontalLocation = iHorizontal;
      m_chVirticalLocation = chVirtical;
   }

private:
   int m_iHorizontalLocation;
   char m_chVirticalLocation;
};

class CPiece
{
public:
   void Move(CPosition vNewPosition) { m_vPosition = vNewPosition; }

   string m_type;
   CPosition m_vPosition;

};
