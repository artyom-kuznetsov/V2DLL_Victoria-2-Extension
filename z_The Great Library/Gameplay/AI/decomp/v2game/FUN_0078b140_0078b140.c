// FUN_0078b140 @ 0078b140 body=[[0078b140, 0078b1e1]]


void FUN_0078b140(void)

{
  int unaff_ESI;
  int iVar1;
  undefined4 local_8;
  
  (**(code **)(*(int *)(*(int *)(unaff_ESI + 0x2c) + 0x54) + 0x10))();
  local_8 = FUN_00b31c00();
  if (0 < *(int *)(unaff_ESI + 0x58)) {
    local_8 = local_8 * 0x28;
    iVar1 = 0;
    do {
      (**(code **)(*(int *)(*(int *)(*(int *)(unaff_ESI + 0x5c) + iVar1 * 4) + 0x1c) + 0x28))();
      FUN_00408ed0(*(int *)(unaff_ESI + 0x6c) + local_8 + 0xc,0,0xffffffff);
      FUN_0078a4d0();
      local_8 = local_8 + 0x28;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(unaff_ESI + 0x58));
  }
  return;
}

