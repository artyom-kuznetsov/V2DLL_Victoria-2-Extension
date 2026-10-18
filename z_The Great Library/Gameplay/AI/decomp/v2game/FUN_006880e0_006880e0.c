// FUN_006880e0 @ 006880e0 body=[[006880e0, 006881cc]]


/* WARNING: Removing unreachable block (ram,0x0068811c) */
/* WARNING: Removing unreachable block (ram,0x0068818f) */

uint FUN_006880e0(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0xb3c);
  if (piVar5 != (int *)0x0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    do {
      iVar3 = *piVar5;
      piVar5 = (int *)piVar5[2];
      uVar2 = *(uint *)(iVar3 + 0x20);
      uVar4 = uVar2;
      if (uVar1 <= uVar2) {
        uVar4 = uVar1;
      }
      iVar3 = FUN_00414bd0(uVar4);
      if (((iVar3 == 0) && (uVar1 <= uVar2)) && (uVar2 == uVar1)) {
        return 1;
      }
    } while (piVar5 != (int *)0x0);
  }
  piVar5 = *(int **)(param_1 + 0xb4c);
  if (piVar5 != (int *)0x0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    do {
      iVar3 = *piVar5;
      piVar5 = (int *)piVar5[2];
      uVar2 = *(uint *)(iVar3 + 0x20);
      uVar4 = uVar2;
      if (uVar1 <= uVar2) {
        uVar4 = uVar1;
      }
      param_1 = FUN_00414bd0(uVar4);
      if (((param_1 == 0) && (uVar1 <= uVar2)) && (param_1 = (uint)(uVar2 != uVar1), param_1 == 0))
      {
        return 1;
      }
    } while (piVar5 != (int *)0x0);
  }
  return param_1 & 0xffffff00;
}

