// FUN_00b19cc0 @ 00b19cc0 body=[[00b19cc0, 00b19d29]]


void FUN_00b19cc0(int param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  if (param_1 != *(int *)(in_ECX + 0x10)) {
    FUN_00b19ad0();
    if (param_1 == 0) {
      *(byte *)(in_ECX + 0x15) = *(byte *)(in_ECX + 0x15) | 8;
      *(undefined4 *)(in_ECX + 4) = 0;
      *(undefined4 *)(in_ECX + 0x10) = 0;
      return;
    }
    if ((*(byte *)(in_ECX + 0x15) & 8) != 0) {
      *(undefined4 *)(in_ECX + 4) = 0;
    }
    if (*(int *)(in_ECX + 4) == 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b08)();
    }
    else {
      uVar1 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(in_ECX + 4),param_1,0x16,4,0,0,0xffffffff);
    }
    *(undefined4 *)(in_ECX + 4) = uVar1;
    *(int *)(in_ECX + 0x10) = param_1;
    *(byte *)(in_ECX + 0x15) = *(byte *)(in_ECX + 0x15) & 0xf4 | 4;
  }
  return;
}

