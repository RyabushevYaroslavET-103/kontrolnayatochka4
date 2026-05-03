//zanatie9
//variant28

//#include <iostream>
//#include <string>
//using namespace std;
//
//const int N = 20;
//
//enum Genre {
//    RPG,
//    STRATEGY,
//    RACING,
//    AIRSIM,
//    SHOOTER
//};
//
//enum Studio {
//    NINTENDO,
//    EA,
//    UBISOFT,
//    CAPCOM,
//    SEGA,
//    SUPERCELL
//};
//
//struct Platforms {
//    bool pc;
//    bool mobile;
//    bool gamepad;
//};
//
//struct Game {
//    string name;
//    Studio studio;
//    double price;
//    int audience;
//    Platforms platform;
//    Genre genre;
//    bool canBuild;
//};
//
//string studioName(Studio s) {
//    if (s == NINTENDO) return "Nintendo";
//    if (s == EA) return "EA";
//    if (s == UBISOFT) return "Ubisoft";
//    if (s == CAPCOM) return "Capcom";
//    if (s == SEGA) return "Sega";
//    if (s == SUPERCELL) return "Supercell";
//    return "Unknown";
//}
//
//string genreName(Genre g) {
//    if (g == RPG) return "RPG";
//    if (g == STRATEGY) return "Strategy";
//    if (g == RACING) return "Racing";
//    if (g == AIRSIM) return "Air simulator";
//    if (g == SHOOTER) return "Shooter";
//    return "Unknown";
//}
//
//void printOneGame(Game g) {
//    cout << "Name: " << g.name << endl;
//    cout << "Studio: " << studioName(g.studio) << endl;
//    cout << "Price: " << g.price << endl;
//    cout << "Audience: " << g.audience << endl;
//    cout << "PC: " << g.platform.pc << endl;
//    cout << "Mobile: " << g.platform.mobile << endl;
//    cout << "Gamepad: " << g.platform.gamepad << endl;
//    cout << "Genre: " << genreName(g.genre) << endl;
//    cout << "Can build: " << g.canBuild << endl;
//    cout << "----------------------" << endl;
//}
//
//void printArray(Game a[], int n) {
//    for (int i = 0; i < n; i++) {
//        printOneGame(a[i]);
//    }
//}
//
//bool isNintendoMobile(Game g) {
//    if (g.studio == NINTENDO && g.platform.mobile == true)
//        return true;
//    return false;
//}
//
//bool isMobileBuild(Game g) {
//    if (g.platform.mobile == true && g.canBuild == true)
//        return true;
//    return false;
//}
//
//int copyNintendoMobile(Game src[], Game dst[], int n) {
//    int k = 0;
//    for (int i = 0; i < n; i++) {
//        if (isNintendoMobile(src[i])) {
//            dst[k] = src[i];
//            k++;
//        }
//    }
//    return k;
//}
//
//int copyMobileBuild(Game src[], Game dst[], int n) {
//    int k = 0;
//    for (int i = 0; i < n; i++) {
//        if (isMobileBuild(src[i])) {
//            dst[k] = src[i];
//            k++;
//        }
//    }
//    return k;
//}
//
//void bubbleSort(Game a[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = 0; j < n - i - 1; j++) {
//            if (a[j].audience > a[j + 1].audience) {
//                Game temp = a[j];
//                a[j] = a[j + 1];
//                a[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int findGame(Game a[], int n, string name) {
//    for (int i = 0; i < n; i++) {
//        if (a[i].name == name) {
//            return i;
//        }
//    }
//    return -1;
//}
//
//void printGameByName(Game a[], int n, string name) {
//    int pos = findGame(a, n, name);
//    if (pos != -1) {
//        printOneGame(a[pos]);
//    }
//    else {
//        cout << "Game not found" << endl;
//    }
//}
//
//void printTwoLeastPopular(Game a[], int n) {
//    if (n < 2) {
//        cout << "Not enough games" << endl;
//        return;
//    }
//    printOneGame(a[0]);
//    printOneGame(a[1]);
//}
//
//void changeGame(Game& g) {
//    cout << "Enter new name: ";
//    cin >> ws;
//    getline(cin, g.name);
//
//    cout << "Enter new price: ";
//    cin >> g.price;
//
//    cout << "Enter new audience: ";
//    cin >> g.audience;
//
//    cout << "Enter platforms (pc mobile gamepad, 0 or 1): ";
//    cin >> g.platform.pc >> g.platform.mobile >> g.platform.gamepad;
//
//    cout << "Enter canBuild (0 or 1): ";
//    cin >> g.canBuild;
//}
//
//void printFiltered(Game a[], int n, bool (*check)(Game), string title) {
//    cout << title << endl;
//    for (int i = 0; i < n; i++) {
//        if (check(a[i])) {
//            printOneGame(a[i]);
//        }
//    }
//}
//
//int main() {
//    Game games[N] = {
//        {"Mario Kart Tour", NINTENDO, 0, 95, {0, 1, 1}, RACING, 0},
//        {"Animal Crossing Pocket Camp", NINTENDO, 0, 88, {0, 1, 0}, STRATEGY, 1},
//        {"Fire Emblem Heroes", NINTENDO, 0, 75, {0, 1, 0}, RPG, 0},
//        {"Super Mario Run", NINTENDO, 9.99, 70, {0, 1, 0}, STRATEGY, 0},
//        {"Pokemon Masters EX", NINTENDO, 0, 68, {0, 1, 0}, RPG, 0},
//        {"Dr. Mario World", NINTENDO, 0, 40, {0, 1, 0}, STRATEGY, 0},
//        {"Clash of Clans", SUPERCELL, 0, 110, {0, 1, 0}, STRATEGY, 1},
//        {"Clash Royale", SUPERCELL, 0, 105, {0, 1, 0}, STRATEGY, 0},
//        {"Asphalt 9", EA, 0, 85, {1, 1, 1}, RACING, 0},
//        {"Minecraft", EA, 26.95, 200, {1, 1, 1}, STRATEGY, 1},
//        {"FIFA Mobile", EA, 0, 92, {0, 1, 1}, SHOOTER, 0},
//        {"PUBG Mobile", UBISOFT, 0, 140, {0, 1, 1}, SHOOTER, 0},
//        {"SimCity BuildIt", EA, 0, 80, {0, 1, 0}, STRATEGY, 1},
//        {"FarmVille 3", SEGA, 0, 63, {0, 1, 0}, STRATEGY, 1},
//        {"Sky", UBISOFT, 0, 55, {1, 1, 0}, RPG, 0},
//        {"Train Sim", SEGA, 0, 35, {1, 1, 0}, AIRSIM, 0},
//        {"Tekken Mobile", CAPCOM, 0, 45, {0, 1, 1}, SHOOTER, 0},
//        {"Age of Empires Mobile", EA, 0, 77, {0, 1, 0}, STRATEGY, 1},
//        {"Game 19", CAPCOM, 0, 50, {0, 1, 0}, RPG, 0},
//        {"Game 20", UBISOFT, 0, 60, {1, 1, 1}, RACING, 0}
//    };
//
//    Game nintendoMobile[N];
//    Game buildMobile[N];
//
//    int n1 = copyNintendoMobile(games, nintendoMobile, N);
//    bubbleSort(nintendoMobile, n1);
//
//    int n2 = copyMobileBuild(games, buildMobile, N);
//
//    cout << "Nintendo mobile games sorted by audience:" << endl;
//    printArray(nintendoMobile, n1);
//
//    cout << "Concrete game info:" << endl;
//    printGameByName(games, N, "Minecraft");
//
//    cout << "Two least popular Nintendo mobile games:" << endl;
//    printTwoLeastPopular(nintendoMobile, n1);
//
//    cout << "Mobile games where you can build:" << endl;
//    printFiltered(games, N, isMobileBuild, "Filtered games:");
//
//    if (n1 > 0) {
//        cout << "Change first Nintendo mobile game:" << endl;
//        changeGame(nintendoMobile[0]);
//        printOneGame(nintendoMobile[0]);
//    }
//
//    return 0;
//}

