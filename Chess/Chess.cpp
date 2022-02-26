// Chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <utility>
#include <vector>
#include <array>

using namespace std;

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
   
   // Just display a board.
   void DisplayBoard();

private:
   array<array<int, 8>, 8> m_aaiBoard;
};

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

int main()
{

   
   std::cout << "test";
   system("pause");
}
