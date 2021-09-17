#include <stdlib.h>
#include <stdio.h>


/*
* Title			: Scores.cpp
* Project		: DiveScores
* Author		: Nelson Wong
* Description	: In the sport of diving, seven judges award a score between 0 and 10 where each score is a floating-point value. The highest and lowest scores are thrown out and the remaining scores are added together. The sum is then multiplied by the degree of difficulty for that dive. The degree of difficulty ranges from 1.2 to 3.8 points. The total is then multiplied by 0.6 to determine the diver's score. Write a program that inputs a degree of difficulty and seven judges' scores and outputs the overall score for that dive. Program should insure score inputs are within allowable limits.
*/

#define JUDGES 7


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





double judgeScores(double scores[])
{
	for (int i = 0; i < JUDGES; i++)
	{
		printf("Enter the score from judge %d", i);
		scores[i] = getNum();
	}
	return 1.0;
}





double difficultyScore(double score)
{
	if ((score > 3.8) || (score < 1.2))
	{
		printf("The difficulty is not a valid score");
	}
	else
	{
		return score;
	}

}



double scoreValidity(double score)
{
	if ((score > 10) || (score < 1))
	{
		printf("The score is not valid, enter a valid score.\n");
	}
	else
	{
		return score;
	}
}









int main(void)
{
	return 0;
}
