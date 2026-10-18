// FUN_007a2980 @ 007a2980 body=[[007a2980, 007a2b2c] [007a2b30, 007a2be4]]


void FUN_007a2980(int *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  code *pcVar5;
  undefined1 auStack_80 [20];
  undefined1 auStack_6c [88];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6bacd;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *(undefined1 *)(*(int *)(in_ECX + 0x4c) + 0xcc) = 1;
  iVar2 = param_1[1] - *param_1 >> 0x1f;
  if ((((param_1[1] - *param_1) / 0x1c + iVar2 != iVar2) &&
      (*(int *)(*(int *)(in_ECX + 0xcc) + 0x75c) == 5)) && (*(char *)(in_ECX + 0xd0) != '\0')) {
    FUN_007a0f80();
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x50))();
    cVar1 = FUN_00416db0();
    if (cVar1 == '\0') {
      FUN_00408ed0();
      FUN_009885d0();
      uStack_c = 0;
      FUN_009a8ee0(auStack_80,auStack_6c);
      uStack_c._0_1_ = 2;
      FUN_00408ad0();
      FUN_009885d0();
      uStack_c._0_1_ = 3;
      FUN_009a9980();
      uStack_c._0_1_ = 2;
      FUN_00408ad0();
      iVar2 = FUN_00475500();
      FUN_009a9880(*(undefined8 *)(iVar2 + 0x6c),*(undefined8 *)(iVar2 + 0x74));
      uStack_c = CONCAT31(uStack_c._1_3_,4);
      FUN_007a1ca0();
      FUN_007a1ea0();
      FUN_00408ad0();
      uStack_c = 0xffffffff;
      FUN_009a9740();
    }
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x5c))();
    iVar2 = 0;
    if (0 < (param_1[1] - *param_1) / 0x1c) {
      do {
        iVar3 = FUN_00aae9af();
        uStack_c = 5;
        if (iVar3 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = FUN_007a03c0();
        }
        uStack_c = 0xffffffff;
        (**(code **)(**(int **)(in_ECX + 0x34) + 0x10))(uVar4,1);
        iVar2 = iVar2 + 1;
      } while (iVar2 < (param_1[1] - *param_1) / 0x1c);
    }
    if ((*(int *)(*(int *)(in_ECX + 0xcc) + 0x75c) == 5) && (*(char *)(in_ECX + 0xd0) != '\0')) {
      pcVar5 = *(code **)(**(int **)(in_ECX + 0x34) + 0x50);
    }
    else {
      pcVar5 = *(code **)(**(int **)(in_ECX + 0x34) + 0x54);
    }
    (*pcVar5)();
  }
  ExceptionList = local_14;
  return;
}

