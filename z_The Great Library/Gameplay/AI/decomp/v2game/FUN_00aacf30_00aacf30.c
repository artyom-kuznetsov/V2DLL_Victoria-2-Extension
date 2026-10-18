// FUN_00aacf30 @ 00aacf30 body=[[00aacf30, 00aad0d3]]


undefined4 * FUN_00aacf30(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined1 local_c [8];
  
  piVar1 = *(int **)(in_ECX + 4);
  puVar4 = (undefined4 *)(param_3 + 0xc);
  if (*(int *)(in_ECX + 8) == 0) {
    FUN_00aacb90(param_1,1,piVar1,param_3);
    return param_1;
  }
  if (param_2 == (int *)*piVar1) {
    iVar3 = type_info::before((type_info *)*puVar4,(type_info *)param_2[3]);
    if (iVar3 != 0) {
      FUN_00aacb90(param_1,1,param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar3 = type_info::before(*(type_info **)(piVar1[2] + 0xc),(type_info *)*puVar4);
    if (iVar3 != 0) {
      FUN_00aacb90(param_1,0,*(undefined4 *)(*(int *)(in_ECX + 4) + 8),param_3);
      return param_1;
    }
  }
  else {
    iVar3 = type_info::before((type_info *)*puVar4,(type_info *)param_2[3]);
    if (iVar3 != 0) {
      FUN_00832110();
      iVar3 = type_info::before((type_info *)param_2[3],(type_info *)*puVar4);
      if (iVar3 != 0) {
        if (*(char *)(param_2[2] + 0x15) == '\0') {
          FUN_00aacb90(param_1,1,param_2,param_3);
          return param_1;
        }
        FUN_00aacb90(param_1,0,param_2,param_3);
        return param_1;
      }
    }
    iVar3 = type_info::before((type_info *)param_2[3],(type_info *)*puVar4);
    if ((iVar3 != 0) &&
       ((FUN_00aaaa90(), param_2 == *(int **)(in_ECX + 4) ||
        (cVar2 = FUN_00831e00(puVar4,param_2 + 3), cVar2 != '\0')))) {
      if (*(char *)(param_2[2] + 0x15) == '\0') {
        FUN_00aacb90(param_1,1,param_2,param_3);
        return param_1;
      }
      FUN_00aacb90(param_1,0,param_2,param_3);
      return param_1;
    }
  }
  puVar4 = (undefined4 *)FUN_00aacdc0(local_c,param_3,0);
  *param_1 = *puVar4;
  return param_1;
}

