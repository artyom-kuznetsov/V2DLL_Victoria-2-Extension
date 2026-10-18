// getECSUDataType @ 00ac7287 body=[[00ac7287, 00ac7396]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getECSUDataType(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getECSUDataType(void)

{
  char cVar1;
  DName *this;
  uint uVar2;
  uint uVar3;
  DName *in_stack_00000004;
  DName *pDVar4;
  char *pcVar5;
  DName local_24 [16];
  undefined4 local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  
  pcVar5 = DAT_00f20978;
  uVar3 = 1;
  uVar2 = ~(DAT_00f20988 >> 0xf) & 1;
  if ((uVar2 == 0) || ((DAT_00f20988 & 0x1000) != 0)) {
    uVar3 = 0;
  }
  cVar1 = *DAT_00f20978;
  local_c = 0;
  local_8 = local_8 & 0xffff0000;
  DAT_00f20978 = DAT_00f20978 + 1;
  if (cVar1 == '\0') {
    DAT_00f20978 = pcVar5;
    DName::DName(in_stack_00000004,"unknown ecsu\'");
    return in_stack_00000004;
  }
  if (cVar1 == 'T') {
    pcVar5 = "union ";
  }
  else if (cVar1 == 'U') {
    pcVar5 = "struct ";
  }
  else if (cVar1 == 'V') {
    pcVar5 = "class ";
  }
  else {
    if (cVar1 == 'W') {
      getEnumType();
      pDVar4 = (DName *)&local_14;
      this = (DName *)DName::DName(local_24,"enum ");
      DName::operator+(this,pDVar4);
      local_c = local_14;
      local_8 = local_10;
      goto LAB_00ac7340;
    }
    if (cVar1 == 'X') {
      pcVar5 = "coclass ";
    }
    else {
      uVar2 = uVar3;
      if (cVar1 != 'Y') goto LAB_00ac7340;
      pcVar5 = "cointerface ";
    }
  }
  DName::operator=((DName *)&local_c,pcVar5);
  uVar2 = uVar3;
LAB_00ac7340:
  local_14 = 0;
  local_10 = local_10 & 0xffff0000;
  if (uVar2 != 0) {
    local_14 = local_c;
    local_10 = local_8;
  }
  getScopedName();
  DName::operator+=((DName *)&local_14,(DName *)&local_c);
  *(undefined4 *)in_stack_00000004 = local_14;
  *(uint *)(in_stack_00000004 + 4) = local_10;
  return in_stack_00000004;
}

