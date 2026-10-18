// FUN_009f6320 @ 009f6320 body=[[009f6320, 009f63e5] [009f63e9, 009f6406] [009f640a, 009f641e]]


undefined1 * FUN_009f6320(undefined1 *param_1)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 in_EDX;
  int iVar2;
  int iVar3;
  undefined1 local_54 [16];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 **ppuStack_38;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined1 *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00b41801;
  local_10 = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_10;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  local_14 = 1;
  local_28 = (undefined4 *)0x0;
  local_24 = (undefined4 *)0x0;
  local_20 = 0;
  local_8 = 1;
  ppuStack_38 = &local_28;
  local_18 = local_54;
  local_40 = 0xf;
  local_44 = 0;
  local_54[0] = 0;
  FUN_00408ed0(in_EDX,0,0xffffffff);
  (**(code **)(*in_ECX + 0xcc))();
  iVar3 = 0;
  if (0 < (int)((int)local_24 - (int)local_28 & 0xffffffe0U)) {
    do {
      FUN_00448aa0((undefined1 *)((int)local_28 + iVar2),0,0xffffffff);
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x20;
    } while (iVar3 < (int)local_24 - (int)local_28 >> 5);
  }
  puVar1 = local_28;
  if (local_28 == (undefined4 *)0x0) {
    ExceptionList = local_10;
    return param_1;
  }
  while( true ) {
    if (puVar1 == local_24) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b(local_28);
    }
    if (0xf < (uint)puVar1[5]) break;
    puVar1[5] = 0xf;
    puVar1[4] = 0;
    *(undefined1 *)puVar1 = 0;
    puVar1 = puVar1 + 8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(*puVar1);
}

