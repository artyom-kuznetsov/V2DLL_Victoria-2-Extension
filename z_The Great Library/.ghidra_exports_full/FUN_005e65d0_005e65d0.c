// FUN_005e65d0 @ 005e65d0 body=[[005e65d0, 005e6739] [005e673c, 005e6773]]


void FUN_005e65d0(int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  undefined1 auStack_148 [12];
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int iStack_134;
  int iStack_130;
  int local_114 [66];
  undefined1 *local_c;
  undefined4 local_8;
  
  iStack_130 = 0x5e65e9;
  FUN_00401480();
  iStack_130 = 0x5e65ee;
  iVar3 = FUN_0098fb50();
  if (iVar3 == 0) {
    iStack_130 = 0x5e6744;
    FUN_00401480();
    iStack_130 = 0x5e6749;
    iStack_130 = FUN_0043a900();
    iStack_134 = param_1;
    uStack_138 = 0x5e6756;
    puVar4 = (undefined4 *)FUN_0043ac40();
    uStack_138 = *puVar4;
    uStack_13c = 0x5e676c;
    (**(code **)(*in_ECX + 0x24))();
    return;
  }
  iStack_130 = 0x5e65fe;
  FUN_0043ac40();
  iStack_130 = 0x5e6606;
  FUN_00401480();
  iStack_130 = 0x5e660b;
  FUN_0098fc50();
  local_c = auStack_148;
  FUN_009885d0();
  FUN_0043bb10();
  do {
    piVar5 = *(int **)(param_1 + 0x1c);
    if ((char)piVar5[0x44] == '\0') {
      iStack_130 = 0x5e6658;
      iVar3 = (**(code **)(*piVar5 + 4))();
      piVar5[2] = iVar3;
      if (piVar5[2] == 0) {
        piVar5[3] = 0x13;
      }
      *(undefined1 *)(piVar5 + 0x44) = 1;
    }
    piVar5 = piVar5 + 3;
    piVar6 = local_114;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = *piVar5;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    }
    iStack_130 = 0x5e66ad;
    cVar2 = FUN_0098fc40();
    if (cVar2 == '\0') {
      iStack_130 = 0x5e66c4;
      cVar2 = FUN_0098fc40();
      if (cVar2 != '\0') goto LAB_005e66d7;
      bVar1 = false;
    }
    else {
LAB_005e66d7:
      bVar1 = true;
    }
    if (bVar1) {
      iStack_130 = 0x5e6738;
      (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
      return;
    }
    iStack_130 = param_1;
    iStack_134 = 0x5e66f5;
    FUN_009a1440();
    iStack_130 = 0x5e66fd;
    FUN_00401480();
    iStack_130 = 0x5e6702;
    iStack_130 = FUN_0043a900();
    iStack_134 = param_1;
    uStack_138 = local_8;
    uStack_13c = 0x5e671e;
    (**(code **)(*in_ECX + 0x24))();
  } while( true );
}

