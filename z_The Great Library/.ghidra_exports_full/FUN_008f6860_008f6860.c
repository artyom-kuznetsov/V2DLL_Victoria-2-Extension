// FUN_008f6860 @ 008f6860 body=[[008f6860, 008f68cb]]


void FUN_008f6860(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    return;
  }
  if (param_1 == 0x29f) {
    *(undefined2 *)(in_ECX + 0x24) = 0x101;
    return;
  }
  if (param_1 == 0x2a0) {
    *(undefined2 *)(in_ECX + 0x24) = 1;
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,&stack0x00000008);
  *(undefined4 *)(in_ECX + 0x1c) = *puVar1;
  *(undefined4 *)(in_ECX + 0x20) = puVar1[1];
  return;
}

