#include "lesson.h"

std::string Lesson::getLessonName()
{
	return Lesson_name;
}
void Lesson::setLessonName(std::string value)
{
	Lesson_name = value;
}

tm Lesson::getLessonTimeStart()
{
	return Lesson_time_start;
}
void Lesson::setLessonTimeStart(int year, int month, int day, int hour, int minute)
{
	Lesson_time_start.tm_year = year;
	Lesson_time_start.tm_mon = month;
	Lesson_time_start.tm_mday = day;
	Lesson_time_start.tm_hour = hour;
	Lesson_time_start.tm_min = minute;
}

tm Lesson::getLessonTimeEnd()
{
	return Lesson_time_end;
}
void Lesson::setLessonTimeEnd(int year, int month, int day, int hour, int minute)
{
	Lesson_time_end.tm_year = year;
	Lesson_time_end.tm_mon = month;
	Lesson_time_end.tm_mday = day;
	Lesson_time_end.tm_hour = hour;
	Lesson_time_end.tm_min = minute;
}

void Lesson::addLessonOwner(std::string value)
{
	Lesson_owners.push_back(value);
}
std::string Lesson::getLessonOwnerAtIndex(int index)
{
	return Lesson_owners[index];
}
std::vector<std::string> Lesson::getLessonOwners()
{
	return Lesson_owners;
}

void Lesson::addLessonLocation(std::string value)
{
	Lesson_locations.push_back(value);
}
std::vector<std::string> Lesson::getLessonLocations()
{
	return Lesson_locations;
}
std::string Lesson::getLessonLocationAtIndex(int index)
{
	return Lesson_locations[index];
}

void Lesson::addLessonGroup(Group groupToAdd)
{
	Lesson_groups.push_back(groupToAdd);
}
Group Lesson::getLessonGroupAtIndex(int index)
{
	return Lesson_groups[index];
}
std::vector<Group> Lesson::getLessonGroups()
{
	return Lesson_groups;
}
