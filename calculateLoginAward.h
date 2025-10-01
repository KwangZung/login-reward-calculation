#include <string>
using namespace std;

string calculateLoginAward(int streak, bool isVIP, int level) {
    const string LEGENDARY = "Legendary Award";
    const string BIG = "Big Award";
    const string NORMAL = "Normal Award";
    const string NO = "No Award";

    if ((streak == 100 || level == 100) && isVIP)
        return LEGENDARY;
    else if ((streak == 100 || level == 100) && !isVIP)
        return BIG;
    else if ((streak >= 50 || level >= 50) && isVIP)
        return BIG;
    else if ((streak >= 50 || level >= 50) && !isVIP)
        return NORMAL;
    else if ((streak < 50 && level < 50) && isVIP)
        return NORMAL;
    else
        return NO;
}