//zanatie10

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int N = 20;

enum Genre {
    RPG,
    STRATEGY,
    RACING,
    AIRSIM,
    SHOOTER
};

enum Studio {
    NINTENDO,
    EA,
    UBISOFT,
    CAPCOM,
    SEGA,
    SUPERCELL
};

struct Platforms {
    bool pc;
    bool mobile;
    bool gamepad;
};

struct Game {
    string name;
    Studio studio;
    double price;
    int audience;
    Platforms platform;
    Genre genre;
    bool canBuild;
};

string studioName(Studio s) {
    if (s == NINTENDO) return "Nintendo";
    if (s == EA) return "EA";
    if (s == UBISOFT) return "Ubisoft";
    if (s == CAPCOM) return "Capcom";
    if (s == SEGA) return "Sega";
    if (s == SUPERCELL) return "Supercell";
    return "Unknown";
}

string genreName(Genre g) {
    if (g == RPG) return "RPG";
    if (g == STRATEGY) return "Strategy";
    if (g == RACING) return "Racing";
    if (g == AIRSIM) return "Air simulator";
    if (g == SHOOTER) return "Shooter";
    return "Unknown";
}

void printOneGame(Game g) {
    cout << "Name: " << g.name << endl;
    cout << "Studio: " << studioName(g.studio) << endl;
    cout << "Price: " << g.price << endl;
    cout << "Audience: " << g.audience << endl;
    cout << "PC: " << g.platform.pc << endl;
    cout << "Mobile: " << g.platform.mobile << endl;
    cout << "Gamepad: " << g.platform.gamepad << endl;
    cout << "Genre: " << genreName(g.genre) << endl;
    cout << "Can build: " << g.canBuild << endl;
    cout << "----------------------" << endl;
}

