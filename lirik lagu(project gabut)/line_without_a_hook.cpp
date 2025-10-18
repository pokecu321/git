#include<iostream>
#include<chrono>
#include<thread>
#include<vector>
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
    cout << "--===line without a hook - Ricky Montgomery===--" << endl << endl;
    vector<string> lyrics = {
        "'Cause there is something, and there is nothing",
        "There is nothing in between",
        "And in my eyes, there is a tiny dancer",
        "Watching over me, he's singing",
        "She's a, she's a lady, and I am just a boy",
        "He's singing, She's a, she's a lady, and I am just a line without a hook",
        "",
        "Oh, baby, I am a wreck when I'm without you",
        "I need you here to stay" ,
        "Broke all my bones that day I found you",
        "Crying at the lake",
        "Was it something I said to make you feel like you're a burden? Oh",
        "And if I could take it all back",
        "I swear that I would pull you from the tide"
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