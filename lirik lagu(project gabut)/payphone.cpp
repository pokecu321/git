#include <iostream>
#include <thread>
#include <chrono>
#include <vector>
using namespace std;

void animate_text(const string& text, double delay, const string& color) {
    cout << color; // Set color
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::duration<double>(delay));
    }
    cout << "\033[0m" << endl; // Reset color
}

int main() {
    vector<string> lyrics = {
        "I'm at a payyyphone, tryin' to caaalllll home",
        "All of my change I spentttt on youuuu",
        "Where have the timeesss gone? Baby, it's allll wrong",
        "Where are the planss we made for twoo?",
        "If happy ever afters did exisstttt",
        "I would still be holding youu like thiss",
        "And all those fairytales are full of sh*tt",
        "One more f*cking love song, I'll be sickkkkk, ohhhhhh",
    };

    vector<string> colors = {
        "\033[31m", // Red
        "\033[32m", // Green
        "\033[33m", // Yellow
        "\033[34m", // Blue
        "\033[35m", // Magenta
        "\033[36m", // Cyan
        "\033[91m", // Light Red
        "\033[92m"  // Light Green
    };

    double delay = 0.09; // Delay between characters in seconds
    for (size_t i = 0; i < lyrics.size(); ++i) {
        animate_text(lyrics[i], delay, colors[i % colors.size()]);
        this_thread::sleep_for(chrono::milliseconds(500)); // Pause between lines
    }
    return 0;
}