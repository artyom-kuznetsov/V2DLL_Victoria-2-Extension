// FUN_004f4ac0 @ 004f4ac0 body=[[004f4ac0, 004f4b26]]


void FUN_004f4ac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int unaff_ESI;
  longlong lVar4;
  
  *(undefined4 *)(unaff_ESI + 0x1e0) = param_3;
  *(undefined4 *)(unaff_ESI + 0x1e4) = param_4;
  lVar4 = __allmul(DAT_00f0b2d0,DAT_00f0b2d4,param_1,param_2);
  uVar3 = (uint)(lVar4 >> 0xf);
  puVar1 = (uint *)(unaff_ESI + 0x150);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  *(int *)(unaff_ESI + 0x154) =
       (*(int *)(unaff_ESI + 0x154) - (int)((ulonglong)(lVar4 >> 0xf) >> 0x20)) -
       (uint)(uVar2 < uVar3);
  if ((*(int *)(unaff_ESI + 0x154) < 1) && (*(int *)(unaff_ESI + 0x154) < 0)) {
    *(undefined4 *)(unaff_ESI + 0x150) = 0;
    *(undefined4 *)(unaff_ESI + 0x154) = 0;
  }
  return;
}

