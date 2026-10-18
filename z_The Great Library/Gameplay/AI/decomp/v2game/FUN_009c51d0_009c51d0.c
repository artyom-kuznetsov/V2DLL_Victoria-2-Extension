// FUN_009c51d0 @ 009c51d0 body=[[009c51d0, 009c525d] [009c5260, 009c530e]]


void FUN_009c51d0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_8;
  
  if (0 < param_2) {
    if (param_2 + 0x189373U < 0x39580e) {
      local_8 = (param_2 * 1000) / 2000;
    }
    else {
      uVar4 = __allmul(param_2,param_2 >> 0x1f,1000,0);
      local_8 = __alldiv(uVar4,2000,0);
    }
    uVar4 = __allmul(param_2,param_2 >> 0x1f,1000,0);
    iVar1 = __alldiv(uVar4,1000,0);
    do {
      iVar3 = local_8 >> 0x1f;
      uVar4 = __allmul(local_8,iVar3,local_8,iVar3);
      iVar2 = __alldiv(uVar4,1000,0);
      iVar2 = iVar2 - param_2;
      uVar4 = __allmul(local_8,iVar3,2000,0);
      iVar3 = __alldiv(uVar4,1000,0);
      if (iVar3 == 0) {
        iVar3 = -1;
      }
      else if (iVar2 + 0x189373U < 0x39580e) {
        iVar3 = (iVar2 * 1000) / iVar3;
      }
      else {
        uVar4 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
        iVar3 = __alldiv(uVar4,iVar3,iVar3 >> 0x1f);
      }
      local_8 = local_8 - iVar3;
    } while ((iVar1 < iVar2) || (iVar2 < -iVar1));
    *param_1 = local_8;
    return;
  }
  *param_1 = 0;
  return;
}

