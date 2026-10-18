// FUN_00a70820 @ 00a70820 body=[[00a70820, 00a709a7]]


void FUN_00a70820(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int in_ECX;
  float10 fVar3;
  undefined1 local_c [8];
  
  if (*(int *)(in_ECX + 0x70) == 0) {
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x5c))(1);
    iVar1 = *(int *)(in_ECX + 0xac);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
    (**(code **)(**(int **)(in_ECX + 0xa8) + 8))();
  }
  if ((*(int *)(in_ECX + 0x70) == 1) || (*(int *)(in_ECX + 0x70) == 4)) {
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x5c))(1);
    iVar1 = *(int *)(in_ECX + 0xac);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 200) != '\0') {
        (**(code **)(**(int **)(iVar1 + 0x58) + 0x38))();
      }
      *(undefined1 *)(iVar1 + 200) = 0;
    }
    (**(code **)(**(int **)(in_ECX + 0xa8) + 8))();
  }
  if ((*(int *)(in_ECX + 0x70) == 2) && (param_1 != (int *)0x0)) {
    puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x4c))(local_c);
    *(undefined4 *)(in_ECX + 0xa0) = *puVar2;
    *(undefined4 *)(in_ECX + 0xa4) = puVar2[1];
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x5c))(1);
    fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0xa8) + 0x14))();
    if (fVar3 == (float10)0) {
      (**(code **)(**(int **)(in_ECX + 0xa8) + 4))();
    }
    fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0xa8) + 0x14))();
    if ((float10)0.5 < fVar3) {
      fVar3 = (float10)(**(code **)(**(int **)(in_ECX + 0xa8) + 0x14))();
      if (fVar3 < (float10)2.0) {
        if (*(int **)(in_ECX + 0xac) != (int *)0x0) {
          (**(code **)(**(int **)(in_ECX + 0xac) + 0xb0))();
        }
        goto LAB_00a7097e;
      }
    }
    (**(code **)(**(int **)(in_ECX + 0xa8) + 0x14))();
  }
LAB_00a7097e:
  if (*(int *)(in_ECX + 0x70) == 3) {
    (**(code **)(**(int **)(in_ECX + 0x94) + 0x5c))(4);
    (**(code **)(**(int **)(in_ECX + 0xa8) + 8))();
  }
  return;
}

