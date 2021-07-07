#include <iostream>

using namespace std;

bool is_subordinate(const char *employee, const char *manager, const char *leaders[][2], size_t n) {
    if (employee == nullptr) {
        return false;
    }

    for (int i = 0; i < n; ++i) {
        if (strcmp(employee, leaders[i][0]) == 0) {
            if (strcmp(manager, leaders[i][1]) == 0) {
                return true;
            } else {
                return is_subordinate(leaders[i][1], manager, leaders, n);
            }
        }
    }

    return false;
}

const char* the_big_boss(const char* leaders[][2], size_t n) {
    const char* bossCandidate = leaders[0][1];
    for (int i = 0; i < n; ++i) {
        bossCandidate = leaders[i][1];

        bool isBoss = true;

        for (int j = 0; j < n; ++j) {
            if (strcmp(bossCandidate, leaders[j][0]) == 0) {
                isBoss = false;
            }
        }

        if (isBoss) {
            return bossCandidate;
        }
    }

    return nullptr;
}

int main() {
    const char *leaders[3][2] = {
            "Ivan Ivanov", "Mariq Ivanova",
            "Mariq Ivanova", "Ivan Dragnev",
            "Ivan Dragnev", "Stoyan Petrov",
    };

    cout << is_subordinate("Ivan Dragnev", "Stoyan Petrov", leaders, 3) << endl;

    cout << the_big_boss(leaders, 3);

}
