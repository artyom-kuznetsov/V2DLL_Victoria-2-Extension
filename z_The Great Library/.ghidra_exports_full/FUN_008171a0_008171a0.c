// FUN_008171a0 @ 008171a0 body=[[008171a0, 00817aea]]


void FUN_008171a0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int in_ECX;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float10 fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 uStack_d4;
  int *piStack_cc;
  undefined4 uStack_c8;
  undefined1 *puStack_c4;
  undefined1 auStack_74 [4];
  undefined4 uStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 local_64 [96];
  
  if (*(int *)(in_ECX + 0x1a0) != 0) {
    piStack_cc = *(int **)(*(int *)(in_ECX + 0x188) + 100);
    puStack_c4 = local_64;
    uStack_c8 = 7;
    uStack_d4 = CONCAT44(0x8171d9,(undefined4)uStack_d4);
    (**(code **)(*piStack_cc + 0xe8))();
    piVar1 = *(int **)(*(int *)(in_ECX + 0x188) + 100);
    uStack_d4 = CONCAT44(auStack_74,0xe);
    (**(code **)(*piVar1 + 0xe8))(piVar1);
    piVar1 = *(int **)(*(int *)(in_ECX + 0x188) + 100);
    (**(code **)(*piVar1 + 0xe4))(piVar1,7,1);
    piVar1 = *(int **)(*(int *)(in_ECX + 0x188) + 100);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0xe,1);
    piVar1 = *(int **)(*(int *)(in_ECX + 0x188) + 100);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x8c,0);
    piVar1 = *(int **)(*(int *)(in_ECX + 0x188) + 100);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x13,5);
    piVar1 = *(int **)(*(int *)(in_ECX + 0x188) + 100);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x14,6);
    iVar6 = *(int *)(in_ECX + 400);
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x1a0) + 0x14);
    uStack_c8 = *(undefined4 *)
                 (piVar1[((iVar6 + -1) / (piVar1[1] - *piVar1 >> 3)) * 4] + 4 +
                 ((iVar6 + -1) % (piVar1[1] - *piVar1 >> 3)) * 8);
    iVar6 = *(int *)(in_ECX + 400);
    if (iVar6 == 0) {
      iVar6 = 1;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x1a0) + 0x14);
    piStack_cc = *(int **)(piVar1[((iVar6 + -1) / (piVar1[1] - *piVar1 >> 3)) * 4] +
                          ((iVar6 + -1) % (piVar1[1] - *piVar1 >> 3)) * 8);
    uStack_d4 = CONCAT44((float)*(int *)(*(int *)(in_ECX + 0x1a0) + 0x34),
                         (float)*(int *)(*(int *)(in_ECX + 0x1a0) + 0x38));
    piVar1 = *(int **)(in_ECX + 0x184);
    if (*(int *)(in_ECX + 0x1a4) == 0) {
      if ((float)piVar1[0x28] != *(float *)(in_ECX + 0x14c)) {
        pcVar2 = *(code **)(*piVar1 + 0x6c);
        piVar1[0x28] = (int)*(float *)(in_ECX + 0x14c);
        (*pcVar2)();
      }
      uVar10 = **(undefined4 **)(in_ECX + 0x1a0);
      uVar5 = *(undefined4 *)(in_ECX + 0x184);
    }
    else {
      uStack_d4 = CONCAT44(DAT_00f092fc,DAT_00f092fc);
      piStack_cc = (int *)0x0;
      uStack_c8 = 0;
      if ((float)piVar1[0x28] != *(float *)(in_ECX + 0x14c)) {
        pcVar2 = *(code **)(*piVar1 + 0x6c);
        piVar1[0x28] = (int)*(float *)(in_ECX + 0x14c);
        (*pcVar2)();
      }
      uVar10 = *(undefined4 *)(in_ECX + 0x1a4);
      uVar5 = *(undefined4 *)(in_ECX + 0x184);
    }
    FUN_007e9800(uVar5,param_1,param_2,in_ECX + 0x94,uVar10,&uStack_d4,param_5);
    uVar3 = *(uint *)(in_ECX + 0x198);
    uVar4 = 1;
    uVar7 = uVar4;
    if (1 < uVar3) {
      do {
        uVar7 = 0;
        if (uVar4 == 0) break;
        uVar4 = uVar4 * 2;
        uVar7 = uVar4;
      } while (uVar4 < uVar3);
    }
    fVar12 = (float)(int)uVar7;
    if ((int)uVar7 < 0) {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    fVar12 = (float)(int)uVar3 / fVar12;
    uVar4 = *(uint *)(in_ECX + 0x194);
    uVar7 = 1;
    uVar8 = uVar7;
    if (1 < uVar4) {
      do {
        uVar8 = 0;
        if (uVar7 == 0) break;
        uVar7 = uVar7 * 2;
        uVar8 = uVar7;
      } while (uVar7 < uVar4);
    }
    puStack_c4 = (undefined1 *)(float)(int)uVar4;
    fVar15 = (float)(int)uVar8;
    if ((int)uVar8 < 0) {
      fVar15 = fVar15 + 4.2949673e+09;
    }
    fVar15 = (float)puStack_c4 / fVar15;
    uVar10 = *(undefined4 *)(in_ECX + 0x14c);
    uStack_d4 = CONCAT44((float)(int)-uVar3 * 0.5,(float)(int)-uVar4 * 0.5);
    FUN_00b35410();
    FUN_00b352e0();
    uStack_d4 = CONCAT44((float)*(int *)(in_ECX + 0x198) * 0.5,
                         (float)-*(int *)(in_ECX + 0x194) * 0.5);
    FUN_00b35410();
    FUN_00b352e0();
    uStack_d4 = CONCAT44((float)*(int *)(in_ECX + 0x198) * 0.5,(float)*(int *)(in_ECX + 0x194) * 0.5
                        );
    fVar9 = (float10)FUN_00b35410();
    fVar11 = (float)fVar9;
    FUN_00b352e0();
    uVar5 = DAT_00f092fc;
    fVar13 = (float)*(int *)(in_ECX + 0x194) * 0.5;
    fVar14 = (float)-*(int *)(in_ECX + 0x198) * 0.5;
    uStack_d4 = CONCAT44(fVar14,fVar13);
    fStack_6c = fVar15;
    fStack_68 = fVar12;
    fVar9 = (float10)FUN_00b35410();
    fVar12 = (float)fVar9;
    fVar9 = (float10)FUN_00b352e0();
    uStack_d4 = CONCAT44(fVar14 * fVar12 + (float)fVar9 * fVar13,
                         fVar12 * fVar13 - fVar14 * (float)fVar9);
    uStack_70 = uVar5;
    uVar3 = *(uint *)(*(int *)(in_ECX + 0x184) + 0x214);
    if ((uVar3 == 0xffffffff) || (9999 < uVar3)) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(undefined4 *)(uVar3 * 0x2c + 0x15c + param_1);
    }
    (**(code **)(*param_2 + 0x104))(param_2,0,uVar5);
    (**(code **)(*param_2 + 0xe4))(param_2,0x1b,1);
    (**(code **)(*param_2 + 0x164))(param_2,0x102);
    (**(code **)(*param_2 + 0x14c))(param_2,6,2,&uStack_d4,0x14);
    (**(code **)(*param_2 + 0xe4))(param_2,0x1b,0);
    piVar1 = *(int **)(*(int *)(in_ECX + 0x188) + 100);
    (**(code **)(*piVar1 + 0xe4))(piVar1,7,uVar10);
    piVar1 = *(int **)(*(int *)(in_ECX + 0x188) + 100);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0xe,fVar11);
  }
  return;
}

