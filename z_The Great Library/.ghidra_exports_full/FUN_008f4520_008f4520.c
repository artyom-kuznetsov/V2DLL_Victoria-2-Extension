// FUN_008f4520 @ 008f4520 body=[[008f4520, 008f457b]]


void FUN_008f4520(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
  }
  else if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x19) = 1;
  }
  else if (param_1 == 0x91f) {
    *(undefined1 *)(in_ECX + 0x24) = 1;
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,&stack0x00000008);
  *(undefined4 *)(in_ECX + 0x1c) = *puVar1;
  *(undefined4 *)(in_ECX + 0x20) = puVar1[1];
  return;
}

