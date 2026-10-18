// FUN_00a4fcd0 @ 00a4fcd0 body=[[00a4fcd0, 00a4fe27]]


void FUN_00a4fcd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  int local_18 [5];
  
  *(undefined4 *)(in_ECX + 0xf8) = *(undefined4 *)(param_1 + 100);
  *(int *)(in_ECX + 0x44) = param_1 + 0x158;
  FUN_00a4fea0(*(undefined4 *)(param_1 + 100),in_ECX + 0x8c);
  uVar4 = *(uint *)(in_ECX + 0x104);
  local_18[1] = 0;
  do {
    if ((uVar4 < *(uint *)(in_ECX + 0x104)) || (*(uint *)(in_ECX + 0x108) <= uVar4)) {
      return;
    }
    local_18[2] = uVar4;
    local_18[0] = FUN_009bcbf0(uVar4,1);
    piVar1 = *(int **)(in_ECX + 0x118);
    if (local_18 < piVar1) {
      piVar2 = *(int **)(in_ECX + 0x114);
      if (local_18 < piVar2) goto LAB_00a4fd94;
      if (piVar1 == *(int **)(in_ECX + 0x11c)) {
        FUN_007b94a0();
      }
      uVar4 = local_18[2];
      if (*(undefined4 **)(in_ECX + 0x118) != (undefined4 *)0x0) {
        **(undefined4 **)(in_ECX + 0x118) =
             *(undefined4 *)(*(int *)(in_ECX + 0x114) + ((int)local_18 - (int)piVar2 >> 2) * 4);
      }
    }
    else {
LAB_00a4fd94:
      if (piVar1 == *(int **)(in_ECX + 0x11c)) {
        FUN_007b94a0();
      }
      if (*(int **)(in_ECX + 0x118) != (int *)0x0) {
        **(int **)(in_ECX + 0x118) = local_18[0];
      }
    }
    *(int *)(in_ECX + 0x118) = *(int *)(in_ECX + 0x118) + 4;
    iVar3 = 0;
    if (0 < (int)(*(int *)(in_ECX + 0xe8) - *(int *)(in_ECX + 0xe4) & 0xfffffffcU)) {
      do {
        *(undefined4 *)(local_18[1] + 100 + *(int *)(*(int *)(in_ECX + 0xe4) + iVar3 * 4)) =
             *(undefined4 *)(local_18[1] + *(int *)(in_ECX + 0x114));
        iVar3 = iVar3 + 1;
        uVar4 = local_18[2];
      } while (iVar3 < *(int *)(in_ECX + 0xe8) - *(int *)(in_ECX + 0xe4) >> 2);
    }
    local_18[1] = local_18[1] + 4;
    uVar4 = uVar4 + 0x1c;
  } while( true );
}

