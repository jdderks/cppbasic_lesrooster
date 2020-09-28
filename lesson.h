#pragma once
#include "group.h"
#include <string>
#include <vector>

class Lesson
{
private:
	std::string Lesson_name;
	tm Lesson_time_start;
	tm Lesson_time_end;
	std::vector<std::string> Lesson_owners;
	std::vector<std::string> Lesson_locations;
	std::vector<Group> Lesson_groups;

public:

	std::string getLessonName();
	void setLessonName(std::string value);
	void setLessonTimeStart(int year, int month, int day, int hour, int minute);
	tm getLessonTimeStart();
	void setLessonTimeEnd(int year, int month, int day, int hour, int minute);
	tm getLessonTimeEnd();
	void addLessonOwner(std::string value);
	std::string getLessonOwnerAtIndex(int index);
	std::vector<std::string> getLessonOwners();
	void addLessonLocation(std::string value);
	std::string getLessonLocationAtIndex(int index);
	std::vector<std::string> getLessonLocations();
	void addLessonGroup(Group groupToAdd);
	Group getLessonGroupAtIndex(int index);
	std::vector<Group> getLessonGroups();
};