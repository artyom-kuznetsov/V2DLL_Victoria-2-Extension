// FUN_007da850 @ 007da850 body=[[007da850, 007daabc] [007daac0, 007dad36]]


void FUN_007da850(int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  int in_ECX;
  uint uVar11;
  uint uVar12;
  undefined4 unaff_EBX;
  uint uVar13;
  ulonglong *puVar14;
  undefined2 in_FPUControlWord;
  undefined4 local_34;
  undefined8 local_30;
  undefined4 uStack_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  
  *(int *)(in_ECX + 0x44) = param_1 + 0x158;
  uVar5 = FUN_009bcbf0(in_ECX + 0xb4,1);
  *(undefined4 *)(in_ECX + 0xa4) = uVar5;
  uVar5 = FUN_009bcbf0(in_ECX + 0xd0,1);
  *(undefined4 *)(in_ECX + 0xa8) = uVar5;
  uVar5 = FUN_009bcbf0(in_ECX + 0xec,1);
  *(undefined4 *)(in_ECX + 0xac) = uVar5;
  uVar5 = FUN_009bcbf0(in_ECX + 0x124,1);
  *(undefined4 *)(in_ECX + 0xb0) = uVar5;
  if (*(int *)(in_ECX + 0x150) == 0) {
    FUN_00408ed0(in_ECX + 0x15c,0,0xffffffff);
  }
  uVar5 = FUN_009be510(*(int *)(in_ECX + 0x8c) + 0x6bcfc,in_ECX + 0x15c,in_ECX + 0x140,
                       *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 100));
  iVar10 = *(int *)(in_ECX + 0x8c);
  *(undefined4 *)(in_ECX + 0xa0) = uVar5;
  if (*(uint *)(in_ECX + 0xa4) < 10000) {
    iVar6 = *(uint *)(in_ECX + 0xa4) * 0x2c;
    uVar12 = *(uint *)(iVar6 + 0x17c + iVar10);
    uVar13 = *(uint *)(iVar6 + 0x180 + iVar10);
  }
  else {
    uVar12 = 0;
    uVar13 = 0;
  }
  local_18 = *(float *)(in_ECX + 0x9c);
  uVar11 = 1;
  local_1c = local_18 * ((float)(int)uVar12 / (float)(int)uVar13);
  uVar7 = uVar11;
  if (1 < uVar12) {
    do {
      uVar11 = 0;
      if (uVar7 == 0) break;
      uVar11 = uVar7 * 2;
      uVar7 = uVar11;
    } while (uVar11 < uVar12);
  }
  uVar7 = 1;
  uVar8 = uVar7;
  if (1 < uVar13) {
    do {
      uVar8 = 0;
      if (uVar7 == 0) break;
      uVar7 = uVar7 * 2;
      uVar8 = uVar7;
    } while (uVar7 < uVar13);
  }
  local_24 = (float)(int)uVar13 / (float)(int)uVar8;
  local_20 = (float)(int)uVar12 / (float)(int)uVar11;
  if (*(uint *)(in_ECX + 0xac) < 10000) {
    iVar10 = *(int *)(*(uint *)(in_ECX + 0xac) * 0x2c + 0x17c + iVar10);
  }
  else {
    iVar10 = 0;
  }
  fVar3 = (float)iVar10;
  uVar12 = 1;
  local_34 = CONCAT22((short)((uint)fVar3 >> 0x10),in_FPUControlWord);
  local_30._0_4_ = (ulonglong *)(longlong)ROUND(fVar3);
  uVar13 = uVar12;
  if (1 < (ulonglong *)local_30) {
    do {
      uVar13 = 0;
      if (uVar12 == 0) break;
      uVar12 = uVar12 * 2;
      uVar13 = uVar12;
    } while (uVar12 < (ulonglong *)local_30);
  }
  local_30._4_4_ = (undefined4)((ulonglong)(longlong)ROUND(fVar3) >> 0x20);
  local_30 = CONCAT44(local_30._4_4_,uVar13);
  fVar4 = (float)(int)uVar13;
  if ((int)uVar13 < 0) {
    fVar4 = fVar4 + 4.2949673e+09;
  }
  piVar1 = *(int **)(in_ECX + 0x90);
  *(float *)(in_ECX + 0x198) = (fVar3 / fVar4) / (float)*(int *)(in_ECX + 0x194);
  if (piVar1 == (int *)0x0) {
    puVar9 = (undefined4 *)FUN_00aae9af(0x24);
    if (puVar9 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)0x0;
    }
    else {
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      puVar9[4] = 0;
      *(undefined1 *)(puVar9 + 5) = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[8] = 0;
    }
    *(undefined4 **)(in_ECX + 0x90) = puVar9;
    *(undefined1 *)(puVar9 + 5) = 0;
    FUN_009f9630(*(undefined4 *)(in_ECX + 0x90),*(undefined4 *)(*(int *)(in_ECX + 0x8c) + 100),4,
                 0x14,0,0);
    FUN_009f99d0(*(undefined4 *)(in_ECX + 0x90),*(undefined4 *)(*(int *)(in_ECX + 0x8c) + 100),6);
    piVar1 = *(int **)(in_ECX + 0x90);
    piVar2 = (int *)*piVar1;
    if (piVar2 == (int *)0x0) {
      puVar14 = (ulonglong *)0x0;
    }
    else {
      uVar5 = 0;
      if ((*(char *)((int)piVar1 + 0x15) != '\0') && (*(char *)((int)piVar1 + 0x16) == '\0')) {
        uVar5 = 0x2000;
      }
      (**(code **)(*piVar2 + 0x2c))(piVar2,0,0,&local_30,uVar5);
      puVar14 = (ulonglong *)local_30;
    }
    piVar1 = *(int **)(*(int *)(in_ECX + 0x90) + 4);
    puVar9 = &local_34;
    (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,puVar9,0);
    *puVar14 = local_30 ^ 0x8000000080000000;
    *(undefined4 *)(puVar14 + 1) = 0;
    *(undefined4 *)((int)puVar14 + 0xc) = 0;
    *(ulonglong *)((int)puVar14 + 0x14) = local_30 ^ 0x80000000;
    *(undefined4 *)(puVar14 + 2) = unaff_EBX;
    *(undefined4 *)((int)puVar14 + 0x1c) = 0;
    puVar14[5] = local_30 ^ 0x8000000000000000;
    *(undefined4 *)(puVar14 + 4) = 0;
    *(undefined4 *)((int)puVar14 + 0x24) = 0;
    *(undefined4 *)(puVar14 + 6) = 0;
    *(uint *)((int)puVar14 + 0x34) = local_34;
    *(undefined4 *)(puVar14 + 7) = unaff_EBX;
    uStack_28 = (ulonglong *)local_30;
    local_24 = (float)local_30._4_4_;
    *(ulonglong *)((int)puVar14 + 0x3c) = local_30;
    local_20 = 0.0;
    *(undefined4 *)((int)puVar14 + 0x44) = 0;
    *(uint *)(puVar14 + 9) = local_34;
    local_30 = (ulonglong)local_34;
    *(undefined4 *)((int)puVar14 + 0x4c) = 0;
    *(undefined2 *)puVar9 = 0;
    *(undefined4 *)((int)puVar9 + 2) = 0x20001;
    *(undefined4 *)((int)puVar9 + 6) = 0x10002;
    *(undefined2 *)((int)puVar9 + 10) = 3;
    (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0x90) + 0x30))
              ((int *)**(undefined4 **)(in_ECX + 0x90));
    piVar1 = *(int **)(*(int *)(in_ECX + 0x90) + 4);
    (**(code **)(*piVar1 + 0x30))(piVar1);
    piVar1 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
    (**(code **)(*piVar1 + 0x158))(piVar1,&DAT_00f093e8,in_ECX + 0x98);
    iVar10 = FUN_00973bd0(in_ECX + 0x178);
    if (iVar10 == 0) {
      iVar10 = FUN_00973bd0(in_ECX + 0x178);
    }
    *(int *)(in_ECX + 0x19c) = iVar10;
    return;
  }
  piVar2 = (int *)*piVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)piVar1[1];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar2 = (int *)piVar1[2];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  piVar1[2] = 0;
  *piVar1 = 0;
  piVar1[1] = 0;
  piVar1[3] = 0;
  piVar1[4] = 0;
  piVar1[7] = 0;
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b(piVar1);
}

