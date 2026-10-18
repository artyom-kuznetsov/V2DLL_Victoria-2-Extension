// FUN_0067a5f0 @ 0067a5f0 body=[[0067a5f0, 0067a723]]


void FUN_0067a5f0(int param_1,int *param_2)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  undefined4 *unaff_EDI;
  
  if (*(int *)(param_1 + 8) == 0) {
    FUN_0067a7e0(unaff_EDI,1,in_EAX);
    return;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (param_2 == (int *)*piVar1) {
    if (*(int *)(in_EAX + 0xc) < param_2[3]) {
LAB_0067a632:
      FUN_0067a7e0(unaff_EDI,1,in_EAX);
      return;
    }
  }
  else if (param_2 == piVar1) {
    if (*(int *)(piVar1[2] + 0xc) < *(int *)(in_EAX + 0xc)) {
      FUN_0067a7e0(unaff_EDI,0,in_EAX);
      return;
    }
  }
  else {
    if ((*(int *)(in_EAX + 0xc) < param_2[3]) &&
       (FUN_00445c00(), param_2[3] < *(int *)(in_EAX + 0xc))) {
      if (*(char *)(param_2[2] + 0x21) == '\0') {
        FUN_0067a7e0(unaff_EDI,1,in_EAX);
        return;
      }
      FUN_0067a7e0(unaff_EDI,0,in_EAX);
      return;
    }
    if ((param_2[3] < *(int *)(in_EAX + 0xc)) &&
       ((FUN_0093d230(), param_2 == *(int **)(param_1 + 4) || (*(int *)(in_EAX + 0xc) < param_2[3]))
       )) {
      if (*(char *)(param_2[2] + 0x21) != '\0') {
        FUN_0067a7e0(unaff_EDI,0,in_EAX);
        return;
      }
      goto LAB_0067a632;
    }
  }
  puVar2 = (undefined4 *)FUN_0067a730(param_1,in_EAX);
  *unaff_EDI = *puVar2;
  return;
}

