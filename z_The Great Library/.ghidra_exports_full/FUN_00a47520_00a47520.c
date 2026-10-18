// FUN_00a47520 @ 00a47520 body=[[00a47520, 00a47653]]


void FUN_00a47520(int param_1,int *param_2)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *unaff_ESI;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_00a47720(unaff_ESI,1,in_EAX);
    return;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_2 == (int *)*piVar1) {
    if (*(int *)(in_EAX + 0xc) < param_2[3]) {
LAB_00a47562:
      FUN_00a47720(unaff_ESI,1,in_EAX);
      return;
    }
  }
  else if (param_2 == piVar1) {
    if (*(int *)(piVar1[2] + 0xc) < *(int *)(in_EAX + 0xc)) {
      FUN_00a47720(unaff_ESI,0,in_EAX);
      return;
    }
  }
  else {
    if ((*(int *)(in_EAX + 0xc) < param_2[3]) &&
       (FUN_00a478a0(), param_2[3] < *(int *)(in_EAX + 0xc))) {
      if (*(char *)(param_2[2] + 0x29) == '\0') {
        FUN_00a47720(unaff_ESI,1,in_EAX);
        return;
      }
      FUN_00a47720(unaff_ESI,0,in_EAX);
      return;
    }
    if ((param_2[3] < *(int *)(in_EAX + 0xc)) &&
       ((FUN_0099e2b0(), param_2 == *(int **)(param_1 + 4) || (*(int *)(in_EAX + 0xc) < param_2[3]))
       )) {
      if (*(char *)(param_2[2] + 0x29) != '\0') {
        FUN_00a47720(unaff_ESI,0,in_EAX);
        return;
      }
      goto LAB_00a47562;
    }
  }
  puVar2 = (undefined4 *)FUN_00a47660(param_1,in_EAX);
  *unaff_ESI = *puVar2;
  return;
}

