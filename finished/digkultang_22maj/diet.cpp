#include <stdio.h>
#include <iostream>

int main() {
    int weeks, goal_reached_at;
    int increases = 0;
    float goal;
    bool goal_reached;

    std::cout << "Number of weeks: ";
    std::cin >> weeks;
    std::cout << "Weight to reach (kg): ";
    std::cin >> goal;

    float weight[weeks];

    for(int week = 0; week < weeks; week++) {
        printf("Week %i: ", week+1);
        std::cin >> weight[week];
    }

    for(int num = 0; num <= weeks; num++) {
        if(weight[num] < weight[num+1]) { increases++; }
        if(weight[num] <= goal && goal_reached == false) {
            goal_reached = true;
            goal_reached_at = num;
        }
    }

    if(goal_reached == true) {
        printf("Aunt Mary reached the set target first on Week %i\n", goal_reached_at+1);
        printf("Her weight increased %i times from one week to the next.", increases);
    }
}

