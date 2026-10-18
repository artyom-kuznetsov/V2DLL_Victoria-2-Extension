// FUN_005dfc70 @ 005dfc70 body=[[005dfc70, 005dfdce]]


void FUN_005dfc70(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  int *piVar4;
  int local_30;
  int local_2c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b9fb60;
  local_14 = ExceptionList;
  local_2c = 0;
  if (0 < (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x28) {
    local_30 = 0;
    ExceptionList = &local_14;
    do {
      piVar4 = (int *)(*(int *)(in_ECX + 0x3c) + local_30);
      iVar2 = DAT_01258a94;
      if ((uint)piVar4[1] < 0x1269) {
        iVar2 = DAT_01258a98;
      }
      if ((iVar2 == 0) || (iVar2 = FUN_009c1d40(), iVar2 == 0)) {
        iVar2 = 0;
      }
      else {
        iVar2 = iVar2 + -8;
      }
      *piVar4 = iVar2;
      if ((iVar2 != 0) && (*(int *)(iVar2 + 0x74) == 0)) {
        if ((*(char *)(*(int *)(*(int *)(iVar2 + 0xdc) + 0x5c) + 0x2a) == '\0') &&
           (cVar1 = (**(code **)(**(int **)(iVar2 + 0xd8) + 0x20))(), cVar1 != '\0')) {
          for (piVar4 = *(int **)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(iVar2 + 0xc4) * 4)
                                 + 0xbd4);
              (piVar4 != (int *)0x0 && (*piVar4 != *(int *)(iVar2 + 0xd8)));
              piVar4 = (int *)piVar4[2]) {
          }
          FUN_005f2ae0(piVar4);
          uVar3 = FUN_005b6140();
          FUN_005cbcc0(uVar3);
        }
        FUN_0068aa10(iVar2);
      }
      local_30 = local_30 + 0x28;
      local_2c = local_2c + 1;
    } while (local_2c < (*(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c)) / 0x28);
  }
  ExceptionList = local_14;
  return;
}

