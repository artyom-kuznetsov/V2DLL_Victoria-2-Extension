// FUN_0048daa0 @ 0048daa0 body=[[0048daa0, 0048dbae]]


void FUN_0048daa0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_ECX;
  int iVar3;
  int iVar4;
  int local_20;
  void *pvStack_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b5b740;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  (**(code **)*in_ECX)(param_1);
  *(undefined4 **)(param_1 + 0xe8) = in_ECX;
  local_20 = (*(int *)(*(int *)(param_1 + 0x5c) + 0xcc) - *(int *)(*(int *)(param_1 + 0x5c) + 200))
             / 0x24;
  if (0 < local_20) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) +
                      *(int *)(*(int *)(*(int *)(param_1 + 0x5c) + 200) + 4 + iVar4) * 4);
      if ((*(int *)(param_1 + 0x110) == 0) ||
         (iVar3 = *(int *)(*(int *)(param_1 + 0x110) + 0x10),
         (int)(*(int *)(iVar3 + 0x38) - *(int *)(iVar3 + 0x34) & 0xfffffff8U) < 1)) {
        iVar3 = param_1 + 0x130;
      }
      else {
        iVar3 = *(int *)(iVar3 + 0x34);
      }
      if ((*(int *)(iVar1 + 0x110) == 0) ||
         (iVar2 = *(int *)(*(int *)(iVar1 + 0x110) + 0x10),
         (int)(*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34) & 0xfffffff8U) < 1)) {
        iVar2 = iVar1 + 0x130;
      }
      else {
        iVar2 = *(int *)(iVar2 + 0x34);
      }
      if ((*(int *)(iVar2 + 4) == *(int *)(iVar3 + 4)) && (*(int *)(iVar1 + 0xe8) == 0)) {
        FUN_0048daa0(iVar1);
      }
      iVar4 = iVar4 + 0x24;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  FUN_0048dff0();
  ExceptionList = pvStack_18;
  return;
}

