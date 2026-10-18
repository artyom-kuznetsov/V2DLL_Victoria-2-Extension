// getScopedName @ 00ac71a6 body=[[00ac71a6, 00ac7286]]


/* Library Function - Single Match
    private: static class DName __cdecl UnDecorator::getScopedName(void)
   
   Library: Visual Studio 2010 Release */

DName * __cdecl UnDecorator::getScopedName(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  DName *pDVar3;
  DName *in_stack_00000004;
  char *pcVar4;
  DName *pDVar5;
  DName local_1c [8];
  char local_14 [8];
  DName local_c [8];
  
  in_stack_00000004[4] = (DName)0x0;
  *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
  *(undefined4 *)in_stack_00000004 = 0;
  puVar2 = (undefined4 *)getZName(SUB41(local_c,0),true);
  *(undefined4 *)in_stack_00000004 = *puVar2;
  uVar1 = puVar2[1];
  *(undefined4 *)(in_stack_00000004 + 4) = uVar1;
  if (((char)uVar1 == '\0') && (*DAT_00f20978 != '\0')) {
    if (*DAT_00f20978 == '@') goto LAB_00ac722a;
    pDVar5 = local_c;
    pcVar4 = local_14;
    pDVar3 = (DName *)getScope();
    pDVar3 = (DName *)DName::operator+(pDVar3,pcVar4);
    puVar2 = (undefined4 *)DName::operator+(pDVar3,pDVar5);
    *(undefined4 *)in_stack_00000004 = *puVar2;
    *(undefined4 *)(in_stack_00000004 + 4) = puVar2[1];
  }
  if (*DAT_00f20978 != '@') {
    if (*DAT_00f20978 != '\0') {
      *(uint *)(in_stack_00000004 + 4) = *(uint *)(in_stack_00000004 + 4) & 0xffff00ff;
      in_stack_00000004[4] = (DName)0x2;
      *(undefined4 *)in_stack_00000004 = 0;
      return in_stack_00000004;
    }
    if (*(int *)in_stack_00000004 == 0) {
      DName::operator=(in_stack_00000004,1);
      return in_stack_00000004;
    }
    pDVar5 = local_1c;
    pcVar4 = local_14;
    pDVar3 = (DName *)DName::DName(local_c,1);
    pDVar3 = (DName *)DName::operator+(pDVar3,pcVar4);
    puVar2 = (undefined4 *)DName::operator+(pDVar3,pDVar5);
    *(undefined4 *)in_stack_00000004 = *puVar2;
    *(undefined4 *)(in_stack_00000004 + 4) = puVar2[1];
    return in_stack_00000004;
  }
LAB_00ac722a:
  DAT_00f20978 = DAT_00f20978 + 1;
  return in_stack_00000004;
}

