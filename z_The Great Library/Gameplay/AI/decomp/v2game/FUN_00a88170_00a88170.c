// FUN_00a88170 @ 00a88170 body=[[00a88170, 00a883e7]]


void FUN_00a88170(void)

{
  int iVar1;
  int in_ECX;
  float10 fVar2;
  undefined4 uStack_c;
  
  if (*(int *)(in_ECX + 0x70) == 0) {
    if (*(int *)(in_ECX + 0x74) != 0) {
      *(undefined4 *)(in_ECX + 0x74) = 0;
      (**(code **)(**(int **)(in_ECX + 0xb0) + 0x5c))(1);
    }
    iVar1 = *(int *)(in_ECX + 0xbc);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
    (**(code **)(**(int **)(in_ECX + 0xb8) + 8))();
  }
  if (*(int *)(in_ECX + 0x70) == 1) {
    if (*(int *)(in_ECX + 0x74) != 1) {
      *(undefined4 *)(in_ECX + 0x74) = 1;
      (**(code **)(**(int **)(in_ECX + 0xb0) + 0x5c))(2);
    }
    iVar1 = *(int *)(in_ECX + 0xbc);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
    (**(code **)(**(int **)(in_ECX + 0xb8) + 8))();
  }
  if (*(int *)(in_ECX + 0x70) == 2) {
    *(undefined1 *)(in_ECX + 0x130) = 0;
    if (*(int *)(in_ECX + 0x74) != 2) {
      *(undefined4 *)(in_ECX + 0x74) = 2;
      (**(code **)(**(int **)(in_ECX + 0xb0) + 0x5c))(3);
    }
    fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0xb8) + 0x14))();
    if (fVar2 == (float10)0) {
      (**(code **)(**(int **)(in_ECX + 0xb8) + 4))();
    }
    fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0xb8) + 0x14))();
    if ((float10)0.5 < fVar2) {
      fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0xb8) + 0x14))();
      if (fVar2 < (float10)2.0) {
        if (*(int *)(in_ECX + 0xbc) != 0) {
          FUN_009e7500();
          (**(code **)(**(int **)(*(int *)(in_ECX + 0xbc) + 0x58) + 0xf8))();
          uStack_c = CONCAT22(*(short *)(in_ECX + 0x9e) + 10,*(short *)(in_ECX + 0x9c) + 0x1e);
          FUN_009e7350(uStack_c);
          (**(code **)(**(int **)(in_ECX + 0xbc) + 0xb0))();
        }
        goto LAB_00a8838d;
      }
    }
    fVar2 = (float10)(**(code **)(**(int **)(in_ECX + 0xb8) + 0x14))();
    if (((float10)2.0 < fVar2) && (*(int *)(in_ECX + 0xbc) != 0)) {
      FUN_009e7500();
      (**(code **)(**(int **)(*(int *)(in_ECX + 0xbc) + 0x58) + 0xf8))();
      uStack_c = CONCAT22(*(short *)(in_ECX + 0x9e) + 10,*(short *)(in_ECX + 0x9c) + 0x1e);
      FUN_009e7350(uStack_c);
    }
  }
LAB_00a8838d:
  if (*(int *)(in_ECX + 0x70) == 3) {
    if (*(int *)(in_ECX + 0x74) != 3) {
      *(undefined4 *)(in_ECX + 0x74) = 3;
      (**(code **)(**(int **)(in_ECX + 0xb0) + 0x5c))(4);
    }
    (**(code **)(**(int **)(in_ECX + 0xb8) + 8))();
    iVar1 = *(int *)(in_ECX + 0xbc);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
  }
  return;
}

