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

class CLocation
{
   CLocation(int iHorizontal, char chVirtical)
   {
      m_iHorizontalLocation = iHorizontal;
      m_chVirticalLocation = chVirtical;
   }

private:
   int m_iHorizontalLocation;
   char m_chVirticalLocation;
};

// I want to make it so that only CPiece can use and knows about EPiece because no one else needs to know. How can I do this?
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
   void Move(CLocation vNewLocation) { m_vLocation = vNewLocation; }

   EPieceType m_eType;
   CLocation m_vLocation;
};

class CBoard
{
public:
   CBoard();
   void Initialize();
   void DisplayBoard();

private:
   vector<vector<int>> aaiBoard;
};

void CBoard::Initialize()
{
   // Just pawns for now.
   // A2 == 0, 1

   vector<int> aColumn = aaiBoard.at(0);
}

class CPlayer
{
public:
   string m_sName;
   vector<CPiece> m_aPieces;
};

enum class ETurn
{
   White,
   Black,
   Niether
};

class CGame
{
public:
   CPlayer m_vPlayerOne;
   CPlayer m_vPlayerTwo;
   CBoard m_vBoard;
   ETurn m_eTurn;
};
