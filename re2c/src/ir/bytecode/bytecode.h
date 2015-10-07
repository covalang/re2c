#ifndef _RE2C_IR_BYTECODE_BYTECODE_
#define _RE2C_IR_BYTECODE_BYTECODE_

#include "src/codegen/output.h"
#include "src/ir/dfa/dfa.h"
#include "src/ir/regexp/regexp.h"
#include "src/parse/spec.h"
#include "src/util/smart_ptr.h"

namespace re2c
{

smart_ptr<DFA> genCode (Spec & spec, Output & output, const std::string & cond, uint32_t cunits);

} // namespace re2c

#endif // _RE2C_IR_BYTECODE_BYTECODE_
