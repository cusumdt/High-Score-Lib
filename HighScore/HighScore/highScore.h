#ifndef HIGHSCORE_H
#define HIGHSCORE_H
#include "score.h"
namespace highScore
{
	
	class HighScore
	{

	private:
		int sizePlayers;
		score::Score* playerScore;
		score::Score* psAux;
	public:
		HighScore(int _sizePlayers);
		~HighScore();
		void addScore(score::Score* _playerScore);
		score::Score* returnHighScore();

	};
}

#endif // !HIGHSCORE_H
