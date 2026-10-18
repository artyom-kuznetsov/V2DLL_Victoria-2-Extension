// FUN_009665d0 @ 009665d0 body=[[009665d0, 009666a3]]


void FUN_009665d0(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int local_24;
  undefined8 local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00b4bc6b;
  local_14 = ExceptionList;
  iVar2 = 0;
  iVar3 = *(int *)(DAT_01258a3c + 0x10) - *(int *)(DAT_01258a3c + 0xc) >> 2;
  local_24 = 0;
  local_20 = 0;
  if (0 < iVar3) {
    puVar4 = *(uint **)(param_1 + 0x7c);
    do {
      uVar1 = local_20;
      if ((local_20._4_4_ <= (int)puVar4[1]) &&
         ((local_20._4_4_ < (int)puVar4[1] || ((uint)local_20 < *puVar4)))) {
        local_24 = *(int *)(*(int *)(DAT_01258a3c + 0xc) + iVar2 * 4);
        uVar1 = *(undefined8 *)puVar4;
      }
      local_20 = uVar1;
      iVar2 = iVar2 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar2 < iVar3);
    if (local_24 != 0) {
      return;
    }
  }
  if (DAT_01258a34 == 0) {
    ExceptionList = &local_14;
    iVar2 = FUN_00aae9af(0x1dc);
    local_c = 0;
    if (iVar2 == 0) {
      DAT_01258a34 = 0;
    }
    else {
      DAT_01258a34 = FUN_00972e50();
    }
  }
  ExceptionList = local_14;
  return;
}

