// FUN_00966930 @ 00966930 body=[[00966930, 00966abf] [00966ac3, 00966ad2]]


void FUN_00966930(void)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  int unaff_ESI;
  undefined8 uVar4;
  undefined1 local_74 [64];
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_24;
  int local_20;
  uint local_1c;
  undefined1 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00b4fa40;
  local_10 = ExceptionList;
  iVar1 = *(int *)(unaff_ESI + 0x1d4);
  if (iVar1 != 0) {
    local_18 = *(undefined1 **)(unaff_ESI + 0x18c);
    uVar2 = *(uint *)(iVar1 + 0xf0) >> 0x10;
    local_24 = (*(uint *)(iVar1 + 0xf0) & 0xffff) << 1 | uVar2 << 0x11;
    local_20 = (int)(*(int *)(iVar1 + 0xf4) << 0x10 | uVar2) >> 0xf;
    local_1c = *(uint *)(unaff_ESI + 0x188);
    if (((int)local_18 < local_20) ||
       (((int)local_18 <= local_20 && (*(uint *)(unaff_ESI + 0x188) <= local_24)))) {
      puVar3 = &local_24;
    }
    else {
      puVar3 = &local_1c;
    }
    uVar2 = puVar3[1];
    ExceptionList = &local_10;
    *(uint *)(unaff_ESI + 0x188) = *puVar3;
    *(uint *)(unaff_ESI + 0x18c) = uVar2;
    uVar4 = FUN_00b31c36();
    *(undefined8 *)(*(int *)(unaff_ESI + 0x1d4) + 0xe8) = uVar4;
    iVar1 = *(int *)(unaff_ESI + 0x1d4);
    *(undefined4 *)(iVar1 + 0xb8) = *(undefined4 *)(iVar1 + 0xf0);
    *(undefined4 *)(iVar1 + 0xbc) = *(undefined4 *)(iVar1 + 0xf4);
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_8 = 0;
    _memset(local_74,0,0x40);
    FUN_00423920();
    local_8 = 1;
    FUN_004dd3c0();
    FUN_0047dbb0();
    FUN_0047dbb0();
    local_18 = &stack0xffffff74;
    FUN_0047de60(*(undefined4 *)(unaff_ESI + 0x1d4));
    puVar3 = (uint *)(unaff_ESI + 0x180);
    uVar2 = *puVar3;
    *puVar3 = *puVar3 + *(uint *)(unaff_ESI + 0x260);
    *(int *)(unaff_ESI + 0x184) =
         *(int *)(unaff_ESI + 0x184) + *(int *)(unaff_ESI + 0x264) +
         (uint)CARRY4(uVar2,*(uint *)(unaff_ESI + 0x260));
    *(undefined4 *)(unaff_ESI + 0x130) = 0x8000;
    *(undefined4 *)(unaff_ESI + 0x134) = 0;
    *(undefined4 *)(unaff_ESI + 0x138) = 0x8000;
    *(undefined4 *)(unaff_ESI + 0x13c) = 0;
    if (local_34 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00aae91b();
    }
  }
  ExceptionList = local_10;
  return;
}

