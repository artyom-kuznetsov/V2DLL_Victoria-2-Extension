// FUN_0091a8a0 @ 0091a8a0 body=[[0091a8a0, 0091acb3]]


void FUN_0091a8a0(undefined4 param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  void *pvVar3;
  void **ppvVar4;
  void **ppvVar5;
  uint uVar6;
  bool bVar7;
  uint *puVar8;
  int iVar9;
  int in_ECX;
  void *pvVar10;
  bool bVar11;
  void *local_20;
  uint *local_1c;
  void *local_18;
  uint *local_14;
  uint *local_10 [3];
  
  *(undefined4 *)(in_ECX + 0x10) = param_1;
  *(undefined4 *)(in_ECX + 0x14) = param_2;
  FUN_0092a7c0(*(undefined4 *)(in_ECX + 8),*(undefined4 *)(in_ECX + 0xc),param_1,param_2);
  local_10[0] = *(uint **)(in_ECX + 8);
  if (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(DAT_012587e4 + 4) + *(int *)(in_ECX + 0xc) * 4) +
                                0xbe8) + *(int *)(in_ECX + 0x14) * 4) + 0x34) != 0) {
    iVar2 = *(int *)(*(int *)(DAT_012588e8 + 0xcf8) + 8);
    if (iVar2 != 0) {
      puVar1 = (uint *)(in_ECX + 100);
      *(undefined1 *)(in_ECX + 0x94) = 1;
      FUN_0042b980(puVar1,local_10,*puVar1,*(undefined4 *)(in_ECX + 0x68));
      local_10[0] = (uint *)(in_ECX + 0x54);
      FUN_0042b980(local_10[0],&local_18,*(undefined4 *)(in_ECX + 0x54),
                   *(undefined4 *)(in_ECX + 0x58));
      local_20 = *(void **)(in_ECX + 0x44);
      if (local_20 != *(void **)(in_ECX + 0x48)) {
        local_1c = (uint *)0x0;
        FID_conflict__memcpy(local_20,*(void **)(in_ECX + 0x48),0);
        *(int *)(in_ECX + 0x48) = (int)local_1c + (int)local_20;
      }
      local_18 = *(void **)(in_ECX + 0x34);
      local_1c = (uint *)(in_ECX + 0x34);
      if (local_18 != *(void **)(in_ECX + 0x38)) {
        local_20 = (void *)0x0;
        FID_conflict__memcpy(local_18,*(void **)(in_ECX + 0x38),0);
        local_1c[1] = (int)local_20 + (int)local_18;
      }
      bVar11 = false;
      iVar9 = FUN_00425a40();
      local_20 = *(void **)(in_ECX + 0x84);
      if ((*(int *)((int)local_20 + 4) == *(int *)(iVar9 + 4)) ||
         (iVar9 = FUN_00425ac0(), *(int *)((int)local_20 + 4) == *(int *)(iVar9 + 4))) {
        bVar11 = true;
      }
      iVar9 = FUN_00425a40();
      if ((*(int *)(*(int *)(in_ECX + 0x74) + 4) == *(int *)(iVar9 + 4)) ||
         (iVar9 = FUN_00425ac0(), *(int *)(*(int *)(in_ECX + 0x74) + 4) == *(int *)(iVar9 + 4))) {
        bVar7 = true;
      }
      else {
        bVar7 = false;
      }
      if ((bVar11) || (bVar7)) {
        iVar9 = FUN_00425a40();
        bVar11 = *(int *)((int)local_20 + 4) != *(int *)(iVar9 + 4);
        if (bVar11) {
          local_18 = *(void **)(iVar2 + 0x98);
          local_14 = (uint *)(iVar2 + 0x98);
        }
        else {
          local_18 = *(void **)(iVar2 + 0x88);
          local_14 = (uint *)(iVar2 + 0x88);
        }
        while (((void *)*local_14 <= local_18 && (local_18 < (void *)local_14[1]))) {
          pvVar3 = *(void **)(in_ECX + 0x68);
          pvVar10 = (void *)((int)local_18 + 0x40);
          if ((local_18 < pvVar3) && ((void *)*puVar1 <= local_18)) {
            local_18 = pvVar10;
            if (pvVar3 == *(void **)(in_ECX + 0x6c)) {
              FUN_0042c4b0();
            }
            iVar9 = *(int *)(in_ECX + 0x68);
          }
          else {
            local_18 = pvVar10;
            if (pvVar3 == *(void **)(in_ECX + 0x6c)) {
              FUN_0042c4b0();
            }
            iVar9 = *(int *)(in_ECX + 0x68);
          }
          if (iVar9 != 0) {
            FUN_0094be20();
          }
          *(int *)(in_ECX + 0x68) = *(int *)(in_ECX + 0x68) + 0x40;
          ppvVar4 = *(void ***)(in_ECX + 0x48);
          local_20 = (void *)0x0;
          if (&local_20 < ppvVar4) {
            ppvVar5 = *(void ***)(in_ECX + 0x44);
            if (&local_20 < ppvVar5) goto LAB_0091ab5d;
            if (ppvVar4 == *(void ***)(in_ECX + 0x4c)) {
              FUN_007b94a0();
            }
            if (*(undefined4 **)(in_ECX + 0x48) != (undefined4 *)0x0) {
              **(undefined4 **)(in_ECX + 0x48) =
                   *(undefined4 *)
                    (*(uint *)(in_ECX + 0x44) + ((int)&local_20 - (int)ppvVar5 >> 2) * 4);
            }
            *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + 4;
          }
          else {
LAB_0091ab5d:
            if (ppvVar4 == *(void ***)(in_ECX + 0x4c)) {
              FUN_007b94a0();
            }
            if (*(undefined4 **)(in_ECX + 0x48) != (undefined4 *)0x0) {
              **(undefined4 **)(in_ECX + 0x48) = 0;
            }
            *(int *)(in_ECX + 0x48) = *(int *)(in_ECX + 0x48) + 4;
          }
        }
        if (bVar11) {
          local_18 = *(void **)(iVar2 + 0x88);
          local_14 = (uint *)(iVar2 + 0x88);
        }
        else {
          local_18 = *(void **)(iVar2 + 0x98);
          local_14 = (uint *)(iVar2 + 0x98);
        }
        do {
          while( true ) {
            puVar1 = local_10[0];
            if (local_18 < (void *)*local_14) {
              return;
            }
            if ((void *)local_14[1] <= local_18) {
              return;
            }
            pvVar3 = (void *)local_10[0][1];
            pvVar10 = (void *)((int)local_18 + 0x40);
            if ((local_18 < pvVar3) && ((void *)*local_10[0] <= local_18)) {
              local_18 = pvVar10;
              if (pvVar3 == (void *)local_10[0][2]) {
                FUN_0042c4b0();
              }
              uVar6 = puVar1[1];
            }
            else {
              local_18 = pvVar10;
              if (pvVar3 == (void *)local_10[0][2]) {
                FUN_0042c4b0();
              }
              uVar6 = puVar1[1];
            }
            if (uVar6 != 0) {
              FUN_0094be20();
            }
            puVar8 = local_1c;
            puVar1[1] = puVar1[1] + 0x40;
            ppvVar4 = (void **)local_1c[1];
            local_20 = (void *)0x0;
            if (&local_20 < ppvVar4) break;
LAB_0091ac89:
            if (ppvVar4 == (void **)local_1c[2]) {
              FUN_007b94a0();
            }
            if ((undefined4 *)puVar8[1] != (undefined4 *)0x0) {
              *(undefined4 *)puVar8[1] = 0;
            }
            puVar8[1] = puVar8[1] + 4;
          }
          ppvVar5 = (void **)*local_1c;
          if (&local_20 < ppvVar5) goto LAB_0091ac89;
          if (ppvVar4 == (void **)local_1c[2]) {
            FUN_007b94a0();
          }
          if ((undefined4 *)puVar8[1] != (undefined4 *)0x0) {
            *(undefined4 *)puVar8[1] =
                 *(undefined4 *)(*puVar8 + ((int)&local_20 - (int)ppvVar5 >> 2) * 4);
          }
          puVar8[1] = puVar8[1] + 4;
        } while( true );
      }
    }
    *(undefined1 *)(in_ECX + 0x94) = 0;
  }
  return;
}

