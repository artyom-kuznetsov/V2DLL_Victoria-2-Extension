// FUN_00490dc0 @ 00490dc0 body=[[00490dc0, 00490e79]]


/* WARNING: Removing unreachable block (ram,0x00490e2e) */

int FUN_00490dc0(undefined4 *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  
  puVar5 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar5 = (undefined4 *)*param_1;
  }
  uVar2 = param_1[4];
  uVar3 = 0;
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      pcVar1 = (char *)(iVar4 + (int)puVar5);
      iVar4 = iVar4 + 1;
      uVar3 = (uVar3 + (int)*pcVar1) * 0x3d;
    } while (iVar4 < (int)uVar2);
  }
  piVar7 = *(int **)(DAT_0125bc60 + (uVar3 % DAT_0125bc5c) * 4);
  if (piVar7 != (int *)0x0) {
    while( true ) {
      uVar3 = *(uint *)(*piVar7 + 0x40);
      uVar6 = uVar3;
      if (uVar2 <= uVar3) {
        uVar6 = uVar2;
      }
      iVar4 = FUN_00414bd0(uVar6);
      if (((iVar4 == 0) && (uVar2 <= uVar3)) && (uVar3 == uVar2)) break;
      piVar7 = (int *)piVar7[1];
      if (piVar7 == (int *)0x0) {
        return 0;
      }
    }
    return *piVar7;
  }
  return 0;
}

