// FUN_00b258c0 @ 00b258c0 body=[[00b258c0, 00b25964]]


int * FUN_00b258c0(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = FUN_00b25750(param_2);
  *param_3 = (uint)(iVar1 != 0);
  if (iVar1 == 0) {
    FUN_00b1f840(0);
    return (int *)0x0;
  }
  piVar2 = (int *)(*DAT_013f3aa8)(0xc,0);
  if (piVar2 == (int *)0x0) {
    FUN_00b1f840("Out of memory");
    return (int *)0x0;
  }
  iVar3 = FUN_00b2a1b0(*param_1);
  *piVar2 = iVar3;
  if (iVar3 != 0) {
    iVar3 = FUN_00b2a2f0(iVar3,*(undefined4 *)(iVar1 + 0x10),0);
    if (iVar3 != 0) {
      piVar2[1] = iVar1;
      piVar2[2] = 0;
      return piVar2;
    }
  }
  (*DAT_013f3ab0)(piVar2);
  return (int *)0x0;
}

