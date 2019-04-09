/*



*/
#include "../HighScore/highScore.h"
#include "../HighScore/score.h"
#include <iostream>

using namespace std;
using namespace score;
using namespace highScore;
void main()
{


	Score * puntaje1 = new Score("pepe", 100);

	Score * puntaje2 = new Score("pipo", 200);
	
	HighScore* score = new HighScore(2);

	Score* arrayScore = new Score[2];

	cout << "Hola" << endl;
	score->addScore(puntaje1);
	score->addScore(puntaje2);

	arrayScore = score->returnHighScore();

	for (int i = 0; i < 2 ; i++)
	{
		cout << "Nombre: " << arrayScore->returnName().c_str() << "Puntaje:: " << arrayScore->returnScore() << endl;
		arrayScore++;
		
	}
	arrayScore -= 2;

	if (score != NULL)
	{
		delete score;
	}
	if (arrayScore != NULL)
	{
		delete arrayScore;
	}
	cin.get();

}