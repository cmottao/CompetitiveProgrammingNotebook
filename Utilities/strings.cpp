/*
Description:
    Useful string utilities for competitive programming.
*/

// Char Int
inline char int_to_char(int x) { return x + '0'; }
inline int char_to_int(char c) { return c - '0'; }

// Substring
inline string substring(const string &s, int l, int len) { return s.substr(l, len); }

// Upper / Lower
inline char to_upper(char c) { return toupper(c); }
inline char to_lower(char c) { return tolower(c); }