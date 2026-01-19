#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// Symbol Table with Scope Support
class SymbolTable {
private:
    vector<unordered_map<string, string>> scopes;

public:
    SymbolTable() {
        enterScope(); // global scope
    }

    void enterScope() {
        scopes.push_back({});
    }

    void exitScope() {
        scopes.pop_back();
    }

    bool addSymbol(const string& name, const string& type) {
        auto& currentScope = scopes.back();

        if (currentScope.count(name)) {
            cout << "Semantic Error: Redeclaration of variable '" << name << "'\n";
            return false;
        }

        currentScope[name] = type;
        return true;
    }

    void printCurrentScope() {
        cout << "Current Scope Symbols:\n";
        for (auto& entry : scopes.back()) {
            cout << "  " << entry.first << " : " << entry.second << endl;
        }
    }
};
