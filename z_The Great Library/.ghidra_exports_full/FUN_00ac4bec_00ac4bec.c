// make @ 00ac4bec body=[[00ac4bec, 00ac4c71]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
    public: static class DNameStatusNode * __cdecl DNameStatusNode::make(enum DNameStatus)
   
   Libraries: Visual Studio 2008 Release, Visual Studio 2010 Release */

DNameStatusNode * __cdecl DNameStatusNode::make(DNameStatus param_1)

{
  if ((_DAT_00f209c4 & 1) == 0) {
    _DAT_00f209c4 = _DAT_00f209c4 | 1;
    _DAT_00f20994 = &PTR_FUN_00ddbebc;
    _DAT_00f20998 = 0;
    _DAT_00f2099c = 0;
    _DAT_00f209a0 = &PTR_FUN_00ddbebc;
    _DAT_00f209a4 = 1;
    _DAT_00f209a8 = 4;
    _DAT_00f209ac = &PTR_FUN_00ddbebc;
    _DAT_00f209b0 = 2;
    _DAT_00f209b4 = 0;
    _DAT_00f209b8 = &PTR_FUN_00ddbebc;
    _DAT_00f209bc = 3;
    _DAT_00f209c0 = 0;
  }
  if (param_1 < 4) {
    return (DNameStatusNode *)(&DAT_00f20994 + param_1 * 0xc);
  }
  return (DNameStatusNode *)&DAT_00f209b8;
}

