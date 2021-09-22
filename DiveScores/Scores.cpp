
#include <iostream>


/*
* Title			: Scores.cpp
* Project		: DiveScores
* Author		: Nelson Wong
* Description	: In the sport of diving, seven judges award a score between 0 and 10 where each score is a floating-point value. The highest and lowest scores are thrown out and the remaining scores are added together. The sum is then multiplied by the degree of difficulty for that dive. The degree of difficulty ranges from 1.2 to 3.8 points. The total is then multiplied by 0.6 to determine the diver's score. Write a program that inputs a degree of difficulty and seven judges' scores and outputs the overall score for that dive. Program should insure score inputs are within allowable limits.
*/

#define JUDGES 7

using namespace std;


double getNum();

double getNum()
{
	float entry = 0.0;
	char buffer[25] = { 0 };
	fgets(buffer, sizeof(buffer), stdin);
	if (sscanf_s(buffer, "%f", &entry) != 1.0)
	{
		entry = -1.0;
	}
	return entry;
}




/*
* Function		: judgesScores()
* Parameters	: double scores[], int numberOfJudges present
* Returns		: 0
* Description	: Takes an array and inputs judges' scores
*/

double judgesScores(double scores[], int numberOfJudges);

double judgesScores(double scores[], int numberOfJudges)
{
	for (int i = 0; i < numberOfJudges; i++)
	{
		cout << "Enter judge " << i + 1 << "'s score: ";
		cin >> scores[i];
	}
	return 0.0;
}



/*
* Function		: difficultyScore()
* Parameters	: None
* Returns		: difficult score
* Description	: Takes an array and inputs judges' scores
*/

double difficultyScore();

double difficultyScore()
{
	double score = 0.0;
	cout << "Enter the dive difficult score: ";
	cin >> score;

	if ((score > 3.8) || (score < 1.2))
	{
		cout << "That difficult score is not valid, re-enter a valid score: ";
	}
	else
	{
		return score;
	}

}
//
//
//
//
//
//double scoreValidity(double score);
//
//double scoreValidity(double score)
//{
//	if ((score > 10) || (score < 1))
//	{
//		printf("The score is not valid, enter a valid score.\n");
//	}
//	else
//	{
//		return score;
//	}
//}
//
//
//
//
//
//void highestLowestScore(double scores[], double highestScore, double lowestScore);
//
//void highestLowestScore(double scores[], double highestScore, double lowestScore)
//{
//	highestScore = scores[0];
//	lowestScore = scores[0];
//	for (int i = 0; i < JUDGES; i++)
//	{
//		if (scores[i] > highestScore)
//		{
//			highestScore = scores[i];
//		}
//		else if (scores[i] < lowestScore)
//		{
//			lowestScore = scores[i];
//		}
//	}
//}
//
//
//
//
//
//void removeScore(double score[], double scoreRemove)
//{
//	for (int i = 0; i < JUDGES; i++)
//	{
//		if (score[i] == scoreRemove)
//		{
//
//		}
//	}
//}
//
//
//
//
//double scoreTotal(double score[]);
//
//double scoreTotal(double score[])
//{
//	double total = 0.0;
//	for (int i = 0; i < JUDGES; i++)
//	{
//		total += score[i];
//	}
//	double difficultScore = difficultyScore(getNum());
//	total *= difficultScore * 0.6;
//	return total;
//}
//
int main(void)
{
	double a[5] = { 0 };
	judgesScores(a, 5);
	difficultyScore();
	return 0;
}
