// FUN_0057a230 @ 0057a230 body=[[0057a230, 0057a313]]


void FUN_0057a230(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_00538150();
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8);
    iVar1 = *(int *)(DAT_012588e8 + 0xb0c);
    if (param_1 == 0) {
      iVar2 = -1;
    }
    else if ((iVar2 < -0x189373) || (0x20c49a < iVar2)) {
      uVar3 = __allmul(iVar2,iVar2 >> 0x1f,1000,0);
      iVar2 = __alldiv(uVar3,param_1,param_1 >> 0x1f);
    }
    else {
      iVar2 = (iVar2 * 1000) / param_1;
    }
    iVar2 = iVar2 / 1000;
    if (iVar1 == *(int *)(param_1 + 0x20)) {
      iVar2 = iVar2 + 1;
    }
    iVar1 = iVar1 + iVar2 * 0x18;
    if (iVar1 < *(int *)(DAT_012586dc + 0xc)) {
      *param_2 = iVar1;
      return;
    }
  }
  *param_2 = *(int *)(DAT_012586dc + 0xc);
  return;
}

