// FUN_00b19030 @ 00b19030 body=[[00b19030, 00b19058] [00b19060, 00b19119]]


void FUN_00b19030(int param_1,int param_2)

{
  undefined2 uVar1;
  short sVar2;
  int in_ECX;
  undefined2 *puVar3;
  
  if ((*(char *)(in_ECX + 0x8c) == '\0') && (param_2 != 0)) {
    puVar3 = (undefined2 *)(param_1 + 4);
    do {
      uVar1 = FUN_00b31c00();
      puVar3[-2] = uVar1;
      uVar1 = FUN_00b31c00();
      puVar3[-1] = uVar1;
      uVar1 = FUN_00b31c00();
      *puVar3 = uVar1;
      if (*(char *)(in_ECX + 0x8d) == '\0') {
        sVar2 = puVar3[1];
      }
      else {
        sVar2 = -puVar3[1];
      }
      puVar3[1] = sVar2;
      puVar3 = puVar3 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

