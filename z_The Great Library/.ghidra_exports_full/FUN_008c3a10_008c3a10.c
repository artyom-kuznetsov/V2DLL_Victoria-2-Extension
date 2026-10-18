// FUN_008c3a10 @ 008c3a10 body=[[008c3a10, 008c3a7b]]


void FUN_008c3a10(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined4 local_c [2];
  
  local_c[0] = 0x2d2d2d;
  *(undefined4 *)(in_ECX + 0x20) = 0x2d2d2d;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (param_1 == 0x29f) {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
    return;
  }
  if (param_1 == 0x2a0) {
    *(undefined1 *)(in_ECX + 0x1c) = 0;
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,&stack0x00000008);
  *(undefined4 *)(in_ECX + 0x20) = *puVar1;
  *(undefined4 *)(in_ECX + 0x24) = puVar1[1];
  return;
}

