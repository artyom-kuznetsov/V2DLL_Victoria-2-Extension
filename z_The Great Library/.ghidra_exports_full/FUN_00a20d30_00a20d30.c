// FUN_00a20d30 @ 00a20d30 body=[[00a20d30, 00a20d63]]


void FUN_00a20d30(void)

{
  undefined4 uVar1;
  undefined1 *in_ECX;
  
  uVar1 = DAT_00f092fc;
  *in_ECX = 0xa7;
  *(undefined4 *)(in_ECX + 8) = 0x18d;
  *(undefined ***)(in_ECX + 4) = CColor::vftable;
  *(undefined4 *)(in_ECX + 0xc) = uVar1;
  *(undefined4 *)(in_ECX + 0x10) = uVar1;
  *(undefined4 *)(in_ECX + 0x14) = uVar1;
  *(undefined4 *)(in_ECX + 0x18) = uVar1;
  in_ECX[0x1c] = 1;
  return;
}

