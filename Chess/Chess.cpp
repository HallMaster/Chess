// Chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <utility>
#include <vector>

using namespace std;

int main()
{
   std::cout << "test";
   system("pause");
}

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

// I want to make it so that only CPiece can use and knows about EPiece because no one else need to know. How can I do this?
enum class EPieceType
{
   Pawn,
   Kinght,
   Bishop,
   Rook,
   Queen,
   King
};

class CPiece
{
public:
   void Move(CPosition vNewPosition) { m_vPosition = vNewPosition; }

   EPieceType m_eType;
   CPosition m_vPosition;
};

class CBoard
{
public:
   void DisplayBoard();

private:
   vector<vector<int>> aBoard;
};
