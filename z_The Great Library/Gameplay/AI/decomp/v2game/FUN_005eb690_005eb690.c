// FUN_005eb690 @ 005eb690 body=[[005eb690, 005eb6f4]]


void FUN_005eb690(char param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (param_1 == '\0') {
    FUN_0051e380(*(undefined4 *)(in_ECX + 0x14));
  }
  else {
    puVar1 = (undefined4 *)FUN_0051e370();
    *(undefined4 *)(in_ECX + 0x14) = *puVar1;
    FUN_0051e380(*(undefined4 *)(in_ECX + 0x10));
  }
  return;
}

