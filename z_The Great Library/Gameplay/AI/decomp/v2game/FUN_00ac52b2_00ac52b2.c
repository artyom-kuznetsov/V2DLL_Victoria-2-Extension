// DName @ 00ac52b2 body=[[00ac52b2, 00ac531f]]


/* Library Function - Single Match
    public: __thiscall DName::DName(unsigned __int64)
   
   Library: Visual Studio 2010 Release */

void __thiscall DName::DName(DName *this,__uint64 param_1)

{
  char extraout_CL;
  char *pcVar1;
  char local_d [5];
  uint local_8;
  
  local_8 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  this[4] = (DName)0x0;
  *(uint *)(this + 4) = *(uint *)(this + 4) & 0xffff00ff;
  pcVar1 = local_d + 1;
  *(undefined4 *)this = 0;
  local_d[1] = 0;
  do {
    pcVar1 = pcVar1 + -1;
    param_1 = __aulldvrm(param_1,10,0);
    *pcVar1 = extraout_CL + '0';
  } while (param_1 != 0);
  doPchar(this,pcVar1,(int)(local_d + (1 - (int)pcVar1)));
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}

