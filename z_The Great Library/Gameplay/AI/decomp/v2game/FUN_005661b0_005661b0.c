// FUN_005661b0 @ 005661b0 body=[[005661b0, 00566257]]


/* WARNING: Removing unreachable block (ram,0x0056620c) */

int FUN_005661b0(undefined4 *param_1)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  int in_EAX;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  
  puVar6 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar6 = (undefined4 *)*param_1;
  }
  uVar2 = param_1[4];
  uVar4 = 0;
  iVar5 = 0;
  if (0 < (int)uVar2) {
    do {
      pcVar1 = (char *)(iVar5 + (int)puVar6);
      iVar5 = iVar5 + 1;
      uVar4 = (uVar4 + (int)*pcVar1) * 0x3d;
    } while (iVar5 < (int)uVar2);
  }
  piVar3 = *(int **)(*(int *)(in_EAX + 8) + (uVar4 % *(uint *)(in_EAX + 4)) * 4);
  while( true ) {
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    uVar4 = *(uint *)(*piVar3 + 0x40);
    uVar7 = uVar4;
    if (uVar2 <= uVar4) {
      uVar7 = uVar2;
    }
    iVar5 = FUN_00414bd0(uVar7);
    if (((iVar5 == 0) && (uVar2 <= uVar4)) && (uVar4 == uVar2)) break;
    piVar3 = (int *)piVar3[1];
  }
  return *piVar3;
}

