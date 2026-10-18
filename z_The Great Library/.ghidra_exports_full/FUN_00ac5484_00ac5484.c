// getCallingConvention @ 00ac5484 body=[[00ac5484, 00ac554b]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getCallingConvention(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getCallingConvention(void)

{
  uint uVar1;
  char *pcVar2;
  uint in_ECX;
  DName *in_stack_00000004;
  Tokens TVar3;
  undefined4 local_c;
  uint local_8;
  
  if (*DAT_00f20978 == '\0') {
    DName::DName(in_stack_00000004,1);
    return in_stack_00000004;
  }
  uVar1 = (int)*DAT_00f20978 - 0x41;
  DAT_00f20978 = DAT_00f20978 + 1;
  if (0xe < uVar1) {
    *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
    *(undefined4 *)in_stack_00000004 = 0;
    in_stack_00000004[4] = (DName)0x2;
    return in_stack_00000004;
  }
  local_c = 0;
  local_8 = in_ECX & 0xffff0002 | 2;
  if ((~(DAT_00f20988 >> 1) & 1) != 0) {
    uVar1 = uVar1 & 0xfffffffe;
    if (uVar1 == 0) {
      TVar3 = 1;
    }
    else if (uVar1 == 2) {
      TVar3 = 2;
    }
    else if (uVar1 == 4) {
      TVar3 = 4;
    }
    else if (uVar1 == 6) {
      TVar3 = 3;
    }
    else if (uVar1 == 8) {
      TVar3 = 5;
    }
    else if (uVar1 == 0xc) {
      TVar3 = 6;
    }
    else {
      if (uVar1 != 0xe) goto LAB_00ac551a;
      TVar3 = 7;
    }
    pcVar2 = UScore(TVar3);
    DName::operator=((DName *)&local_c,pcVar2);
  }
LAB_00ac551a:
  *(undefined4 *)in_stack_00000004 = local_c;
  *(uint *)(in_stack_00000004 + 4) = local_8;
  return in_stack_00000004;
}

