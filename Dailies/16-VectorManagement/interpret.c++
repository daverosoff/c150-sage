string interpret(int a)
{
    string result = "";
    if (a / 4 == 12) { result += 'A'; } // ace
    else if (a / 4 == 11) { result += 'K'; } // king
    else if (a / 4 == 10) { result += 'Q'; } // queen
    else if (a / 4 == 9) { result += 'J'; } // jack
    else if (a / 4 == 8) { result += 'T'; } // ten
    else
    {
        string s = to_string(a / 4 + 2);
        result += s;
    }
    if (a % 4 == 0) { result += "♥"; } // hearts
    else if (a % 4 == 1) { result += "♣"; } //
    else if (a % 4 == 2) { result += "♦"; } //
    else if (a % 4 == 3) { result += "♠"; } //
    return result;
}