// FUN_00457140 @ 00457140 body=[[00457140, 00457260]]


undefined4 * FUN_00457140(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int in_EAX;
  undefined4 *puVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 8) == 0) {
    FUN_004c9c20(param_1,1,in_EAX);
    return param_1;
  }
  piVar1 = *(int **)(in_ECX + 4);
  if (param_2 == (int *)*piVar1) {
    if (*(int *)(in_EAX + 0xc) < param_2[3]) {
LAB_00457184:
      FUN_004c9c20(param_1,1,in_EAX);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    if (*(int *)(piVar1[2] + 0xc) < *(int *)(in_EAX + 0xc)) {
LAB_004571ab:
      FUN_004c9c20(param_1,0,in_EAX);
      return param_1;
    }
  }
  else {
    if ((*(int *)(in_EAX + 0xc) < param_2[3]) &&
       (FUN_0098c320(), param_2[3] < *(int *)(in_EAX + 0xc))) {
      if (*(char *)(param_2[2] + 0x15) == '\0') {
        FUN_004c9c20(param_1,1,in_EAX);
        return param_1;
      }
      goto LAB_004571ab;
    }
    if ((param_2[3] < *(int *)(in_EAX + 0xc)) &&
       ((FUN_0098bfb0(), param_2 == *(int **)(in_ECX + 4) || (*(int *)(in_EAX + 0xc) < param_2[3])))
       ) {
      if (*(char *)(param_2[2] + 0x15) != '\0') {
        FUN_004c9c20(param_1,0,in_EAX);
        return param_1;
      }
      goto LAB_00457184;
    }
  }
  puVar2 = (undefined4 *)FUN_0043cff0(in_ECX,in_EAX);
  *param_1 = *puVar2;
  return param_1;
}

