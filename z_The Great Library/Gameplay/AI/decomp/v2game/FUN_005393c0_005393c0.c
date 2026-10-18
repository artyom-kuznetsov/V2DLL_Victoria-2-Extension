// FUN_005393c0 @ 005393c0 body=[[005393c0, 005394ce]]


void FUN_005393c0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int in_EAX;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  uint *unaff_ESI;
  bool bVar6;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  uint local_10;
  uint uStack_c;
  
  if (param_2 == 2) {
    puVar3 = (uint *)(*(int *)(param_1 + 0x14e4) + *(int *)(param_3 + 8) * 0x18);
  }
  else {
    if (in_EAX < 0) {
      local_20 = 0;
      uStack_1c = 0;
      local_18 = 0;
      uStack_14 = 0;
      local_10 = 0;
      uStack_c = 0;
      iVar4 = FUN_004dad40();
      iVar4 = *(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc) >> 2;
      if (0 < iVar4) {
        piVar5 = *(int **)(param_1 + 0x14f4);
        iVar2 = *(int *)(param_3 + 8) * 0x18;
        param_1 = iVar4;
        do {
          uVar1 = *(uint *)(*piVar5 + iVar2);
          iVar4 = *piVar5 + iVar2;
          bVar6 = CARRY4(local_20,uVar1);
          local_20 = local_20 + uVar1;
          uStack_1c = uStack_1c + *(int *)(iVar4 + 4) + (uint)bVar6;
          bVar6 = CARRY4(local_18,*(uint *)(iVar4 + 8));
          local_18 = local_18 + *(uint *)(iVar4 + 8);
          uStack_14 = uStack_14 + *(int *)(iVar4 + 0xc) + (uint)bVar6;
          bVar6 = CARRY4(local_10,*(uint *)(iVar4 + 0x10));
          local_10 = local_10 + *(uint *)(iVar4 + 0x10);
          uStack_c = uStack_c + *(int *)(iVar4 + 0x14) + (uint)bVar6;
          piVar5 = piVar5 + 4;
          param_1 = param_1 + -1;
        } while (param_1 != 0);
      }
      *unaff_ESI = local_20;
      unaff_ESI[1] = uStack_1c;
      unaff_ESI[2] = local_18;
      unaff_ESI[3] = uStack_14;
      unaff_ESI[5] = uStack_c;
      unaff_ESI[4] = local_10;
      return;
    }
    puVar3 = (uint *)(*(int *)(*(int *)(param_1 + 0x14f4) + in_EAX * 0x10) +
                     *(int *)(param_3 + 8) * 0x18);
  }
  *unaff_ESI = *puVar3;
  unaff_ESI[1] = puVar3[1];
  unaff_ESI[2] = puVar3[2];
  unaff_ESI[3] = puVar3[3];
  unaff_ESI[4] = puVar3[4];
  unaff_ESI[5] = puVar3[5];
  return;
}

