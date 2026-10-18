// FUN_008b9360 @ 008b9360 body=[[008b9360, 008b93aa]]


void FUN_008b9360(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 == 0x405) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    return;
  }
  if (param_1 == 0x3de) {
    *(undefined1 *)(in_ECX + 0x19) = 1;
    *(undefined4 *)(in_ECX + 0x1c) = 0;
    return;
  }
  uVar1 = FUN_00aaf0c5(&stack0x00000008);
  *(undefined4 *)(in_ECX + 0x1c) = uVar1;
  return;
}

