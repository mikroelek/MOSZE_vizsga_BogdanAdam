#include <iostream>
using namespace std;

int main() {
    int hp1, dmg1, hp2, dmg2;
    cin >> hp1 >>dmg1 >>hp2>>dmg2;

    while (hp1>0 && hp2>0) {
        cout << "HP: " << hp1 << " DMG: " <<dmg1<<"  --->  HP: " <<hp2<<" DMG: "<<dmg2<<'\n';
        hp2-=dmg1;
        if (hp2<0) hp2=0; 
        cout << "HP: " << hp1 << " DMG: " <<dmg1<<"  <---  HP: " <<hp2<<" DMG: "<<dmg2<<'\n';
        hp1-=dmg2;
        if (hp1<0) hp1=0;
    }
     cout << "HP: " << hp1 << " DMG: " <<dmg1<<"  ---  HP: " <<hp2<<" DMG: "<<dmg2<<'\n';

    return 0;
}