// FUN_00b11350 @ 00b11350 body=[[00b11350, 00b1138f]]


void FUN_00b11350(void)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) == 0) {
    puVar1 = (undefined4 *)(*(code *)PTR_FUN_00f01b08)(0xc,0x132,4,0,0,0xffffffff);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
      *(undefined2 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
      *(undefined4 **)(in_ECX + 4) = puVar1;
      return;
    }
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  return;
}

