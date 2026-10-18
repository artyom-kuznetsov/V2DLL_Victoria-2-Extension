// FUN_008b9300 @ 008b9300 body=[[008b9300, 008b9354]]


void FUN_008b9300(int param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  undefined1 local_8 [4];
  
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
  puVar1 = (undefined4 *)FUN_0098fb60(&param_1,local_8);
  *(undefined4 *)(in_ECX + 0x1c) = *puVar1;
  return;
}

