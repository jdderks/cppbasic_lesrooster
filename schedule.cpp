#include "schedule.h"

Lesson Schedule::getLesson(int nmbr) {
	return Lessons[nmbr];
}

void Schedule::addLesson(Lesson toAdd) {
	Lessons.push_back(toAdd);
}

void Schedule::removeLesson(int nmbr) {
	Lessons.erase(Lessons.begin() + nmbr);
}