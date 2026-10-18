// FUN_007a3180 @ 007a3180 body=[[007a3180, 007a331f]]


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007a3180(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  void *pvStack_14;
  undefined1 *puStack_10;
  int iStack_c;
  
  iStack_c = 0xffffffff;
  puStack_10 = &LAB_00b59933;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  iVar1 = (**(code **)(**(int **)(in_ECX + 0x30) + 0x34))();
  if ((*(int *)(iVar1 + 8) != 0) && (*(char *)(in_ECX + 200) == '\0')) {
    piVar2 = (int *)(**(code **)(**(int **)(in_ECX + 0x30) + 0x34))();
    iVar1 = *piVar2;
    while (iVar1 != 0) {
      iVar1 = *(int *)(iVar1 + 8);
      FUN_0057aab0();
    }
    iStack_c = 0;
    iVar1 = FUN_00aae9af();
    iStack_c._0_1_ = 1;
    if (iVar1 != 0) {
      FUN_0072d4e0();
      iStack_c._0_1_ = 2;
      FUN_00408ed0();
      iStack_c._0_1_ = 3;
      FUN_00408ed0();
      iStack_c._0_1_ = 4;
      FUN_00409350();
      iStack_c._0_1_ = 5;
      FUN_00a17000(*(undefined4 *)(_DAT_00000000 + 0x28));
      iStack_c._0_1_ = 1;
      FUN_00a02b80(iVar1);
    }
    iStack_c = (uint)iStack_c._1_3_ << 8;
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x38) + 0x38) + 0x18))();
    FUN_009a63f0();
  }
  ExceptionList = pvStack_14;
  return;
}

