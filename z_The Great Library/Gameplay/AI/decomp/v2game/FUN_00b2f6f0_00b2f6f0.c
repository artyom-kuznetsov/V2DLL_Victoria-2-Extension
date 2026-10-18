// FUN_00b2f6f0 @ 00b2f6f0 body=[[00b2f6f0, 00b2f768]]


void FUN_00b2f6f0(uint *param_1,code *param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  puVar1 = param_1;
  uVar2 = 0;
  if (*param_1 != 0) {
    param_1 = (uint *)0x0;
    do {
      iVar3 = puVar1[1] + (int)param_1 + 0x10;
      FUN_00b2f9c0(iVar3,param_2);
      FUN_00b2f960(iVar3);
      param_1 = (uint *)((int)param_1 + 0x18);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *puVar1);
  }
  (*param_2)(puVar1[1]);
  (*param_2)(puVar1[3]);
  (*param_2)(puVar1[5]);
  (*param_2)(puVar1[6]);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}

