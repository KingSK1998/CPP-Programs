
// Hackerrank Question: Magic Spell

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Spell {
    private:
        string scrollName;
    public:
        Spell(): scrollName("") { }
        Spell(string name): scrollName(name) { }
        virtual ~Spell() { }
        string revealScrollName() {
            return scrollName;
        }
};

class Fireball : public Spell {
    private: int power;
    public:
        Fireball(int power): power(power) { }
        void revealFirepower(){
            cout << "Fireball: " << power << endl;
        }
};

class Frostbite : public Spell {
    private: int power;
    public:
        Frostbite(int power): power(power) { }
        void revealFrostpower(){
            cout << "Frostbite: " << power << endl;
        }
};

class Thunderstorm : public Spell {
    private: int power;
    public:
        Thunderstorm(int power): power(power) { }
        void revealThunderpower(){
            cout << "Thunderstorm: " << power << endl;
        }
};

class Waterbolt : public Spell {
    private: int power;
    public:
        Waterbolt(int power): power(power) { }
        void revealWaterpower(){
            cout << "Waterbolt: " << power << endl;
        }
};

class SpellJournal {
    public:
        static string journal;
        static string read() {
            return journal + "x";
        }
};
string SpellJournal::journal = "";


// One Way
void counterspell(Spell *spell) {
    if(Fireball *fb = dynamic_cast<Fireball*>(spell)){
        fb->revealFirepower();
    }
    else if(Frostbite *f = dynamic_cast<Frostbite*>(spell)){
        f->revealFrostpower();
    }
    else if(Thunderstorm *ts = dynamic_cast<Thunderstorm*>(spell)){
        ts->revealThunderpower();
    }
    else if(Waterbolt *wb = dynamic_cast<Waterbolt*>(spell)){
        wb->revealWaterpower();
    }
    else{
        string spellString = spell->revealScrollName();
        string journalString = SpellJournal::read();
        int n = spellString.length();
        int m = journalString.length();
    }
}

class Wizard {
    public:
        Spell *cast() {
            Spell *spell;
            cout << "Spells Available: fire, frost, water, thunder, custom" << endl;
            string s; 
            cout << "Enter Spell: ";
            cin >> s;
            int power; 
            cout << "Enter power: ";
            cin >> power;
            if(s == "fire") {
                spell = new Fireball(power);
            }
            else if(s == "frost") {
                spell = new Frostbite(power);
            }
            else if(s == "water") {
                spell = new Waterbolt(power);
            }
            else if(s == "thunder") {
                spell = new Thunderstorm(power);
            }
            else {
                spell = new Spell(s);
                cin >> SpellJournal::journal;
            }
            return spell;
        }
};

int main() {
    int T;
    cout << "Enter test case: ";
    cin >> T;
    Wizard Arawn;
    while(T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}
