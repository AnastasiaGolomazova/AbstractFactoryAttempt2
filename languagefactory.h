#ifndef LANGUAGEFACTORY_H
#define LANGUAGEFACTORY_H
#include <memory>
#include <map>
#include <string>

#include "factorycpp.h"
#include "factorycsharp.h"
#include "factoryjava.h"

using namespace std;

shared_ptr<AbstractFactory> SelectFactory(const string & name);

#endif
