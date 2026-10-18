// FUN_009c37d0 @ 009c37d0 body=[[009c37d0, 009c3941]]


void FUN_009c37d0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  float10 fVar3;
  undefined1 local_c [8];
  
  if (*(int *)(in_ECX + 0x70) == 0) {
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x5c))(1);
    iVar1 = *(int *)(in_ECX + 0xb0);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
    (**(code **)(**(int **)(in_ECX + 0xac) + 8))();
  }
  if ((*(int *)(in_ECX + 0x70) == 1) || (*(int *)(in_ECX + 0x70) == 4)) {
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x5c))(2);
    iVar1 = *(int *)(in_ECX + 0xb0);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
    (**(code **)(**(int **)(in_ECX + 0xac) + 8))();
  }
  if ((*(int *)(in_ECX + 0x70) == 2) && (param_1 != (int *)0x0)) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x4c))(local_c);
    *(undefined4 *)(in_ECX + 0xa4) = *puVar2;
    *(undefined4 *)(in_ECX + 0xa8) = puVar2[1];
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x5c))(3);
    fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0xac) + 0x14))();
    if (fVar3 == (float10)0) {
      (**(code **)(**(int **)(in_ECX + 0xac) + 4))();
    }
    fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0xac) + 0x14))();
    if ((float10)0.5 < fVar3) {
      fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0xac) + 0x14))();
      if (fVar3 < (float10)2.0) goto LAB_009c3918;
    }
    (**(code **)(**(int **)(in_ECX + 0xac) + 0x14))();
  }
LAB_009c3918:
  if (*(int *)(in_ECX + 0x70) == 3) {
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x5c))(4);
    (**(code **)(**(int **)(in_ECX + 0xac) + 8))();
  }
  return;
}

