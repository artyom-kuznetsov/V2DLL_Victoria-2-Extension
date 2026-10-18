// FUN_0098f940 @ 0098f940 body=[[0098f940, 0098f94c] [0098f950, 0098f9a7] [0098f9ab, 0098f9ae]]


void FUN_0098f940(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  undefined4 *unaff_ESI;
  int in_stack_00000018;
  
  for (; in_ECX != param_1; in_ECX = in_ECX + 1) {
    puVar1 = *(undefined4 **)(in_stack_00000018 + 4);
    if (puVar1 < *(undefined4 **)(in_stack_00000018 + 8)) {
      *puVar1 = *in_ECX;
      *(int *)(in_stack_00000018 + 4) = *(int *)(in_stack_00000018 + 4) + 4;
    }
    else {
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *in_ECX;
      }
      *(int *)(in_stack_00000018 + 4) = *(int *)(in_stack_00000018 + 4) + 4;
      *(undefined4 *)(in_stack_00000018 + 8) = *(undefined4 *)(in_stack_00000018 + 4);
    }
  }
  unaff_ESI[4] = in_stack_00000018;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[2] = 0;
  unaff_ESI[3] = 0;
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00aae91b(param_2);
  }
  return;
}

