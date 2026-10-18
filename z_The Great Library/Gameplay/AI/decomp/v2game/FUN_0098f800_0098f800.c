// FUN_0098f800 @ 0098f800 body=[[0098f800, 0098f8f6] [0098f8fa, 0098f930] [0098f934, 0098f93c]]


undefined4 FUN_0098f800(undefined4 param_1,int *param_2,int *param_3,int *param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *in_EAX;
  int in_stack_00000024;
  int local_1c;
  
  while ((in_EAX != param_2 && (param_3 != param_4))) {
    iVar1 = *param_3;
    iVar2 = *in_EAX;
    if (*(float *)(*(int *)(iVar1 + 0x13c) + 0x98) <= *(float *)(*(int *)(iVar2 + 0x13c) + 0x98)) {
      piVar3 = *(int **)(in_stack_00000024 + 4);
      if (piVar3 < *(int **)(in_stack_00000024 + 8)) {
        *piVar3 = iVar2;
        *(int *)(in_stack_00000024 + 4) = *(int *)(in_stack_00000024 + 4) + 4;
      }
      else {
        if (piVar3 != (int *)0x0) {
          *piVar3 = iVar2;
        }
        *(int *)(in_stack_00000024 + 4) = *(int *)(in_stack_00000024 + 4) + 4;
        *(undefined4 *)(in_stack_00000024 + 8) = *(undefined4 *)(in_stack_00000024 + 4);
      }
      in_EAX = in_EAX + 1;
    }
    else {
      piVar3 = *(int **)(in_stack_00000024 + 4);
      if (piVar3 < *(int **)(in_stack_00000024 + 8)) {
        *piVar3 = iVar1;
        *(int *)(in_stack_00000024 + 4) = *(int *)(in_stack_00000024 + 4) + 4;
        param_3 = param_3 + 1;
      }
      else {
        if (piVar3 != (int *)0x0) {
          *piVar3 = iVar1;
        }
        *(int *)(in_stack_00000024 + 4) = *(int *)(in_stack_00000024 + 4) + 4;
        *(undefined4 *)(in_stack_00000024 + 8) = *(undefined4 *)(in_stack_00000024 + 4);
        param_3 = param_3 + 1;
      }
    }
  }
  FUN_0098f4a0(in_EAX);
  if (local_1c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b();
  }
  FUN_0098f4a0(param_3);
  if (param_5 == 0) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00aae91b();
}

