// FUN_00b18720 @ 00b18720 body=[[00b18720, 00b18770]]


undefined4 FUN_00b18720(int param_1,int param_2)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 4) = param_1;
  *(int *)(in_ECX + 8) = param_1;
  *(int *)(in_ECX + 0xc) = param_2;
  *(int *)(in_ECX + 0x10) = param_2;
  *(undefined4 *)(in_ECX + 0x14) = 0x400;
  if (param_1 == 0) {
    *(undefined1 *)(in_ECX + 0x18) = 1;
    if (param_2 != 0) {
      uVar1 = (*(code *)PTR_FUN_00f01b08)(param_2,4,4,0,0,0);
      *(undefined4 *)(in_ECX + 4) = uVar1;
      *(undefined4 *)(in_ECX + 8) = uVar1;
      return 1;
    }
  }
  else {
    *(undefined1 *)(in_ECX + 0x18) = 0;
  }
  return 1;
}

