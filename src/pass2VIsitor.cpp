pass2Visitor::pass2Visitor(ostream& j_file)
    : program_name(""), j_file(j_file)
{}
}

pass2Visitor::~pass2Visitor()
{
}

antlrcpp::Any Pass2Visitor::visitProgram(CloudsParser::ProgramContext *ctx)
{
    auto value = visitChildren(ctx);
    //j_file.close();
    return value;
}

antlrcpp::Any Pass2Visitor::visitHeader(CloudsParser::HeaderContext *ctx)
{
    program_name = ctx->ID()->toString();
    return visitChildren(ctx);
}