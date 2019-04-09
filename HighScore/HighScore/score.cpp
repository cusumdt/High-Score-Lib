#include "score.h"

namespace score 
{
	Score::Score()
	{
		name = "No-Name";
		score = 0;
	}

	Score::Score(std::string _name, int _score) {
		name = _name;
		score = _score;
	}
	void Score::addName(std::string _name)
	{
		name = _name;
	}

	void Score::addScore(int _score) 
	{
		score = _score;
	}
	void Score::addAll(std::string _name, int _score){
		name = _name;
		score = _score;
	}
}