// FUN_009a8550 @ 009a8550 body=[[009a8550, 009a8789]]


void FUN_009a8550(int param_1)

{
  int iVar1;
  float10 fVar2;
  undefined4 uStack_c;
  
  if (*(char *)(param_1 + 0x142) != '\0') {
    if (*(int *)(param_1 + 0x6c) == 0) {
      (**(code **)(**(int **)(param_1 + 0x70) + 0x5c))(1);
      iVar1 = *(int *)(param_1 + 0x8c);
      if (iVar1 != 0) {
        if (*(char *)(iVar1 + 200) != '\0') {
          (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
        }
        *(undefined1 *)(iVar1 + 200) = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x88) + 8))();
    }
    if (*(int *)(param_1 + 0x6c) == 1) {
      (**(code **)(**(int **)(param_1 + 0x70) + 0x5c))(2);
      iVar1 = *(int *)(param_1 + 0x8c);
      if (iVar1 != 0) {
        if (*(char *)(iVar1 + 200) != '\0') {
          (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
        }
        *(undefined1 *)(iVar1 + 200) = 0;
      }
      (**(code **)(**(int **)(param_1 + 0x88) + 8))();
    }
    if (*(int *)(param_1 + 0x6c) == 2) {
      (**(code **)(**(int **)(param_1 + 0x70) + 0x5c))(3);
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x14))();
      if (fVar2 == (float10)0) {
        (**(code **)(**(int **)(param_1 + 0x88) + 4))();
      }
      fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x14))();
      if ((fVar2 <= (float10)0.5) ||
         (fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x14))(), (float10)2.0 <= fVar2
         )) {
        fVar2 = (float10)(**(code **)(**(int **)(param_1 + 0x88) + 0x14))();
        if (((float10)2.0 < fVar2) && (*(int *)(param_1 + 0x8c) != 0)) {
          FUN_009e7500();
          (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 0x58) + 0xf8))();
          uStack_c = CONCAT22(*(short *)(param_1 + 0x7a) + 10,*(short *)(param_1 + 0x78) + 0x1e);
          FUN_009e7350(uStack_c);
        }
      }
      else if (*(int *)(param_1 + 0x8c) != 0) {
        FUN_009e7500();
        (**(code **)(**(int **)(*(int *)(param_1 + 0x8c) + 0x58) + 0xf8))();
        uStack_c = CONCAT22(*(short *)(param_1 + 0x7a) + 10,*(short *)(param_1 + 0x78) + 0x1e);
        FUN_009e7350(uStack_c);
        (**(code **)(**(int **)(param_1 + 0x8c) + 0xb0))();
      }
    }
    if (*(char *)(param_1 + 0x142) != '\0') {
      return;
    }
  }
  (**(code **)(**(int **)(param_1 + 0x70) + 0x5c))(4);
  (**(code **)(**(int **)(param_1 + 0x88) + 8))();
  iVar1 = *(int *)(param_1 + 0x8c);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 200) != '\0') {
      (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
    }
    *(undefined1 *)(iVar1 + 200) = 0;
  }
  return;
}

