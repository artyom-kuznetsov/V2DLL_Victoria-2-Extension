// FUN_00a2fe20 @ 00a2fe20 body=[[00a2fe20, 00a2ff56] [00a2ff5a, 00a301e7]]


void FUN_00a2fe20(int param_1)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int in_ECX;
  uint uVar9;
  ulonglong *puVar10;
  int *piVar11;
  
  *(int *)(in_ECX + 0x44) = param_1 + 0x158;
  uVar4 = FUN_009bcbf0(in_ECX + 0x9c,1);
  *(undefined4 *)(in_ECX + 0x100) = uVar4;
  uVar4 = FUN_009be510(*(int *)(in_ECX + 0x8c) + 0x6bcfc,in_ECX + 0xd4,in_ECX + 0xb8,
                       *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 100));
  *(undefined4 *)(in_ECX + 0x94) = uVar4;
  piVar11 = *(int **)(*(int *)(in_ECX + 0x8c) + 100);
  (**(code **)(*piVar11 + 0x158))(piVar11,&DAT_00f078ac,in_ECX + 0x90);
  if (*(uint *)(in_ECX + 0x100) < 10000) {
    uVar9 = *(uint *)(*(uint *)(in_ECX + 0x100) * 0x2c + 0x17c + *(int *)(in_ECX + 0x8c));
  }
  else {
    uVar9 = 0;
  }
  uVar5 = 1;
  uVar6 = uVar5;
  if (1 < uVar9) {
    do {
      uVar6 = 0;
      if (uVar5 == 0) break;
      uVar5 = uVar5 * 2;
      uVar6 = uVar5;
    } while (uVar5 < uVar9);
  }
  fVar3 = (float)(int)uVar6;
  if ((int)uVar6 < 0) {
    fVar3 = fVar3 + 4.2949673e+09;
  }
  puVar10 = (ulonglong *)((float)(int)uVar9 / fVar3);
  piVar1 = *(int **)(in_ECX + 0xfc);
  *(float *)(in_ECX + 0xf4) = (float)puVar10 / (float)*(int *)(in_ECX + 0xf0);
  if (piVar1 != (int *)0x0) {
    piVar11 = (int *)*piVar1;
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 8))(piVar11);
    }
    piVar11 = (int *)piVar1[1];
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 8))(piVar11);
    }
    piVar11 = (int *)piVar1[2];
    if (piVar11 != (int *)0x0) {
      (**(code **)(*piVar11 + 8))(piVar11);
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
  puVar7 = (undefined4 *)FUN_00aae9af(0x24);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    *puVar7 = 0;
    puVar7[1] = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
    puVar7[4] = 0;
    *(undefined1 *)(puVar7 + 5) = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
  }
  *(undefined4 **)(in_ECX + 0xfc) = puVar7;
  *(undefined1 *)(puVar7 + 5) = 1;
  FUN_009f9630(*(undefined4 *)(in_ECX + 0xfc),*(undefined4 *)(*(int *)(in_ECX + 0x8c) + 100),4,0x14,
               0,0);
  FUN_009f99d0(*(undefined4 *)(in_ECX + 0xfc),*(undefined4 *)(*(int *)(in_ECX + 0x8c) + 100),6);
  piVar1 = *(int **)(in_ECX + 0xfc);
  piVar2 = (int *)*piVar1;
  if (piVar2 == (int *)0x0) {
    puVar10 = (ulonglong *)0x0;
  }
  else {
    uVar4 = 0;
    if ((*(char *)((int)piVar1 + 0x15) != '\0') && (*(char *)((int)piVar1 + 0x16) == '\0')) {
      uVar4 = 0x2000;
    }
    (**(code **)(*piVar2 + 0x2c))(piVar2,0,0,&stack0xffffffd4,uVar4);
  }
  piVar1 = *(int **)(*(int *)(in_ECX + 0xfc) + 4);
  (**(code **)(*piVar1 + 0x2c))(piVar1,0,0,&stack0xffffffd8,0);
  uVar4 = DAT_00f092fc;
  *puVar10 = CONCAT44(*(undefined4 *)(in_ECX + 0x98),*(undefined4 *)(in_ECX + 0x98)) ^
             0x8000000080000000;
  *(undefined4 *)(puVar10 + 1) = 0;
  *(undefined4 *)((int)puVar10 + 0xc) = 0;
  *(undefined4 *)(puVar10 + 2) = uVar4;
  *(ulonglong *)((int)puVar10 + 0x14) =
       CONCAT44(*(undefined4 *)(in_ECX + 0x98),*(undefined4 *)(in_ECX + 0x98)) ^ 0x80000000;
  *(undefined4 *)((int)puVar10 + 0x1c) = 0;
  *(undefined4 *)(puVar10 + 4) = 0;
  *(undefined4 *)((int)puVar10 + 0x24) = 0;
  puVar10[5] = CONCAT44(*(undefined4 *)(in_ECX + 0x98),*(undefined4 *)(in_ECX + 0x98)) ^
               0x8000000000000000;
  *(undefined4 *)(puVar10 + 6) = 0;
  *(undefined4 *)((int)puVar10 + 0x34) = *(undefined4 *)(in_ECX + 0xf4);
  *(undefined4 *)(puVar10 + 7) = uVar4;
  *(ulonglong *)((int)puVar10 + 0x3c) =
       CONCAT44(*(undefined4 *)(in_ECX + 0x98),*(undefined4 *)(in_ECX + 0x98));
  *(undefined4 *)((int)puVar10 + 0x44) = 0;
  *(undefined4 *)(puVar10 + 9) = *(undefined4 *)(in_ECX + 0xf4);
  *(undefined4 *)((int)puVar10 + 0x4c) = 0;
  *(undefined2 *)piVar11 = 0;
  *(undefined4 *)((int)piVar11 + 2) = 0x20001;
  *(undefined4 *)((int)piVar11 + 6) = 0x10002;
  *(undefined2 *)((int)piVar11 + 10) = 3;
  (**(code **)(*(int *)**(undefined4 **)(in_ECX + 0xfc) + 0x30))
            ((int *)**(undefined4 **)(in_ECX + 0xfc));
  piVar11 = *(int **)(*(int *)(in_ECX + 0xfc) + 4);
  (**(code **)(*piVar11 + 0x30))(piVar11);
  if (*(int *)(in_ECX + 0x124) != 0) {
    iVar8 = FUN_00973bd0(in_ECX + 0x114);
    if (iVar8 == 0) {
      iVar8 = FUN_00973bd0(in_ECX + 0x114);
    }
    *(int *)(in_ECX + 0x130) = iVar8;
    return;
  }
  *(undefined4 *)(in_ECX + 0x130) = 0;
  return;
}

