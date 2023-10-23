#include <iostream>
#include <string>
#include <iomanip>
#include "dataLibrary.h"

int main()
{
    int numberOfGroups = 4;
    Group* groups = new Group[numberOfGroups] { Group("Ist-11s"), Group("Iso-11s"), Group("Ism-11s"), Group("Iss-11s") };
    
    int numberOfDays = 5;
    Day* days = new Day[numberOfDays]{ Day("Monday"), Day("Tuesday"), Day("Wednesday"), Day("Thursday"), Day("Friday") };
    
    int numberOfTeachers = 12;
    Teacher* teachers = new Teacher[numberOfTeachers]
    { Teacher("Halaychuk"),
      Teacher("Bilas"),
      Teacher("Poleschuk"),
      Teacher("Pavlyshyn"),
      Teacher("Lapan"),
      Teacher("Fetsko"),
      Teacher("Vinnychenko"),
      Teacher("Gumenny"),
      Teacher("Shabaikovich"),
      Teacher("Shelestak"),
      Teacher("Surmach"),
      Teacher("Chernysh") };

    int numberOfSubjects = 19;
    Subject* subjects = new Subject[numberOfSubjects]
    { Subject("General ethnology"),
      Subject("Cultural anthropology"),
      Subject("Introduction to history"),
      Subject("History of Ukraine"),
      Subject("History of sociology"),
      Subject("Ukrainian language"),
      Subject("The basics of museology and archival science"),
      Subject("History of ancient civilizations of the East"),
      Subject("Foreign language"),
      Subject("Ancient history of Ukraine"),
      Subject("Basics of interpersonal communication and public speaking"),
      Subject("Sociology of virtual reality"),
      Subject("Cultural anthropology"),
      Subject("History and theory of museology"),
      Subject("Introduction to the history and teaching profession"),
      Subject("History of ancient civilizations and methods of its teaching"),
      Subject("Historical local lore"),
      Subject("Civilizations of the ancient world"),
      Subject("Visualization and information for sociologists") };
    
    int scheduleSize = 55;
    Schedule* schedule = new Schedule[scheduleSize]
    {
       Schedule(groups[0], days[0], subjects[0], teachers[0]),
       Schedule(groups[0], days[0], subjects[5], teachers[5]),
       Schedule(groups[0], days[0], subjects[2], teachers[2]),
       Schedule(groups[0], days[0], subjects[1], teachers[1]),
       Schedule(groups[0], days[1], subjects[5], teachers[5]),
       Schedule(groups[0], days[1], subjects[7], teachers[7]),
       Schedule(groups[0], days[1], subjects[6], teachers[6]),
       Schedule(groups[0], days[1], subjects[8], teachers[8]),
       Schedule(groups[0], days[2], subjects[6], teachers[6]),
       Schedule(groups[0], days[2], subjects[8], teachers[8]),
       Schedule(groups[0], days[2], subjects[7], teachers[7]),
       Schedule(groups[0], days[3], subjects[12], teachers[1]),
       Schedule(groups[0], days[3], subjects[2], teachers[2]),
       Schedule(groups[0], days[3], subjects[0], teachers[0]),
       Schedule(groups[1], days[0], subjects[1], teachers[1]),
       Schedule(groups[1], days[0], subjects[5], teachers[5]),
       Schedule(groups[1], days[0], subjects[0], teachers[0]),
       Schedule(groups[1], days[0], subjects[14], teachers[2]),
       Schedule(groups[1], days[0], subjects[8], teachers[8]),
       Schedule(groups[1], days[1], subjects[5], teachers[5]),
       Schedule(groups[1], days[1], subjects[15], teachers[7]),
       Schedule(groups[1], days[1], subjects[6], teachers[6]),
       Schedule(groups[1], days[1], subjects[8], teachers[8]),
       Schedule(groups[1], days[2], subjects[15], teachers[7]),
       Schedule(groups[1], days[2], subjects[6], teachers[6]),
       Schedule(groups[1], days[3], subjects[0], teachers[0]),
       Schedule(groups[1], days[3], subjects[1], teachers[1]),
       Schedule(groups[2], days[0], subjects[5], teachers[5]),
       Schedule(groups[2], days[0], subjects[9], teachers[9]),
       Schedule(groups[2], days[0], subjects[16], teachers[9]),
       Schedule(groups[2], days[0], subjects[8], teachers[8]),
       Schedule(groups[2], days[1], subjects[5], teachers[5]),
       Schedule(groups[2], days[1], subjects[9], teachers[9]),
       Schedule(groups[2], days[1], subjects[16], teachers[9]),
       Schedule(groups[2], days[1], subjects[10], teachers[10]),
       Schedule(groups[2], days[1], subjects[8], teachers[8]),
       Schedule(groups[2], days[2], subjects[17], teachers[7]),
       Schedule(groups[2], days[3], subjects[13], teachers[6]),
       Schedule(groups[2], days[3], subjects[17], teachers[7]),
       Schedule(groups[2], days[3], subjects[17], teachers[7]),
       Schedule(groups[2], days[4], subjects[13], teachers[6]),
       Schedule(groups[2], days[4], subjects[10], teachers[10]),
       Schedule(groups[3], days[0], subjects[11], teachers[11]),
       Schedule(groups[3], days[0], subjects[3], teachers[3]),
       Schedule(groups[3], days[0], subjects[4], teachers[4]),
       Schedule(groups[3], days[0], subjects[8], teachers[8]),
       Schedule(groups[3], days[1], subjects[5], teachers[5]),
       Schedule(groups[3], days[1], subjects[4], teachers[4]),
       Schedule(groups[3], days[1], subjects[3], teachers[3]),
       Schedule(groups[3], days[1], subjects[11], teachers[11]),
       Schedule(groups[3], days[2], subjects[18], teachers[11]),
       Schedule(groups[3], days[2], subjects[8], teachers[8]),
       Schedule(groups[3], days[3], subjects[11], teachers[11]),
       Schedule(groups[3], days[4], subjects[4], teachers[4]),
       Schedule(groups[3], days[4], subjects[18], teachers[11]) };
    
    std::cout << "IVAN FRANKO NATIONAL UNIVERSITY OF LVIV" << std::endl;
    std::cout << std::endl << std::endl;
    std::cout << "< Schedule of classes for students of the Faculty of History for the I semester >" << std::endl;
    std::cout << std::endl;

    int choice;

    while (true) {
        std::cout << std::endl;
        std::cout << "< Select an option from the list >" << std::endl;
        std::cout << "1. The entire schedule" << std::endl;
        std::cout << "2. Schedule for a separate group" << std::endl;
        std::cout << "3. Administration" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cin >> choice;

        std::string currentDay = "";

        if (choice == 1)
        {
            bool processedGroups[4] = { false, false, false, false };

            for (int i = 0; i < scheduleSize; i++)
            {
                const std::string groupName = schedule[i].getGroup().getName();
                int groupIndex = -1;

                if (groupName == "Ist-11s") groupIndex = 0;
                else if (groupName == "Iso-11s") groupIndex = 1;
                else if (groupName == "Ism-11s") groupIndex = 2;
                else if (groupName == "Iss-11s") groupIndex = 3;

                if (groupIndex != -1 && !processedGroups[groupIndex])
                {
                    processedGroups[groupIndex] = true;

                    std::cout << std::endl;
                    std::cout << "Class schedule for the group " << groupName << std::endl;
                    std::cout << std::endl;

                    std::string currentDay = "";

                    for (int j = 0; j < scheduleSize; j++)
                    {
                        if (schedule[j].getGroup().getName() == groupName)
                        {
                            std::string dayOfWeek = schedule[j].getDay().getName();
                            if (dayOfWeek != currentDay)
                            {
                                std::cout << "Day: " << dayOfWeek << std::endl;
                                currentDay = dayOfWeek;
                            }
                            std::cout << "Subject: " << schedule[j].getSubject().getName() << ", " << schedule[j].getTeacher().getName() << std::endl;
                        }
                    }
                }
            }
        }
        
        else if (choice == 2)
        {
            int groupNumber;
            bool returnToMenu = false;
            do {
                std::cout << std::endl;
                std::cout << "< Select a group from the list >" << std::endl;
                std::cout << "1. Ist-11s" << std::endl;
                std::cout << "2. Iso-11s" << std::endl;
                std::cout << "3. Ism-11s" << std::endl;
                std::cout << "4. Iss-11s" << std::endl;
                std::cout << "5. Return to the previous page" << std::endl;
                std::cin >> groupNumber;

                if (groupNumber >= 1 && groupNumber <= 4)
                {
                    std::string groupName;
                    switch (groupNumber) 
                    {
                    case 1:
                        groupName = "Ist-11s";
                        break;
                    case 2:
                        groupName = "Iso-11s";
                        break;
                    case 3:
                        groupName = "Ism-11s";
                        break;
                    case 4:
                        groupName = "Iss-11s";
                        break;
                    default:
                        break;
                    }

                    std::cout << std::endl;
                    std::cout << "Class schedule for the group " << groupName << std::endl;
                    std::cout << std::endl;
                    std::string currentDay = "";

                    for (int i = 0; i < scheduleSize; i++) 
                    {
                        if (schedule[i].getGroup().getName() == groupName) 
                        {
                            std::string dayOfWeek = schedule[i].getDay().getName();
                            if (dayOfWeek != currentDay) 
                            {
                                std::cout << "Day: " << dayOfWeek << std::endl;
                                currentDay = dayOfWeek;
                            }
                            std::cout << "Subject: " << schedule[i].getSubject().getName() << ", " << schedule[i].getTeacher().getName() << std::endl;
                        }
                    }
                }
                else if (groupNumber == 5)
                {
                    returnToMenu = true;
                }
                else
                {
                    std::cout << std::endl;
                    std::cout << "Invalid option. Please try again." << std::endl;
                }
            } while (!returnToMenu);
        }
        else if (choice == 3)
        {
            int adminOption;
            bool returnToMenu = false;

            do {
            std::cout << std::endl;
            std::cout << "< Administration menu >" << std::endl;
            std::cout << "1. Change the class" << std::endl;
            std::cout << "2. Add the class" << std::endl;
            std::cout << "3. Remove the class" << std::endl;
            std::cout << "4. Return to the previous page" << std::endl;
            std::cout << std::endl;
            std::cout << "Pease note that you need to know the index of the class to change the schedule." << std::endl;
            std::cout << "Enter 0 to check the current index." << std::endl;
            std::cin >> adminOption;

            if (adminOption == 0)
            {
                std::cout << std::endl;
                std::cout << "< Schedule Table >" << std::endl;
                printScheduleTable(schedule, scheduleSize);
            }
            else if (adminOption == 1)
            {
                std::cout << std::endl;
                std::cout << "Enter the class index to be changed: " << std::endl;
                int index;
                std::cin >> index;

                if (index >= 0 && index < scheduleSize)
                {
                    std::string newSubjectName, newTeacherName;
                    std::cin.ignore();
                    std::cout << "Enter the name of the subject: ";
                    std::getline(std::cin, newSubjectName);
                    std::cout << "Enter the teacher's name: ";
                    std::getline(std::cin, newTeacherName);

                    Subject newSubject(newSubjectName);
                    Teacher newTeacher(newTeacherName);

                    schedule[index] = Schedule(schedule[index].getGroup(), schedule[index].getDay(), newSubject, newTeacher);

                    std::cout << std::endl;
                    std::cout << "The class at index " << index << " has been updated." << std::endl;
                }
                else
                {
                    std::cout << "Invalid index. Please try again." << std::endl;
                }
            }
            else if (adminOption == 2)
            {
                std::cout << std::endl;
                std::cout << "Enter the class index after which the new one should be inserted: " << std::endl;
                int index;
                std::cin >> index;

                if (index >= 0 && index <= scheduleSize)
                {
                    std::string newGroupName, newDayName, newSubjectName, newTeacherName;
                    std::cin.ignore();
                    std::cout << "Enter the group name: ";
                    std::getline(std::cin, newGroupName);
                    std::cout << "Enter the day of the week: ";
                    std::getline(std::cin, newDayName);
                    std::cout << "Enter the name of the subject: ";
                    std::getline(std::cin, newSubjectName);
                    std::cout << "Enter the teacher's name: ";
                    std::getline(std::cin, newTeacherName);

                    Group newGroup(newGroupName);
                    Day newDay(newDayName);
                    Subject newSubject(newSubjectName);
                    Teacher newTeacher(newTeacherName);

                    Schedule* newSchedule = new Schedule[scheduleSize + 1];

                    for (int i = 0; i <= index; i++)
                    {
                        newSchedule[i] = schedule[i];
                    }

                    newSchedule[index + 1] = Schedule(newGroup, newDay, newSubject, newTeacher);

                    for (int i = index + 2; i <= scheduleSize; i++)
                    {
                        newSchedule[i] = schedule[i - 1];
                    }

                    delete[] schedule;

                    schedule = newSchedule;
                    scheduleSize++;

                    std::cout << std::endl;
                    std::cout << "The class after the index " << index << " has been updated." << std::endl;
                }
                else
                {
                    std::cout << std::endl;
                    std::cout << "Invalid index. Please try again." << std::endl;
                }
            }
            else if (adminOption == 3)
            {
                std::cout << std::endl;
                std::cout << "Enter the class index to be removed: " << std::endl;
                int index;
                std::cin >> index;

                if (index >= 0 && index < scheduleSize)
                {
                    Schedule* newSchedule = new Schedule[scheduleSize - 1];

                    int newIndex = 0;
                    for (int i = 0; i < scheduleSize; i++)
                    {
                        if (i != index)
                        {
                            newSchedule[newIndex] = schedule[i];
                            newIndex++;
                        }
                    }

                    delete[] schedule;

                    schedule = newSchedule;
                    scheduleSize--;

                    std::cout << std::endl;
                    std::cout << "The class at index " << index << " has been removed." << std::endl;
                }
                else
                {
                    std::cout << std::endl;
                    std::cout << "Invalid index. Please try again." << std::endl;
                }
            }
            
            else if (adminOption == 4)
            {
                returnToMenu = true;
            }
            else
            {
                std::cout << std::endl;
                std::cout << "Invalid option. Please try again." << std::endl;
            }
            } while (!returnToMenu);
        }
        else if (choice == 4)
        {
            std::cout << std::endl;
            std::cout << "You have exited the program." << std::endl;
            break;
        }
        else
        {
            std::cout << std::endl;
            std::cout << "Invalid option. Please try again." << std::endl;
        }
    }

    delete[] groups;
    delete[] days;
    delete[] teachers;
    delete[] subjects;
    delete[] schedule;

    return 0;
}