void printArray(Game a[], int n) {
    for (int i = 0; i < n; i++) {
        printOneGame(a[i]);
    }
}

bool isNintendoMobile(Game g) {
    if (g.studio == NINTENDO && g.platform.mobile == true)
        return true;
    return false;
}

bool isMobileBuild(Game g) {
    if (g.platform.mobile == true && g.canBuild == true)
        return true;
    return false;
}

int copyNintendoMobile(Game src[], Game dst[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (isNintendoMobile(src[i])) {
            dst[k] = src[i];
            k++;
        }
    }
    return k;
}

int copyMobileBuild(Game src[], Game dst[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (isMobileBuild(src[i])) {
            dst[k] = src[i];
            k++;
        }
    }
    return k;
}

void bubbleSort(Game a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j].audience > a[j + 1].audience) {
                Game temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int findGame(Game a[], int n, string name) {
    for (int i = 0; i < n; i++) {
        if (a[i].name == name) {
            return i;
        }
    }
    return -1;
}

void printGameByName(Game a[], int n, string name) {
    int pos = findGame(a, n, name);
    if (pos != -1) {
        printOneGame(a[pos]);
    }
    else {
        cout << "Game not found" << endl;
    }
}

void printTwoLeastPopular(Game a[], int n) {
    if (n < 2) {
        cout << "Not enough games" << endl;
        return;
    }
    printOneGame(a[0]);
    printOneGame(a[1]);
}

void changeGame(Game& g) {
    cout << "Enter new name: ";
    cin >> ws;
    getline(cin, g.name);

    cout << "Enter new price: ";
    cin >> g.price;

    cout << "Enter new audience: ";
    cin >> g.audience;

    cout << "Enter platforms (pc mobile gamepad, 0 or 1): ";
    cin >> g.platform.pc >> g.platform.mobile >> g.platform.gamepad;

    cout << "Enter canBuild (0 or 1): ";
    cin >> g.canBuild;
}

void printFiltered(Game a[], int n, bool (*check)(Game), string title) {
    cout << title << endl;
    for (int i = 0; i < n; i++) {
        if (check(a[i])) {
            printOneGame(a[i]);
        }
    }
}

void writeToBinaryFile(const char* filename, Game arr[], int n) {
    ofstream fout(filename, ios::binary | ios::out);

    if (!fout.is_open()) {
        cout << "Ошибка открытия файла для записи!" << endl;
        return;
    }

    fout.write((char*)&n, sizeof(n));

    for (int i = 0; i < n; i++) {
        int nameLen = arr[i].name.length() + 1;
        fout.write((char*)&nameLen, sizeof(nameLen));
        fout.write(arr[i].name.c_str(), nameLen);

        fout.write((char*)&arr[i].studio, sizeof(arr[i].studio));
        fout.write((char*)&arr[i].price, sizeof(arr[i].price));
        fout.write((char*)&arr[i].audience, sizeof(arr[i].audience));
        fout.write((char*)&arr[i].platform, sizeof(arr[i].platform));
        fout.write((char*)&arr[i].genre, sizeof(arr[i].genre));
        fout.write((char*)&arr[i].canBuild, sizeof(arr[i].canBuild));
    }

    fout.close();
    cout << "Данные успешно записаны в бинарный файл: " << filename << endl;
}

int readFromBinaryFile(const char* filename, Game arr[], int maxSize) {
    ifstream fin(filename, ios::binary | ios::in);

    if (!fin.is_open()) {
        cout << "Ошибка открытия файла для чтения!" << endl;
        return 0;
    }

    int n = 0;
    fin.read((char*)&n, sizeof(n));

    if (n > maxSize) {
        cout << "Ошибка: количество записей в файле превышает размер массива!" << endl;
        fin.close();
        return 0;
    }

    for (int i = 0; i < n; i++) {
        int nameLen = 0;
        fin.read((char*)&nameLen, sizeof(nameLen));
        char* buffer = new char[nameLen];
        fin.read(buffer, nameLen);
        arr[i].name = string(buffer);
        delete[] buffer;

        fin.read((char*)&arr[i].studio, sizeof(arr[i].studio));
        fin.read((char*)&arr[i].price, sizeof(arr[i].price));
        fin.read((char*)&arr[i].audience, sizeof(arr[i].audience));
        fin.read((char*)&arr[i].platform, sizeof(arr[i].platform));
        fin.read((char*)&arr[i].genre, sizeof(arr[i].genre));
        fin.read((char*)&arr[i].canBuild, sizeof(arr[i].canBuild));
    }

    fin.close();
    cout << "Данные успешно считаны из бинарного файла: " << filename << endl;
    cout << "Считано записей: " << n << endl;

    return n;
}

void writeSingleGameToBinary(const char* filename, Game& g) {
    ofstream fout(filename, ios::binary | ios::out);

    if (!fout.is_open()) {
        cout << "Ошибка открытия файла для записи!" << endl;
        return;
    }

    int nameLen = g.name.length() + 1;
    fout.write((char*)&nameLen, sizeof(nameLen));
    fout.write(g.name.c_str(), nameLen);

    fout.write((char*)&g.studio, sizeof(g.studio));
    fout.write((char*)&g.price, sizeof(g.price));
    fout.write((char*)&g.audience, sizeof(g.audience));
    fout.write((char*)&g.platform, sizeof(g.platform));
    fout.write((char*)&g.genre, sizeof(g.genre));
    fout.write((char*)&g.canBuild, sizeof(g.canBuild));

    fout.close();
    cout << "Одна игра успешно записана в бинарный файл: " << filename << endl;
}

bool readSingleGameFromBinary(const char* filename, Game& g) {
    ifstream fin(filename, ios::binary | ios::in);

    if (!fin.is_open()) {
        cout << "Ошибка открытия файла для чтения!" << endl;
        return false;
    }

    int nameLen = 0;
    fin.read((char*)&nameLen, sizeof(nameLen));
    char* buffer = new char[nameLen];
    fin.read(buffer, nameLen);
    g.name = string(buffer);
    delete[] buffer;

    fin.read((char*)&g.studio, sizeof(g.studio));
    fin.read((char*)&g.price, sizeof(g.price));
    fin.read((char*)&g.audience, sizeof(g.audience));
    fin.read((char*)&g.platform, sizeof(g.platform));
    fin.read((char*)&g.genre, sizeof(g.genre));
    fin.read((char*)&g.canBuild, sizeof(g.canBuild));

    fin.close();
    cout << "Одна игра успешно считана из бинарного файла: " << filename << endl;

    return true;
}

int main() {
    Game games[N] = {
        {"Mario Kart Tour", NINTENDO, 0, 95, {0, 1, 1}, RACING, 0},
        {"Animal Crossing Pocket Camp", NINTENDO, 0, 88, {0, 1, 0}, STRATEGY, 1},
        {"Fire Emblem Heroes", NINTENDO, 0, 75, {0, 1, 0}, RPG, 0},
        {"Super Mario Run", NINTENDO, 9.99, 70, {0, 1, 0}, STRATEGY, 0},
        {"Pokemon Masters EX", NINTENDO, 0, 68, {0, 1, 0}, RPG, 0},
        {"Dr. Mario World", NINTENDO, 0, 40, {0, 1, 0}, STRATEGY, 0},
        {"Clash of Clans", SUPERCELL, 0, 110, {0, 1, 0}, STRATEGY, 1},
        {"Clash Royale", SUPERCELL, 0, 105, {0, 1, 0}, STRATEGY, 0},
        {"Asphalt 9", EA, 0, 85, {1, 1, 1}, RACING, 0},
        {"Minecraft", EA, 26.95, 200, {1, 1, 1}, STRATEGY, 1},
        {"FIFA Mobile", EA, 0, 92, {0, 1, 1}, SHOOTER, 0},
        {"PUBG Mobile", UBISOFT, 0, 140, {0, 1, 1}, SHOOTER, 0},
        {"SimCity BuildIt", EA, 0, 80, {0, 1, 0}, STRATEGY, 1},
        {"FarmVille 3", SEGA, 0, 63, {0, 1, 0}, STRATEGY, 1},
        {"Sky", UBISOFT, 0, 55, {1, 1, 0}, RPG, 0},
        {"Train Sim", SEGA, 0, 35, {1, 1, 0}, AIRSIM, 0},
        {"Tekken Mobile", CAPCOM, 0, 45, {0, 1, 1}, SHOOTER, 0},
        {"Age of Empires Mobile", EA, 0, 77, {0, 1, 0}, STRATEGY, 1},
        {"Game 19", CAPCOM, 0, 50, {0, 1, 0}, RPG, 0},
        {"Game 20", UBISOFT, 0, 60, {1, 1, 1}, RACING, 0}
    };

    Game nintendoMobile[N];
    Game buildMobile[N];

    int n1 = copyNintendoMobile(games, nintendoMobile, N);
    bubbleSort(nintendoMobile, n1);

    int n2 = copyMobileBuild(games, buildMobile, N);

    cout << "\n========= РАБОТА С БИНАРНЫМИ ФАЙЛАМИ =========\n" << endl;

    writeToBinaryFile("nintendo_mobile.dat", nintendoMobile, n1);

    Game loadedGames[N];
    int loadedCount = readFromBinaryFile("nintendo_mobile.dat", loadedGames, N);

    cout << "\nСчитанные из бинарного файла игры:" << endl;
    printArray(loadedGames, loadedCount);

    int minecraftIndex = findGame(games, N, "Minecraft");
    if (minecraftIndex != -1) {
        writeSingleGameToBinary("minecraft_game.dat", games[minecraftIndex]);

        Game loadedGame;
        if (readSingleGameFromBinary("minecraft_game.dat", loadedGame)) {
            cout << "\nСчитанная из бинарного файла игра:" << endl;
            printOneGame(loadedGame);
        }
    }

    cout << "\n========= ОСТАЛЬНЫЕ РЕЗУЛЬТАТЫ =========\n" << endl;

    cout << "Nintendo mobile games sorted by audience:" << endl;
    printArray(nintendoMobile, n1);

    cout << "Concrete game info:" << endl;
    printGameByName(games, N, "Minecraft");

    cout << "Two least popular Nintendo mobile games:" << endl;
    printTwoLeastPopular(nintendoMobile, n1);

    cout << "Mobile games where you can build:" << endl;
    printFiltered(games, N, isMobileBuild, "Filtered games:");

    if (n1 > 0) {
        cout << "Change first Nintendo mobile game:" << endl;
        changeGame(nintendoMobile[0]);
        printOneGame(nintendoMobile[0]);

        writeSingleGameToBinary("changed_game.dat", nintendoMobile[0]);
    }

    return 0;
}