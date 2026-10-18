// FUN_007df9e0 @ 007df9e0 body=[[007df9e0, 007dfa6d] [007dfa71, 007dfac8] [007dfacc, 007dfb23] [007dfb27, 007dfb76] [007dfb7a, 007dfb8a]]


void FUN_007df9e0(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  uint auStack_50 [4];
  undefined4 uStack_40;
  uint uStack_3c;
  uint auStack_34 [4];
  undefined4 uStack_24;
  uint uStack_20;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_00b6b3b0;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  *(undefined1 *)(unaff_ESI + 0x26b8) = 1;
  uVar1 = FUN_00aad56b(0x60);
  *(undefined4 *)(unaff_ESI + 0x26b4) = uVar1;
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  FUN_00409350("GFX_tooltip_money",0x11);
  uStack_c = 0;
  FUN_007df840(auStack_50);
  uStack_c = 0xffffffff;
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_50[0]);
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  FUN_00409350("GFX_tooltip_money_small",0x17);
  uStack_c = 1;
  FUN_007df840(auStack_50);
  uStack_c = 0xffffffff;
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_50[0]);
  }
  uStack_3c = 0xf;
  uStack_40 = 0;
  auStack_50[0] = auStack_50[0] & 0xffffff00;
  FUN_00409350("GFX_tooltip_money_big",0x15);
  uStack_c = 2;
  FUN_007df840(auStack_50);
  uStack_c = 0xffffffff;
  if (0xf < uStack_3c) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_50[0]);
  }
  uStack_20 = 0xf;
  uStack_24 = 0;
  auStack_34[0] = auStack_34[0] & 0xffffff00;
  FUN_00409350("GFX_tooltip_strength",0x14);
  uStack_c = 3;
  FUN_007df840(auStack_34);
  if (0xf < uStack_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(auStack_34[0]);
  }
  ExceptionList = pvStack_14;
  return;
}

