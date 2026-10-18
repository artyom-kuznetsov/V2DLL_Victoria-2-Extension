// FUN_00880e20 @ 00880e20 body=[[00880e20, 00880e62]]


void FUN_00880e20(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_c [8];
  
  if (param_1 == 0x28c) {
    *(undefined1 *)(in_ECX + 0x28) = 1;
    return;
  }
  puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,&stack0x00000008);
  *(undefined4 *)(in_ECX + 0x20) = *puVar1;
  *(undefined4 *)(in_ECX + 0x24) = puVar1[1];
  return;
}

