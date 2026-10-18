// FUN_00a330d0 @ 00a330d0 body=[[00a330d0, 00a33158] [00a3315c, 00a331e1]]


void FUN_00a330d0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_ECX;
  int iVar4;
  int *piVar5;
  undefined4 local_38;
  uint local_34 [4];
  undefined4 local_24;
  uint local_20;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00bbc108;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00a36f30(param_1[9],in_ECX,local_38);
  uVar3 = FUN_00a32ba0();
  uVar3 = FUN_0042c180(local_34,uVar3);
  local_c = 0;
  FUN_00a32f00(param_1,uVar3,0);
  local_c = 0xffffffff;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(local_34[0]);
  }
  iVar1 = *param_1;
  local_24 = 0;
  iVar2 = (*(int *)(iVar1 + 0xcc) - *(int *)(iVar1 + 200)) / 0x54;
  local_20 = 0xf;
  local_34[0] = local_34[0] & 0xffffff00;
  if (0 < iVar2) {
    piVar5 = (int *)(*(int *)(iVar1 + 200) + 0x34);
    iVar4 = 0;
    do {
      if (*piVar5 == *(int *)(iVar1 + 0xd8)) {
        piVar5 = (int *)(iVar4 * 0x54 + *(int *)(iVar1 + 200));
        goto LAB_00a331b2;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 0x15;
    } while (iVar4 < iVar2);
  }
  piVar5 = *(int **)(iVar1 + 200);
LAB_00a331b2:
  if (param_1 == piVar5) {
    FUN_00a319d0(iVar1);
    FUN_00a317b0();
  }
  ExceptionList = local_14;
  return;
}

