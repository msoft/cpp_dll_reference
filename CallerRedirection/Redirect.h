#ifndef REDIRECT_H
#define REDIRECT_H

#pragma once

#include "Callee.h"

class Redirect
{
private:
	//Callee* callee;
	wchar_t *textToDisplay;

public:
	//__declspec(dllexport) Redirect(wchar_t *textToDisplay);
	//__declspec(dllexport) ~Redirect();

	//__declspec(dllexport) void RedirectCall();

	Redirect(wchar_t *textToDisplay);
	~Redirect();

	void RedirectCall();
};

#endif /* REDIRECT_H */