#include <algorithm>
#include <iostream>
using namespace std;
#include "SysYParser.h"
#include "SysYFormatter.h"

// any ASTPrinter::visitNumber(SysYParser::NumberContext *ctx) {
//   cout << ctx->IntConst()->getText();
//   return nullptr;
// }

// any ASTPrinter::visitString(SysYParser::StringContext *ctx) {
//   cout << ctx->String()->getText();
//   return nullptr;
// }

// any ASTPrinter::visitFuncRParams(SysYParser::FuncRParamsContext *ctx) {
//   if (ctx->funcRParam().empty())
//     return nullptr;
//   auto numParams = ctx->funcRParam().size();
//   ctx->funcRParam(0)->accept(this);
//   for (int i = 1; i < numParams; ++i) {
//     cout << ", ";
//     ctx->funcRParam(i)->accept(this);
//   }
//   cout << '\n';
//   return nullptr;
// }
