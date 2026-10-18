// FUN_008d6eb0 @ 008d6eb0 body=[[008d6eb0, 008d6eeb] [008d6ef0, 008d6f54]]


/* WARNING: Removing unreachable block (ram,0x008d6f09) */

uint FUN_008d6eb0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int in_ECX;
  int *piVar4;
  
  uVar3 = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(param_1 + 0xc) * 4);
  piVar4 = *(int **)(uVar3 + 0xbd4);
  if (piVar4 != (int *)0x0) {
    uVar1 = *(uint *)(in_ECX + 0x2c);
    do {
      uVar2 = *(uint *)(*piVar4 + 0xa4);
      uVar3 = uVar2;
      if (uVar1 <= uVar2) {
        uVar3 = uVar1;
      }
      uVar3 = FUN_00414bd0(uVar3);
      if (((uVar3 == 0) && (uVar1 <= uVar2)) && (uVar3 = (uint)(uVar2 != uVar1), uVar3 == 0)) {
        return 1;
      }
      piVar4 = (int *)piVar4[2];
    } while (piVar4 != (int *)0x0);
  }
  return uVar3 & 0xffffff00;
}

