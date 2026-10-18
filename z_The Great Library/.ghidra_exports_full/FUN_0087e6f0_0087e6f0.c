// FUN_0087e6f0 @ 0087e6f0 body=[[0087e6f0, 0087e750]]


void FUN_0087e6f0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
  }
  else if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x1d) = 1;
  }
  else {
    puVar1 = (undefined4 *)FUN_0055c6c0(DAT_012587e4,local_c,&stack0x00000008);
    *(undefined4 *)(in_ECX + 0x20) = *puVar1;
    *(undefined4 *)(in_ECX + 0x24) = puVar1[1];
  }
  uVar2 = FUN_00aaf0c5(&stack0x00000008);
  *(undefined4 *)(in_ECX + 0x28) = uVar2;
  return;
}

