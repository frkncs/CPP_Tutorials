#ifndef TUTORIAL13_H_INCLUDED
#define TUTORIAL13_H_INCLUDED

// The line of above means: If Tutorial13.h is not defined, define it
// So if we try include this file many times, it will not define them. So this is so much safer and memory friendly

extern int number; // This is extern (outside) variable, so we don't reserve MEMORY for variable
// Every defined parameter (and function) using extern keyword default (in .h files). So we don't have to write it. It will be just redundancy
void ShowHelp();

#endif // TUTORIAL13_H_INCLUDED
