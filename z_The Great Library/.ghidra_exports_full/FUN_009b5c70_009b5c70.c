// FUN_009b5c70 @ 009b5c70 body=[[009b5c70, 009b5fa3]]


void FUN_009b5c70(int *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  ushort *puVar7;
  int in_ECX;
  code *pcVar8;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  float10 fVar9;
  short sVar10;
  uint uStack_20;
  int aiStack_1c [6];
  
  sVar10 = (short)((uint)unaff_EBX >> 0x10);
  if ((*(char *)(in_ECX + 0x38) != '\0') &&
     (cVar5 = (**(code **)(*param_1 + 0x30))(), cVar5 != '\0')) {
    *(undefined2 *)(in_ECX + 0x4c) = 1;
  }
  uStack_20 = uStack_20 & 0xffffff;
  if (*(char *)(in_ECX + 0x4f) == '\0') {
    return;
  }
  if (*(char *)(in_ECX + 0x164) == '\0') {
    return;
  }
  piVar1 = (int *)(in_ECX + 0x54);
  if (*(int *)(in_ECX + 0x44) == 0x102) {
    (**(code **)(*piVar1 + 0x50))(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
    sVar10 = (short)(CONCAT13(1,(int3)unaff_EBX) >> 0x10);
  }
  else {
    (**(code **)(*piVar1 + 0x50))(*(undefined4 *)(in_ECX + 0x40),*(undefined4 *)(in_ECX + 0x44));
  }
  fVar9 = (float10)(**(code **)(**(int **)(in_ECX + 0x174) + 0x14))();
  if ((float10)0.5 <= fVar9) {
    fVar9 = (float10)(**(code **)(**(int **)(in_ECX + 0x174) + 0x14))();
    if ((fVar9 <= (float10)0.5) ||
       (fVar9 = (float10)(**(code **)(**(int **)(in_ECX + 0x174) + 0x14))(), (float10)1 <= fVar9)) {
      (**(code **)(**(int **)(in_ECX + 0x174) + 8))();
      (**(code **)(**(int **)(in_ECX + 0x174) + 4))();
    }
    else {
      *(undefined4 *)(in_ECX + 0x16c) = 1;
    }
  }
  else {
    *(undefined4 *)(in_ECX + 0x16c) = 0;
  }
  if (((*(int *)(in_ECX + 0x16c) == 1) && (*(int *)(in_ECX + 0x170) == 0)) ||
     ((char)((ushort)sVar10 >> 8) != '\0')) {
    pcVar8 = *(code **)(**(int **)(in_ECX + 0x114) + 0x38);
  }
  else {
    if ((*(int *)(in_ECX + 0x16c) != 0) || (*(int *)(in_ECX + 0x170) != 1)) goto LAB_009b5da6;
    pcVar8 = *(code **)(**(int **)(in_ECX + 0x114) + 0x34);
  }
  (*pcVar8)();
LAB_009b5da6:
  if ((*(int *)(in_ECX + 0x40) != 0) || (*(int *)(in_ECX + 0x44) != 0)) {
    FUN_009b6400(in_ECX);
  }
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(in_ECX + 0x16c);
  if (*(int *)(in_ECX + 0x1d0) == 0) {
    iVar6 = (**(code **)(*piVar1 + 0x2c))(&uStack_20);
    uVar2 = *(ushort *)(iVar6 + 2);
    iVar3 = *(int *)(in_ECX + 0x188);
    iVar4 = *(int *)(in_ECX + 0x154);
    puVar7 = (ushort *)(**(code **)(*piVar1 + 0x2c))(&uStack_20);
    uStack_20 = *(int *)(in_ECX + 0x184) + *(int *)(in_ECX + 0x150) + (int)(short)unaff_ESI +
                (uint)*puVar7;
    iVar6 = **(int **)(in_ECX + 0x114);
    aiStack_1c[0] = (uint)uVar2 + iVar3 + iVar4 + (int)sVar10;
  }
  else {
    iVar6 = (**(code **)(*piVar1 + 0xdc))(aiStack_1c,in_ECX + 0x1c0);
    uVar2 = *(ushort *)(iVar6 + 2);
    iVar3 = *(int *)(in_ECX + 0x188);
    iVar4 = *(int *)(in_ECX + 0x154);
    puVar7 = (ushort *)(**(code **)(*piVar1 + 0xdc))(&stack0xffffffd8,in_ECX + 0x1c0);
    uStack_20 = *(int *)(in_ECX + 0x184) + *(int *)(in_ECX + 0x150) + (int)(short)unaff_ESI +
                (uint)*puVar7;
    iVar6 = **(int **)(in_ECX + 0x114);
    aiStack_1c[0] = (uint)uVar2 + iVar3 + iVar4 + (int)(short)((uint)unaff_ESI >> 0x10);
  }
  (**(code **)(iVar6 + 0xcc))(&uStack_20);
  return;
}

