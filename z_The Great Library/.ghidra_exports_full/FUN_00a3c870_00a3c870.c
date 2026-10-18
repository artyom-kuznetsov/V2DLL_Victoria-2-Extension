// FUN_00a3c870 @ 00a3c870 body=[[00a3c870, 00a3ce7a]]


void FUN_00a3c870(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int in_ECX;
  
  iVar9 = FUN_009be510(param_1 + 0x6bcfc,in_ECX + 0xd0,in_ECX + 0xd0,*(undefined4 *)(param_1 + 100))
  ;
  piVar10 = (int *)0x0;
  if (iVar9 != 0) {
    piVar10 = *(int **)(*(int *)(param_1 + 0x6bd00) + -4 + iVar9 * 4);
  }
  *(int **)(in_ECX + 0xf4) = piVar10;
  uVar11 = (**(code **)(*piVar10 + 0x24))(piVar10,0,"WorldViewProjectionMatrix");
  *(undefined4 *)(in_ECX + 0xf8) = uVar11;
  uVar11 = (**(code **)(**(int **)(in_ECX + 0xf4) + 0x24))
                     (*(int **)(in_ECX + 0xf4),0,"CurrentState");
  *(undefined4 *)(in_ECX + 0xfc) = uVar11;
  uVar11 = (**(code **)(**(int **)(in_ECX + 0xf4) + 0x34))(*(int **)(in_ECX + 0xf4),&DAT_00e19be0);
  *(undefined4 *)(in_ECX + 0x100) = uVar11;
  uVar11 = (**(code **)(**(int **)(in_ECX + 0xf4) + 0x24))(*(int **)(in_ECX + 0xf4),0,"vFirstColor")
  ;
  *(undefined4 *)(in_ECX + 0x104) = uVar11;
  uVar11 = (**(code **)(**(int **)(in_ECX + 0xf4) + 0x24))
                     (*(int **)(in_ECX + 0xf4),0,"vSecondColor");
  fVar1 = *(float *)(in_ECX + 200);
  *(undefined4 *)(in_ECX + 0x108) = uVar11;
  if (*(char *)(in_ECX + 0xf0) == '\0') {
    fVar4 = -fVar1 * 0.5;
    fVar3 = fVar4 / 50.0;
    fVar5 = -*(float *)(in_ECX + 0xcc) * 0.5;
    fVar6 = fVar5 / 50.0;
    *(ulonglong *)(in_ECX + 0x10c) = CONCAT44(0x3cf5c28f,fVar3);
    fVar2 = *(float *)(in_ECX + 0xec);
    fVar4 = (fVar4 - fVar2) / 50.0;
    fVar5 = (fVar5 - fVar2) / 50.0;
    *(ulonglong *)(in_ECX + 0x15c) = (ulonglong)(uint)fVar4;
    fVar7 = *(float *)(in_ECX + 0xcc) * 0.5;
    fVar8 = fVar7 / 50.0;
    *(ulonglong *)(in_ECX + 0x120) = CONCAT44(0x3cf5c28f,fVar3);
    *(float *)(in_ECX + 0x114) = fVar6;
    *(float *)(in_ECX + 0x164) = fVar5;
    *(float *)(in_ECX + 0x128) = fVar8;
    *(ulonglong *)(in_ECX + 0x170) = (ulonglong)(uint)fVar4;
    fVar3 = (fVar2 + fVar7) / 50.0;
    fVar4 = (fVar1 * 0.5) / 50.0;
    *(float *)(in_ECX + 0x178) = fVar3;
    *(ulonglong *)(in_ECX + 0x134) = CONCAT44(0x3cf5c28f,fVar4);
    fVar1 = (fVar2 + fVar1 * 0.5) / 50.0;
    *(ulonglong *)(in_ECX + 0x184) = (ulonglong)(uint)fVar1;
    *(float *)(in_ECX + 0x13c) = fVar6;
    *(ulonglong *)(in_ECX + 0x148) = CONCAT44(0x3cf5c28f,fVar4);
    *(ulonglong *)(in_ECX + 0x198) = (ulonglong)(uint)fVar1;
    *(float *)(in_ECX + 0x18c) = fVar5;
    *(float *)(in_ECX + 0x150) = fVar8;
    *(float *)(in_ECX + 0x1a0) = fVar3;
  }
  else {
    fVar3 = -fVar1 * 0.5;
    fVar4 = fVar3 / 50.0;
    fVar5 = -*(float *)(in_ECX + 0xcc) * 0.5;
    fVar6 = fVar5 / 50.0;
    *(ulonglong *)(in_ECX + 0x10c) = CONCAT44(fVar6,fVar4);
    fVar2 = *(float *)(in_ECX + 0xec);
    fVar3 = (fVar3 - fVar2) / 50.0;
    fVar5 = (fVar5 - fVar2) / 50.0;
    *(undefined4 *)(in_ECX + 0x114) = 0;
    *(ulonglong *)(in_ECX + 0x15c) = CONCAT44(fVar5,fVar3);
    fVar7 = *(float *)(in_ECX + 0xcc) * 0.5;
    fVar8 = fVar7 / 50.0;
    *(ulonglong *)(in_ECX + 0x120) = CONCAT44(fVar8,fVar4);
    fVar4 = (fVar2 + fVar7) / 50.0;
    *(ulonglong *)(in_ECX + 0x170) = CONCAT44(fVar4,fVar3);
    *(undefined4 *)(in_ECX + 0x164) = 0x3c23d70a;
    *(undefined4 *)(in_ECX + 0x128) = 0;
    fVar3 = (fVar1 * 0.5) / 50.0;
    *(undefined4 *)(in_ECX + 0x178) = 0x3c23d70a;
    *(ulonglong *)(in_ECX + 0x134) = CONCAT44(fVar6,fVar3);
    fVar1 = (fVar2 + fVar1 * 0.5) / 50.0;
    *(ulonglong *)(in_ECX + 0x184) = CONCAT44(fVar5,fVar1);
    *(undefined4 *)(in_ECX + 0x13c) = 0;
    *(ulonglong *)(in_ECX + 0x148) = CONCAT44(fVar8,fVar3);
    *(ulonglong *)(in_ECX + 0x198) = CONCAT44(fVar4,fVar1);
    *(undefined4 *)(in_ECX + 0x18c) = 0x3c23d70a;
    *(undefined4 *)(in_ECX + 0x150) = 0;
    *(undefined4 *)(in_ECX + 0x1a0) = 0x3c23d70a;
  }
  uVar11 = DAT_00f092fc;
  *(undefined4 *)(in_ECX + 0x118) = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0;
  *(undefined4 *)(in_ECX + 300) = 0;
  *(undefined4 *)(in_ECX + 0x130) = uVar11;
  *(undefined4 *)(in_ECX + 0x140) = uVar11;
  *(undefined4 *)(in_ECX + 0x144) = 0;
  *(undefined4 *)(in_ECX + 0x154) = uVar11;
  *(undefined4 *)(in_ECX + 0x158) = uVar11;
  return;
}

