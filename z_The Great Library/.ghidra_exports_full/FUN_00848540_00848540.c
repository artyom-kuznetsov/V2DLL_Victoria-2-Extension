// FUN_00848540 @ 00848540 body=[[00848540, 008485e5]]


uint FUN_00848540(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint in_EAX;
  int *piVar4;
  
  if ((*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4) + 0xe4c) == 1) &&
     (*(int *)(param_1 + 4) != 0)) {
    in_EAX = *(uint *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_EAX + 4) * 4);
    iVar1 = **(int **)(in_EAX + 0xe44);
    piVar4 = *(int **)(iVar1 + 0x48);
    while ((*(int **)(iVar1 + 0x48) <= piVar4 && (piVar4 < *(int **)(iVar1 + 0x4c)))) {
      iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xacc) + *piVar4 * 4);
      uVar3 = *(uint *)(iVar2 + 0x14c);
      in_EAX = *(uint *)(iVar2 + 0x148);
      piVar4 = piVar4 + 1;
      if (in_EAX != uVar3) {
        do {
          if (*(int *)(in_EAX + 4) == *(int *)(param_1 + 4)) break;
          in_EAX = in_EAX + 8;
        } while (in_EAX != uVar3);
        if (in_EAX != uVar3) {
          return CONCAT31((int3)(in_EAX >> 8),1);
        }
      }
    }
  }
  return in_EAX & 0xffffff00;
}

