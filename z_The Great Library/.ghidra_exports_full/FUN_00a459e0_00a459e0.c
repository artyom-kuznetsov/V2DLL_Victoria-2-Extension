// FUN_00a459e0 @ 00a459e0 body=[[00a459e0, 00a45a35] [00a45a40, 00a45de9]]


void FUN_00a459e0(int param_1,int *param_2,undefined4 *param_3)

{
  ulonglong uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int in_ECX;
  int iVar7;
  bool bVar8;
  int *piVar9;
  undefined4 *puVar10;
  int *piVar11;
  int unaff_EDI;
  undefined4 *puVar12;
  uint uVar13;
  int *piVar14;
  int iVar15;
  int *piVar16;
  uint *puVar17;
  int iStack_120;
  int local_108;
  undefined8 local_100;
  int local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int iStack_e4;
  undefined4 auStack_c8 [13];
  undefined4 auStack_94 [10];
  undefined1 auStack_6c [36];
  undefined4 auStack_48 [17];
  
  local_100 = (ulonglong)*(uint *)(param_1 + 0x6bc88);
  if (*(uint *)(param_1 + 0x6bc88) != 0) {
    iVar7 = *(int *)(in_ECX + 0x140);
    local_f4 = 0;
    local_108 = 0;
    if (0 < (int)(*(int *)(iVar7 + 0x110) - *(int *)(iVar7 + 0x10c) & 0xfffffffcU)) {
      do {
        iVar15 = *(int *)(*(int *)(iVar7 + 0x10c) + local_108 * 4);
        if (*(int *)(iVar15 + 0x80) == 0) {
          iVar7 = *(int *)(iVar7 + 0x9c);
        }
        else {
          iVar7 = *(int *)(iVar7 + 0xa0);
        }
        if (local_f4 != iVar7) {
          (**(code **)(**(int **)(param_1 + 100) + 0x15c))(*(int **)(param_1 + 100),iVar7);
          local_f4 = iVar7;
        }
        if (*(int *)(iVar15 + 0x28) == 0) {
          piVar9 = (int *)0x0;
        }
        else {
          piVar9 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + *(int *)(iVar15 + 0x28) * 4);
        }
        if (*(int *)(iVar15 + 0x48) != 0) {
          (**(code **)(*piVar9 + 0xe8))(piVar9,*(int *)(iVar15 + 0x48));
        }
        puVar10 = param_3;
        puVar3 = auStack_48;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar3 = *puVar10;
          puVar10 = puVar10 + 1;
          puVar3 = puVar3 + 1;
        }
        puVar10 = auStack_c8;
        puVar3 = (undefined4 *)((int)local_100 + 0x1a4);
        puVar12 = auStack_c8;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar12 = puVar12 + 1;
        }
        piVar16 = piVar9;
        (**(code **)(*piVar9 + 0x98))(piVar9,"ViewProjectionMatrix");
        puVar3 = (undefined4 *)(**(code **)(*(int *)(in_ECX + 0x1c) + 0x16c))();
        puVar12 = auStack_94;
        for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
          *puVar12 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar12 = puVar12 + 1;
        }
        piVar14 = piVar9;
        (**(code **)(*piVar9 + 0x98))(piVar9,"ViewMatrix",auStack_94);
        uVar1 = *(ulonglong *)(iVar15 + 0x114);
        uStack_e8 = *(undefined4 *)(iVar15 + 0x11c);
        local_100._0_4_ = (int)uVar1;
        uStack_f0 = (int)local_100;
        local_100._4_4_ = (undefined4)(uVar1 >> 0x20);
        uStack_ec = local_100._4_4_;
        iStack_e4 = local_f4;
        (**(code **)(*piVar9 + 0x88))(piVar9,"CameraPosition",&uStack_f0);
        iVar7 = (int)puVar10 * 4;
        puVar17 = (uint *)(piVar16 + 2);
        iVar15 = 0;
        iStack_120 = 0;
        piVar6 = piVar16 + 0x23;
        do {
          piVar11 = *(int **)(unaff_EDI + 0x148);
          if (((int)puVar10 + iStack_120 < *(int *)(unaff_EDI + 0x14c) - (int)piVar11 >> 2) &&
             (*(int *)(iVar7 + (int)piVar11) != 0)) {
            bVar8 = true;
          }
          else {
            bVar8 = false;
          }
          uVar4 = *puVar17;
          if ((uVar4 != 0) || (bVar8)) {
            iVar2 = *piVar6;
            iVar15 = iVar15 + 1;
            piVar6 = piVar6 + 1;
            if (iVar2 != 0) {
              if (bVar8) {
                uVar4 = *(uint *)(iVar7 + (int)piVar11);
              }
              if ((uVar4 == 0xffffffff) || (9999 < uVar4)) {
                uVar5 = 0;
              }
              else {
                uVar5 = *(undefined4 *)(uVar4 * 0x2c + 0x15c + param_1);
              }
              (**(code **)(*piVar9 + 0xd0))(piVar9,iVar2,uVar5);
            }
          }
          puVar17 = puVar17 + 1;
          iVar7 = iVar7 + 4;
          iStack_120 = iStack_120 + 1;
        } while (iStack_120 < 4);
        uVar4 = (int)puVar10 + iVar15;
        (**(code **)(*piVar9 + 0x98))(piVar9,"WorldMatrix",auStack_6c);
        if (((char)piVar11[0x56] != '\0') && (piVar16[0x1c] != 0)) {
          (**(code **)(*piVar9 + 0x88))(piVar9,piVar16[0x1c],piVar11 + 0x57);
        }
        if (piVar16[0x1e] != 0) {
          (**(code **)(*piVar9 + 0x78))(piVar9,piVar16[0x1e],piVar11[0x51]);
        }
        (**(code **)(*piVar9 + 0xfc))(piVar9,&stack0xfffffed8,0);
        uVar13 = 0;
        if (uVar4 != 0) {
          do {
            (**(code **)(*piVar9 + 0x100))(piVar9,uVar13);
            piVar6 = *(int **)(param_1 + 100);
            (**(code **)(*piVar6 + 0x1a0))(piVar6,piVar16[1]);
            (**(code **)(*piVar6 + 400))
                      (piVar6,0,*piVar16,0,(-((char)piVar16[0x27] != '\0') & 0x20U) + 0x30);
            piVar11 = piVar14;
            if (piVar16[0x20] != 0) {
              (**(code **)(*piVar6 + 400))(piVar6,1,piVar16[0x20],0,8);
              piVar11 = piVar14;
            }
            (**(code **)(*piVar9 + 0x104))(piVar9);
            (**(code **)(*param_2 + 0x148))(param_2,4,0,0,piVar16[0x21],0,piVar16[0x22]);
            (**(code **)(*piVar9 + 0x108))(piVar9);
            uVar13 = uVar13 + 1;
            piVar14 = piVar11;
          } while (uVar13 < uVar4);
        }
        (**(code **)(*piVar9 + 0x10c))(piVar9);
        iVar7 = piVar11[0x50];
        local_108 = local_108 + 1;
        local_100 = uVar1;
      } while (local_108 < *(int *)(iVar7 + 0x110) - *(int *)(iVar7 + 0x10c) >> 2);
    }
  }
  return;
}

