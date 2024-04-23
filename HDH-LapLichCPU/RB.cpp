#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct Process {
    int id;
    int arrivalTime;
    int burstTime;
    int remainingTime;
    int waitingTime;
    int turnaroundTime;
};

void calculateWaitingTimeRR(vector<Process> &processes, int quantum) {
    int n = processes.size();
    queue<int> readyQueue;
    int currentTime = 0;

    for (int i = 0; i < n; ++i) {
        processes[i].remainingTime = processes[i].burstTime;
    }

    while (true) {
        bool done = true;

        for (int i = 0; i < n; ++i) {
            if (processes[i].remainingTime > 0) {
                done = false;

                if (processes[i].remainingTime > quantum) {
                    currentTime += quantum;
                    processes[i].remainingTime -= quantum;
                } else {
                    currentTime += processes[i].remainingTime;
                    processes[i].waitingTime = currentTime - processes[i].arrivalTime - processes[i].burstTime;
                    processes[i].remainingTime = 0;
                }
            }
        }

        if (done) break;
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
    int n, quantum;
    cout << "Enter the number of processes: ";
    cin >> n;
    cout << "Enter time quantum: ";
    cin >> quantum;

    vector<Process> processes(n);

    cout << "Enter arrival time and burst time for each process:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime >> processes[i].burstTime;
        processes[i].id = i + 1;
    }

    calculateWaitingTimeRR(processes, quantum);

    float avgWaitingTime = calculateAverageWaitingTime(processes);

    cout << "Process\tArrival Time\tBurst Time\tWaiting Time\n";
    for (const Process &p : processes) {
        cout << p.id << "\t\t" << p.arrivalTime << "\t\t" << p.burstTime << "\t\t" << p.waitingTime << endl;
    }

    cout << "\nAverage Waiting Time: " << avgWaitingTime << endl;

    return 0;
}
