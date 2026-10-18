// FUN_00aaadc0 @ 00aaadc0 body=[[00aaadc0, 00aaaf5c]]


undefined4 * FUN_00aaadc0(undefined4 *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  undefined4 *puVar4;
  int in_ECX;
  undefined1 local_c [8];
  
  piVar1 = *(int **)(in_ECX + 4);
  if (*(int *)(in_ECX + 8) == 0) {
    FUN_00aacb90(param_1,1,piVar1,param_3);
    return param_1;
  }
  if (param_2 == (int *)*piVar1) {
    cVar3 = FUN_00aaa9c0(*(undefined4 *)(param_3 + 0xc),param_2[3]);
    if (cVar3 != '\0') {
      FUN_00aacb90(param_1,1,param_2,param_3);
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar2 = piVar1[2];
    cVar3 = FUN_00aaa9c0(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(param_3 + 0xc));
    if (cVar3 != '\0') {
      FUN_00aacb90(param_1,0,iVar2,param_3);
      return param_1;
    }
  }
  else {
    cVar3 = FUN_00aaa9c0(*(undefined4 *)(param_3 + 0xc),param_2[3]);
    if (cVar3 != '\0') {
      FUN_00832110();
      cVar3 = FUN_00aaa9c0(param_2[3],*(undefined4 *)(param_3 + 0xc));
      if (cVar3 != '\0') {
        if (*(char *)(param_2[2] + 0x15) == '\0') {
          FUN_00aacb90(param_1,1,param_2,param_3);
          return param_1;
        }
        FUN_00aacb90(param_1,0,param_2,param_3);
        return param_1;
      }
    }
    cVar3 = FUN_00aaa9c0(param_2[3],*(undefined4 *)(param_3 + 0xc));
    if ((cVar3 != '\0') &&
       ((FUN_00aaaa90(), param_2 == *(int **)(in_ECX + 4) ||
        (cVar3 = FUN_00aaa9c0(*(undefined4 *)(param_3 + 0xc),param_2[3]), cVar3 != '\0')))) {
      if (*(char *)(param_2[2] + 0x15) == '\0') {
        FUN_00aacb90(param_1,1,param_2,param_3);
        return param_1;
      }
      FUN_00aacb90(param_1,0,param_2,param_3);
      return param_1;
    }
  }
  puVar4 = (undefined4 *)FUN_00aaac60(local_c,param_3,0);
  *param_1 = *puVar4;
  return param_1;
}

