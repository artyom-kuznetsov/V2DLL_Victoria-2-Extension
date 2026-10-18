// FUN_005d7ec0 @ 005d7ec0 body=[[005d7ec0, 005d7f70]]


undefined4 * FUN_005d7ec0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  undefined8 uVar5;
  
  iVar1 = *(int *)(DAT_012586dc + 0x20);
  if (*(int *)(iVar1 + 0xf0) / 1000 <= *(int *)(in_ECX + 0x1bc)) {
    iVar3 = *(int *)(iVar1 + 0xe4);
    if (iVar3 == 0) {
      iVar3 = -1;
    }
    else {
      iVar2 = *(int *)(in_ECX + 0xb0);
      if ((iVar2 < -0x189373) || (0x20c49a < iVar2)) {
        uVar5 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
        iVar3 = __alldiv(uVar5,iVar3,iVar3 >> 0x1f);
      }
      else {
        iVar3 = (iVar2 * 1000) / iVar3;
      }
    }
    uVar4 = __alldiv((longlong)*(int *)(iVar1 + 0xec) * (longlong)(1000 - iVar3),1000,0);
    *param_1 = uVar4;
    return param_1;
  }
  *param_1 = 0;
  return param_1;
}

