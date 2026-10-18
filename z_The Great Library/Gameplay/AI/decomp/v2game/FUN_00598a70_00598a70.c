// FUN_00598a70 @ 00598a70 body=[[00598a70, 00598b53]]


int * FUN_00598a70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar1 = FUN_00598a30();
  iVar2 = FUN_00598a30();
  if (((iVar1 < 1) || (iVar2 < 1)) || (iVar1 <= iVar2)) {
    *param_1 = 0;
    return param_1;
  }
  iVar1 = iVar1 * 1000;
  iVar3 = iVar2 * 1000;
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else if (iVar3 + 0x189373U < 0x39580e) {
    iVar1 = (iVar2 * 1000000) / iVar1;
  }
  else {
    uVar4 = __allmul(iVar3,iVar3 >> 0x1f,1000,0);
    iVar1 = __alldiv(uVar4,iVar1,iVar1 >> 0x1f);
  }
  iVar1 = 1000 - iVar1;
  FUN_00401000(0x44612000);
  iVar2 = FUN_00b31c00();
  if (iVar1 < 0) {
    *param_1 = 0;
    return param_1;
  }
  if (iVar2 < iVar1) {
    iVar1 = iVar2;
  }
  *param_1 = iVar1;
  return param_1;
}

