// FUN_009ef9e0 @ 009ef9e0 body=[[009ef9e0, 009efba1]]


void FUN_009ef9e0(void)

{
  undefined4 *puVar1;
  short sVar2;
  int *piVar3;
  int in_ECX;
  float10 fVar4;
  
  *(undefined4 *)(in_ECX + 0x140) = 3;
  sVar2 = (**(code **)(**(int **)(in_ECX + 0xa0) + 0x68))();
  if (sVar2 != 3) {
    if (*(int *)(in_ECX + 0x130) != -1) {
      piVar3 = (int *)FUN_009c7290();
      (**(code **)(*piVar3 + 0x24))(*(undefined4 *)(in_ECX + 0x130));
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x58);
    while (puVar1 != (undefined4 *)0x0) {
      piVar3 = (int *)*puVar1;
      puVar1 = (undefined4 *)puVar1[2];
      (**(code **)(*piVar3 + 0x18))();
    }
  }
  (**(code **)(**(int **)(in_ECX + 0xa0) + 0x5c))(*(undefined2 *)(in_ECX + 0x140));
  fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0xa4) + 0x14))();
  if (fVar4 == (float10)0) {
    (**(code **)(**(int **)(in_ECX + 0xa4) + 4))();
  }
  fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0xa4) + 0x14))();
  if ((fVar4 <= (float10)0.5) ||
     (fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0xa4) + 0x14))(), (float10)2.0 <= fVar4)) {
    fVar4 = (float10)(**(code **)(**(int **)(in_ECX + 0xa4) + 0x14))();
    if (((float10)2.0 < fVar4) && (*(int *)(in_ECX + 0xa8) != 0)) {
      FUN_009e7500();
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xa8) + 0x58) + 0xf8))();
      FUN_009e7350(CONCAT22(*(short *)(in_ECX + 0x9a) + 10,*(short *)(in_ECX + 0x98) + 0x1e));
    }
  }
  else if (*(int *)(in_ECX + 0xa8) != 0) {
    FUN_009e7500();
    (**(code **)(**(int **)(*(int *)(in_ECX + 0xa8) + 0x58) + 0xf8))();
    FUN_009e7350(CONCAT22(*(short *)(in_ECX + 0x9a) + 10,*(short *)(in_ECX + 0x98) + 0x1e));
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0xb0))();
    return;
  }
  return;
}

