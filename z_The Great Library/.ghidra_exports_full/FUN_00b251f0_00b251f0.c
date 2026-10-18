// FUN_00b251f0 @ 00b251f0 body=[[00b251f0, 00b252c0]]


int * FUN_00b251f0(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  puVar1 = param_1;
  iVar2 = FUN_00b25010(param_2,&param_1);
  if ((iVar2 == 0) && (param_1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  *param_3 = uVar3;
  if (param_1 != (undefined4 *)0x0) {
    FUN_00b1f840("Not a file");
    return (int *)0x0;
  }
  if (iVar2 == 0) {
    FUN_00b1f840("File not found");
    return (int *)0x0;
  }
  piVar4 = (int *)(*DAT_013f3aa8)(0xc,0);
  if (piVar4 == (int *)0x0) {
    FUN_00b1f840("Out of memory");
    return (int *)0x0;
  }
  iVar5 = FUN_00b2a1b0(*puVar1);
  *piVar4 = iVar5;
  if (iVar5 != 0) {
    iVar5 = FUN_00b2a2f0(iVar5,*(undefined4 *)(iVar2 + 0x38),0);
    if (iVar5 != 0) {
      piVar4[1] = iVar2;
      piVar4[2] = 0;
      return piVar4;
    }
  }
  (*DAT_013f3ab0)(piVar4);
  return (int *)0x0;
}

