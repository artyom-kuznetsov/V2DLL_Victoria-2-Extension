// FUN_009befd0 @ 009befd0 body=[[009befd0, 009bf04c]]


void FUN_009befd0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = DAT_00f092fc;
  in_ECX[3] = 0x3e99999a;
  in_ECX[4] = 0x3e99999a;
  in_ECX[5] = uVar1;
  in_ECX[6] = uVar1;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[10] = 0xffffffff;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *(undefined1 *)(in_ECX + 0x10) = 0;
  *in_ECX = uVar1;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *(undefined4 *)((int)in_ECX + 0x41) = 0x100;
  *(undefined **)((int)in_ECX + 0x45) = &DAT_01010100;
  *(undefined1 *)((int)in_ECX + 0x49) = 1;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0xffffffff;
  in_ECX[0xd] = 0xffffffff;
  in_ECX[9] = 0;
  return;
}

