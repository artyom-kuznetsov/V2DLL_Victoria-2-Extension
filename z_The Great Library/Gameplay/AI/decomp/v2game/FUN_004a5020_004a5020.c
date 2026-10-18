// FUN_004a5020 @ 004a5020 body=[[004a5020, 004a50d6]]


undefined4 * FUN_004a5020(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined4 local_c;
  
  uVar1 = *(undefined4 *)(*(int *)(in_ECX + 0x6c) + 0x58);
  uVar2 = *(undefined4 *)(*(int *)(DAT_012587e4 + 4) + *(int *)(*(int *)(in_ECX + 0x6c) + 0x5c) * 4)
  ;
  iVar3 = *(int *)(in_ECX + 0x7c);
  *param_1 = 0;
  param_1[1] = 0;
  if (iVar3 == 2) {
    FUN_004dab20();
    *param_1 = uVar1;
    param_1[1] = local_c;
    return param_1;
  }
  if (iVar3 == 3) {
    puVar4 = (undefined4 *)FUN_004da800(uVar2,1,in_ECX + 8);
    uVar1 = puVar4[1];
    *param_1 = *puVar4;
    param_1[1] = uVar1;
    return param_1;
  }
  if ((iVar3 == 0) || (iVar3 == 1)) {
    puVar4 = (undefined4 *)FUN_004da720(*(undefined4 *)(in_ECX + 0x70),uVar2,1,in_ECX + 8);
    uVar1 = puVar4[1];
    *param_1 = *puVar4;
    param_1[1] = uVar1;
  }
  return param_1;
}

