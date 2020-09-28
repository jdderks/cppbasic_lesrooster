#pragma once
#include "lesson.h"
#include <string>
#include <vector>

class Schedule
{
private:
	// List with all the Lessons within the schedule
	std::vector<Lesson> Lessons;
public:
	// Returns a Lesson at the given index.
	Lesson getLesson(int index);
	// Add a Lesson to the Lessons vector.
	void addLesson(Lesson LessonToAdd);

	// Remove a Lesson at the given index.
	void removeLesson(int index);
};