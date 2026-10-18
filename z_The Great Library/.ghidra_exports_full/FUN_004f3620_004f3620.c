// FUN_004f3620 @ 004f3620 body=[[004f3620, 004f378f]]


void FUN_004f3620(char param_1)

{
  uint uVar1;
  int unaff_ESI;
  undefined1 local_28 [8];
  undefined4 local_20;
  undefined4 local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4ceee;
  local_10 = ExceptionList;
  if (param_1 != '\0') {
    uVar1 = *(uint *)(unaff_ESI + 0x20);
    ExceptionList = &local_10;
    FUN_004dde00(*(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 300),&local_20,unaff_ESI + 0x28,
                 unaff_ESI + 0x100,local_28,uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11
                );
    *(undefined4 *)(unaff_ESI + 0xdc) = local_1c;
    *(undefined4 *)(unaff_ESI + 0xd8) = local_20;
    FUN_0047d9e0(unaff_ESI + 0x28);
    ExceptionList = local_10;
    return;
  }
  ExceptionList = &local_10;
  if ((DAT_013f27a0 & 1) == 0) {
    DAT_013f27a0 = DAT_013f27a0 | 1;
    local_8 = 0;
    ExceptionList = &local_10;
    FUN_00561bd0();
    _atexit((_func_4879 *)&LAB_00c7f9c0);
  }
  local_8 = 0xffffffff;
  FUN_0047e2f0();
  uVar1 = *(uint *)(unaff_ESI + 0x20);
  FUN_004dde00(*(undefined4 *)(*(int *)(unaff_ESI + 0x18) + 300),&local_20,&DAT_013f2748,
               unaff_ESI + 0x100,local_28,uVar1 << 0xf,((int)uVar1 >> 0x1f) << 0xf | uVar1 >> 0x11);
  *(undefined4 *)(unaff_ESI + 0xd8) = local_20;
  *(undefined4 *)(unaff_ESI + 0xdc) = local_1c;
  ExceptionList = local_10;
  return;
}

