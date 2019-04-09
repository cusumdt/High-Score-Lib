#ifndef SCORE_H
#define SCORE_H
#include <iostream>


namespace score {
	
	class Score
	{
	private:
		std::string name;
		int score;
	public:
		Score();
		Score(std::string _name, int _score);
		void addName(std::string _name);
		std::string returnName() { return name; }
		void addScore(int _score);
		int returnScore() { return score; }
		void addAll(std::string _name, int _score);
	};
}


#endif // !SCORE_H
