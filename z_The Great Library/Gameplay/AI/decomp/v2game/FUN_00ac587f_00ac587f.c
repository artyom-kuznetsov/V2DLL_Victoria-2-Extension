// getDimension @ 00ac587f body=[[00ac587f, 00ac59c4]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getDimension(bool)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getDimension(bool param_1)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined3 in_stack_00000005;
  char in_stack_00000008;
  DName local_1c [8];
  char local_14 [8];
  DName local_c [8];
  
  pcVar5 = (char *)0x0;
  if (*DAT_00f20978 == 'Q') {
    DAT_00f20978 = DAT_00f20978 + 1;
    pcVar5 = "`non-type-template-parameter";
  }
  cVar2 = *DAT_00f20978;
  if (cVar2 == '\0') {
    DName::DName(_param_1,1);
    return _param_1;
  }
  if (('/' < cVar2) && (cVar2 < ':')) {
    cVar2 = *DAT_00f20978;
    DAT_00f20978 = DAT_00f20978 + 1;
    if ((DName *)pcVar5 == (DName *)0x0) {
      puVar3 = (undefined4 *)DName::DName(local_1c,(longlong)(cVar2 + -0x2f));
    }
    else {
      DName::DName(local_c,(longlong)(cVar2 + -0x2f));
      puVar3 = (undefined4 *)operator+(local_14,(DName *)pcVar5);
    }
    *(undefined4 *)_param_1 = *puVar3;
    *(undefined4 *)(_param_1 + 4) = puVar3[1];
    return _param_1;
  }
  uVar6 = 0;
  iVar8 = 0;
  while (cVar2 != '@') {
    if (cVar2 == '\0') {
      DName::DName(_param_1,1);
      return _param_1;
    }
    if ((cVar2 < 'A') || ('P' < cVar2)) goto LAB_00ac594b;
    uVar1 = uVar6 >> 0x1c;
    uVar4 = (int)cVar2 - 0x41;
    uVar7 = uVar6 * 0x10;
    uVar6 = uVar4 + uVar7;
    iVar8 = (iVar8 << 4 | uVar1) + ((int)uVar4 >> 0x1f) + (uint)CARRY4(uVar4,uVar7);
    DAT_00f20978 = DAT_00f20978 + 1;
    cVar2 = *DAT_00f20978;
  }
  cVar2 = *DAT_00f20978;
  DAT_00f20978 = DAT_00f20978 + 1;
  if (cVar2 != '@') {
LAB_00ac594b:
    *(uint *)(_param_1 + 4) = *(uint *)(_param_1 + 4) & 0xffff00ff;
    *(undefined4 *)_param_1 = 0;
    _param_1[4] = (DName)0x2;
    return _param_1;
  }
  if (in_stack_00000008 == '\0') {
    if ((DName *)pcVar5 == (DName *)0x0) {
      puVar3 = (undefined4 *)DName::DName(local_c,CONCAT44(iVar8,uVar6));
      goto LAB_00ac59b1;
    }
    DName::DName(local_1c,CONCAT44(iVar8,uVar6));
  }
  else {
    if ((DName *)pcVar5 == (DName *)0x0) {
      puVar3 = (undefined4 *)DName::DName(local_c,CONCAT44(iVar8,uVar6));
      goto LAB_00ac59b1;
    }
    DName::DName(local_1c,CONCAT44(iVar8,uVar6));
  }
  puVar3 = (undefined4 *)operator+(local_14,(DName *)pcVar5);
LAB_00ac59b1:
  *(undefined4 *)_param_1 = *puVar3;
  *(undefined4 *)(_param_1 + 4) = puVar3[1];
  return _param_1;
}

