// FUN_00a6be80 @ 00a6be80 body=[[00a6be80, 00a6c0bd]]


void FUN_00a6be80(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  undefined4 uStack_c;
  
  if (*(int *)(in_ECX + 0x70) == 0) {
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0x5c))(1);
    iVar1 = *(int *)(in_ECX + 0xa8);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
    (**(code **)(**(int **)(in_ECX + 0xa4) + 8))();
  }
  if (*(int *)(in_ECX + 0x70) == 1) {
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0x5c))(2);
    iVar1 = *(int *)(in_ECX + 0xa8);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
    (**(code **)(**(int **)(in_ECX + 0xa4) + 8))();
  }
  if (*(int *)(in_ECX + 0x70) == 2) {
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0x5c))(3);
    if (*(int *)(in_ECX + 0xa8) != 0) {
      fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0xa4) + 0x14))();
      if (fVar2 == (float10)0) {
        (**(code **)(**(int **)(in_ECX + 0xa4) + 4))();
      }
      fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0xa4) + 0x14))();
      if ((float10)0.5 < fVar2) {
        fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0xa4) + 0x14))();
        if (fVar2 < (float10)2.0) {
          FUN_009e7500();
          (**(code **)(**(int **)(*(int *)(in_ECX + 0xa8) + 0x58) + 0xf8))();
          uStack_c = CONCAT22(*(short *)(in_ECX + 0x9a) + 10,*(short *)(in_ECX + 0x98) + 0x1e);
          FUN_009e7350(uStack_c);
          (**(code **)(**(int **)(in_ECX + 0xa8) + 0xb0))();
          goto LAB_00a6c06f;
        }
      }
      fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0xa4) + 0x14))();
      if ((float10)2.0 < fVar2) {
        FUN_009e7500();
        (**(code **)(**(int **)(*(int *)(in_ECX + 0xa8) + 0x58) + 0xf8))();
        uStack_c = CONCAT22(*(short *)(in_ECX + 0x9a) + 10,*(short *)(in_ECX + 0x98) + 0x1e);
        FUN_009e7350(uStack_c);
      }
    }
  }
LAB_00a6c06f:
  if (*(int *)(in_ECX + 0x70) == 3) {
    (**(code **)(**(int **)(in_ECX + 0xa0) + 0x5c))(4);
    (**(code **)(**(int **)(in_ECX + 0xa4) + 8))();
    iVar1 = *(int *)(in_ECX + 0xa8);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
  }
  return;
}

