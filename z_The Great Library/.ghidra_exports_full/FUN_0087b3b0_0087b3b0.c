// FUN_0087b3b0 @ 0087b3b0 body=[[0087b3b0, 0087b42e]]


void FUN_0087b3b0(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined8 uVar2;
  undefined1 local_10 [12];
  
  *(undefined2 *)(in_ECX + 0x1c) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x1c) = 1;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x1d) = 1;
    return;
  }
  if (param_1 == 399) {
    uVar2 = FUN_00aaf0d0(&stack0x00000008);
    *(undefined8 *)(in_ECX + 0x20) = uVar2;
    return;
  }
  puVar1 = (undefined4 *)FUN_0098fdd0(&param_1,local_10);
  *(undefined4 *)(in_ECX + 0x20) = *puVar1;
  *(undefined4 *)(in_ECX + 0x24) = puVar1[1];
  return;
}

