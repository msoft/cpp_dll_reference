#include "Redirect.h"


Redirect::Redirect(wchar_t *textToDisplay)
{
	//this->callee = new Callee(textToDisplay);
	this->textToDisplay = textToDisplay;
}

Redirect::~Redirect()
{
	//this->callee->~Callee();
}

void Redirect::RedirectCall()
{
	DisplayTextWithCallee(this->textToDisplay);
}