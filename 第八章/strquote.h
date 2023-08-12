#pragma once
#include<iostream>
#include<string>

using namespace std;

string version1(const string& s1, const string& s2);

const string& version2(string& s1, const string& s2);	// has side effect


const string& version3(string& s1, const string& s2); // bad design