#pragma once

class Group 
{
private:
    std::string name;

public:
    Group() {}
    
    Group(const std::string& groupName) : name(groupName) {}

    std::string getName() const 
    {
        return name;
    }
};

class Teacher
{
private:
    std::string name;

public:
    Teacher() {}
    
    Teacher(const std::string& teacherName) : name(teacherName) {}

    std::string getName() const
    {
        return name;
    }
};

class Subject
{
private:
    std::string name;

public:
    Subject() {}
    
    Subject(const std::string& subjectName) : name(subjectName) {}

    std::string getName() const
    {
        return name;
    }
};

class Day
{
private:
    std::string day;

public:
    Day() {}

    Day(const std::string& dayOfWeek) : day(dayOfWeek) {}

    std::string getName() const
    {
        return day;
    }
};

class Schedule
{
private:
    Group group;
    Day day;
    Subject subject;
    Teacher teacher;

public:
    Schedule() {}

    Schedule* begin()
    {
        return this;
    }

    Schedule(const Group& group, const Day& day, const Subject& subject, const Teacher& teacher)
        : group(group), day(day), subject(subject), teacher(teacher) {}

    Group getGroup() const
    {
        return group;
    }

    Day getDay() const
    {
        return day;
    }

    Subject getSubject() const
    {
        return subject;
    }

    Teacher getTeacher() const
    {
        return teacher;
    }
};

void printScheduleTable(const Schedule* schedule, int scheduleSize) 
{
    std::cout << std::endl;
    std::cout << std::left << std::setw(7) << "Index" << std::setw(12) << "Group" << std::setw(14) << "Day" << std::setw(65) << "Subject" << std::setw(10) << "Teacher" << std::endl;
    std::cout << std::endl;
    
    for (int i = 0; i < scheduleSize; i++) 
    {
        std::cout << std::left << std::setw(7) << i;
        std::cout << std::setw(12) << schedule[i].getGroup().getName();
        std::cout << std::setw(14) << schedule[i].getDay().getName();
        std::cout << std::setw(65) << schedule[i].getSubject().getName();
        std::cout << std::setw(10) << schedule[i].getTeacher().getName();
        std::cout << std::endl;
    }
}



