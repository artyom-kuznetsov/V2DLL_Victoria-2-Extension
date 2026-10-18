// FUN_005b66b0 @ 005b66b0 body=[[005b66b0, 005b6740]]


void FUN_005b66b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  undefined8 uVar3;
  
  if (param_1 < 0) {
    param_1 = 0;
  }
  else if (100000 < param_1) {
    param_1 = 100000;
  }
  if (param_1 != *(int *)(unaff_ESI + 0xd8)) {
    *(int *)(unaff_ESI + 0xd8) = param_1;
    iVar1 = *(int *)(*(int *)(DAT_012586dc + 0x20) + 0x48);
    uVar3 = __allmul(iVar1,iVar1 >> 0x1f,param_1,param_1 >> 0x1f);
    uVar2 = __alldiv(uVar3,1000,0);
    iVar1 = DAT_012586dc;
    *(undefined4 *)(unaff_ESI + 0xdc) = uVar2;
    iVar1 = *(int *)(*(int *)(iVar1 + 0x20) + 0x4c);
    uVar3 = __allmul(iVar1,iVar1 >> 0x1f,param_1,param_1 >> 0x1f);
    uVar2 = __alldiv(uVar3,1000,0);
    *(undefined4 *)(unaff_ESI + 0x110) = uVar2;
    FUN_005b5ef0(unaff_ESI);
  }
  return;
}

