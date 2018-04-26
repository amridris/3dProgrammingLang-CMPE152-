#include <iostream>
#include <string>

#include "CloudsPass2Visitor.h"
#include "wci/intermediate/SymTabStack.h"
#include "wci/intermediate/SymTabEntry.h"
#include "wci/intermediate/TypeSpec.h"
#include "wci/intermediate/symtabimpl/Predefined.h"

using namespace wci;
using namespace wci::intermediate;
using namespace wci::intermediate::symtabimpl;

CloudsPass2Visitor::CloudsPass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{
}

CloudsPass2Visitor::~CloudsPass2Visitor() {}