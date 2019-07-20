#include "Callee.h"

#include <wchar.h>

void DisplayTextWithCallee(const wchar_t *textToDisplay)
{
	Callee *callee = new Callee(const_cast<wchar_t*>(textToDisplay));
	callee->DisplayText();
	delete callee;
}

Callee::Callee(wchar_t *textToDisplay)
{
	this->textToDisplay = textToDisplay;
}

Callee::~Callee()
{
}

void Callee::DisplayText()
{
	wprintf(this->textToDisplay, "%s\n");
}