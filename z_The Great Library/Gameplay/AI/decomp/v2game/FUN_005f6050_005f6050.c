// FUN_005f6050 @ 005f6050 body=[[005f6050, 005f60b9] [005f60c0, 005f6155]]


void FUN_005f6050(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  int *in_ECX;
  int *piVar6;
  int *piVar7;
  undefined1 local_138 [12];
  undefined4 uStack_12c;
  undefined4 local_128;
  int local_124;
  char *pcStack_120;
  int local_110 [65];
  undefined1 *local_c;
  int *local_8;
  
  pcVar1 = (char *)(param_1 + 0x24);
  local_124 = 0x5f606d;
  pcStack_120 = pcVar1;
  local_8 = in_ECX;
  iVar4 = FUN_00aaf0c5();
  uVar3 = DAT_01259abc;
  if (iVar4 != 0) {
    local_c = local_138;
    local_124 = 0xf;
    local_128 = 0;
    local_138[0] = 0;
    pcVar5 = pcVar1;
    do {
      cVar2 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar2 != '\0');
    FUN_00409350(pcVar1,(int)pcVar5 - (param_1 + 0x25));
    FUN_0043bb10();
    while( true ) {
      piVar6 = *(int **)(param_1 + 0x1c);
      if ((char)piVar6[0x44] == '\0') {
        pcStack_120 = (char *)0x5f60d5;
        iVar4 = (**(code **)(*piVar6 + 4))();
        piVar6[2] = iVar4;
        if (iVar4 == 0) {
          piVar6[3] = 0x13;
        }
        *(undefined1 *)(piVar6 + 0x44) = 1;
      }
      piVar6 = piVar6 + 3;
      piVar7 = local_110;
      for (iVar4 = 0x41; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar7 = *piVar6;
        piVar6 = piVar6 + 1;
        piVar7 = piVar7 + 1;
      }
      if ((local_110[0] == 4) || (local_110[0] == 0x13)) break;
      pcStack_120 = (char *)param_1;
      local_124 = 0x5f6110;
      FUN_009a1440();
      pcStack_120 = *(char **)(param_1 + 0x20);
      local_124 = param_1;
      local_128 = uVar3;
      uStack_12c = 0x5f6123;
      (**(code **)(*local_8 + 0x24))();
    }
    pcStack_120 = (char *)0x5f612f;
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
    return;
  }
  pcStack_120 = *(char **)(param_1 + 0x20);
  local_124 = param_1;
  local_128 = DAT_01259abc;
  uStack_12c = 0x5f614d;
  (**(code **)(*in_ECX + 0x24))();
  return;
}

