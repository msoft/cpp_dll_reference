// NativeCaller.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include "Redirect.h"
#include <iostream>

int main()
{
	std::wstring textToDisplay(L"Text to display");
	//Callee *callee = new Callee(const_cast<wchar_t*>(textToDisplay.c_str()));
	Redirect *callRedirection = new Redirect(const_cast<wchar_t*>(textToDisplay.c_str()));

	std::cout << "Calling other lib:\n";
	callRedirection->RedirectCall();

	delete callRedirection;

	std::cin.get();

	return 0;
}

