// FUN_00885250 @ 00885250 body=[[00885250, 008852a5]]


void FUN_00885250(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x1d) = 1;
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,&stack0x00000008);
  *(undefined4 *)(in_ECX + 0x20) = *puVar1;
  *(undefined4 *)(in_ECX + 0x24) = puVar1[1];
  return;
}

