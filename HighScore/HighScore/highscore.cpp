#include "highScore.h"

namespace highScore
{
	HighScore::HighScore(int _sizePlayers)
	{
		sizePlayers = _sizePlayers;
		playerScore = new score::Score[sizePlayers]();
		psAux = playerScore;
	}

	HighScore::~HighScore()
	{
		delete[] playerScore;
	}

	void HighScore::addScore(score::Score* _playerScore) {
		if (psAux != NULL)
		{
			if (psAux->returnName().c_str() == "No-Name")
			{
				*psAux = *_playerScore;
			}
			else
			{
				do
				{
					psAux++;
					if (psAux != NULL)
					{
						if (psAux->returnName().c_str() == "No-Name")
						{
							*psAux = *_playerScore;
						}
					}
				} while (psAux->returnName().c_str() != "No-Name");
			}
		}
		psAux = playerScore;
	}

	score::Score* HighScore::returnHighScore()
	{
		score::Score* scoreAux;
		score::Score varAux;
		for (int i = 0; i < sizePlayers; i++)
		{
			scoreAux = psAux+i;
			psAux = scoreAux + 1;
			for (int f = i; f < sizePlayers-1; f++)
			{
				if(scoreAux->returnScore() < psAux->returnScore())
				{
					varAux.addAll(scoreAux->returnName(), scoreAux->returnScore());
					scoreAux->addAll(psAux->returnName(), psAux->returnScore());
					psAux->addAll(varAux.returnName(), varAux.returnScore());
				}
				psAux++;
			}
			psAux = playerScore;
		}
		return playerScore;
	}
}