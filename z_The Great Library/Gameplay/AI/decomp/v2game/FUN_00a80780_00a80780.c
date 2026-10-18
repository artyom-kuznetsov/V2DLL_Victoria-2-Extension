// FUN_00a80780 @ 00a80780 body=[[00a80780, 00a807c6]]


void FUN_00a80780(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_58 [21];
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    _memset(local_58,0,0x54);
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = local_58;
      puVar3 = param_1;
      for (iVar1 = 0x15; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0x15;
  }
  return;
}

