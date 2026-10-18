// FUN_005ab710 @ 005ab710  (requested 005AB710, first bytes: 55 8B EC 8B 41 18 8B 88)


undefined4 * FUN_005ab710(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined8 uVar3;
  
  iVar1 = (*(int *)(*(int *)(in_ECX + 0x18) + 0x114) / 1000) * -1000 + 100000;
  uVar3 = __allmul(iVar1,iVar1 >> 0x1f,1000,0);
  uVar2 = __alldiv(uVar3,100000,0);
  *param_1 = uVar2;
  return param_1;
}

