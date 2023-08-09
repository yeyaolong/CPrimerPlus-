#pragma once
#include <string>
struct free_throws
{
	std::string name;
	int made;
	int attemps;
	float percent;
};

void display(const free_throws& ft);
void set_pc(free_throws& ft);

free_throws& accumulate(free_throws& target, const free_throws& source);