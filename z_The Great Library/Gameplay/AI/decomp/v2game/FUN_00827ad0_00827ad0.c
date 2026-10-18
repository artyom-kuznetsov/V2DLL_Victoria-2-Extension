// FUN_00827ad0 @ 00827ad0 body=[[00827ad0, 00827b04]]


undefined4 FUN_00827ad0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *in_ECX;
  bool bVar3;
  
  if ((int *)in_ECX[0x1a] != in_ECX) {
                    /* WARNING: Could not recover jumptable at 0x00827b03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*(int *)in_ECX[0x1a] + 0x194))();
    return uVar2;
  }
  piVar1 = (int *)in_ECX[0x15];
  bVar3 = piVar1 == (int *)0x0;
  if (!bVar3) {
    do {
      if (*piVar1 == param_1) break;
      piVar1 = (int *)piVar1[2];
    } while (piVar1 != (int *)0x0);
    bVar3 = piVar1 == (int *)0x0;
  }
  return CONCAT31((int3)((uint)piVar1 >> 8),!bVar3);
}

