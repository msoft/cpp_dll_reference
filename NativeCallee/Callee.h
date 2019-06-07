#ifndef CALLEE_H
#define CALLEE_H

#pragma once

#ifdef NATIVECALLEE_EXPORTS
#define NATIVECALLEE_API __declspec(dllexport)
#else
#define NATIVECALLEE_API __declspec(dllimport)
#endif

extern "C" NATIVECALLEE_API void DisplayTextWithCallee(const wchar_t *textToDisplay);


class Callee
{
private:
	wchar_t *textToDisplay;

public:
	NATIVECALLEE_API Callee(wchar_t *textToDisplay);
	NATIVECALLEE_API ~Callee();

	NATIVECALLEE_API void DisplayText();

	//__declspec(dllexport) Callee(wchar_t *textToDisplay);
	//__declspec(dllexport) ~Callee();

	//__declspec(dllexport) void DisplayText();
};

#endif /* CALLEE_H */