// FUN_005e0bf0 @ 005e0bf0 body=[[005e0bf0, 005e0c7c] [005e0c80, 005e0d2e] [005e0d32, 005e0dcc]]


void FUN_005e0bf0(void)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int local_44;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  iVar5 = DAT_01258a94;
  if (*(uint *)(in_ECX + 0x40) < 0x1269) {
    iVar5 = DAT_01258a98;
  }
  ExceptionList = &local_14;
  if ((iVar5 == 0) || (ExceptionList = &local_14, local_44 = FUN_009c1d40(), local_44 == 0)) {
    local_44 = 0;
  }
  else {
    local_44 = local_44 + -8;
  }
  *(int *)(in_ECX + 0x3c) = local_44;
  if (local_44 != 0) {
    iVar5 = *(int *)(local_44 + 0x40);
    if (0 < iVar5) {
      piVar3 = *(int **)(local_44 + 0x38);
      while (piVar3 != (int *)0x0) {
        iVar1 = *piVar3;
        piVar3 = (int *)piVar3[2];
        if ((*(int *)(iVar1 + 0x30) != 0) &&
           (*(int *)(*(int *)(iVar1 + 0x30) + 0x58) <
            *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x10) / 1000)) {
          FUN_005cb230(iVar1);
          FUN_0068a900(iVar1);
          iVar5 = iVar5 + -1;
        }
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      FUN_00409350("click",5);
      local_c = 0;
      piVar3 = (int *)FUN_009c7290();
      (**(code **)(*piVar3 + 0x60))(local_34);
      local_c = 0xffffffff;
      if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_00aae91b(local_34[0]);
      }
      local_20 = 0xf;
      local_24 = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      if (iVar5 < 1) {
        if ((*(char *)(*(int *)(*(int *)(local_44 + 0xdc) + 0x5c) + 0x2a) == '\0') &&
           (cVar2 = (**(code **)(**(int **)(local_44 + 0xd8) + 0x20))(), cVar2 != '\0')) {
          FUN_0050e840();
          uVar4 = FUN_005b6140();
          FUN_005cbcc0(uVar4);
        }
        FUN_0068aa10(local_44);
      }
    }
    FUN_00654120(0,1);
  }
  ExceptionList = local_14;
  return;
}

