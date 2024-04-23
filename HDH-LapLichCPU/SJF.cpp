#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnaroundTime;
};

bool compareArrivalTime(const Process &a, const Process &b) {
    return a.arrivalTime < b.arrivalTime;
}

bool compareBurstTime(const Process &a, const Process &b) {
    return a.burstTime < b.burstTime;
}

void calculateWaitingTime(vector<Process> &processes) {
    int n = processes.size();
    vector<bool> visited(n, false);
    int currentTime = 0;
    int completed = 0;

    while (completed != n) {
        int shortestIndex = -1;
        int shortestBurst = INT_MAX;

        for (int i = 0; i < n; ++i) {
            if (!visited[i] && processes[i].arrivalTime <= currentTime && processes[i].burstTime < shortestBurst) {
                shortestIndex = i;
                shortestBurst = processes[i].burstTime;
            }
        }

        if (shortestIndex == -1) {
            currentTime++;
        } else {
            processes[shortestIndex].waitingTime = currentTime - processes[shortestIndex].arrivalTime;
            processes[shortestIndex].turnaroundTime = processes[shortestIndex].waitingTime + processes[shortestIndex].burstTime;
            currentTime += processes[shortestIndex].burstTime;
            visited[shortestIndex] = true;
            completed++;
        }
    }
}

float calculateAverageWaitingTime(const vector<Process> &processes) {
    int totalWaitingTime = 0;
    int n = processes.size();

    for (const Process &p : processes) {
        totalWaitingTime += p.waitingTime;
    }

    return (float) totalWaitingTime / n;
}

int main() {
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    vector<Process> processes(n);

    cout << "Enter arrival time and burst time for each process:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].id = i + 1;
    }

    sort(processes.begin(), processes.end(), compareArrivalTime);

    calculateWaitingTime(processes);

    float avgWaitingTime = calculateAverageWaitingTime(processes);

    cout << "Process\tArrival Time\tBurst Time\tWaiting Time\n";
    for (const Process &p : processes) {
        cout << p.id << "\t\t" << p.arrivalTime << "\t\t" << p.burstTime << "\t\t" << p.waitingTime << endl;
    }

    cout << "\nAverage Waiting Time: " << avgWaitingTime << endl;

    return 0;
}
