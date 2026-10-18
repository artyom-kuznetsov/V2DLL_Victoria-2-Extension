// FUN_00b1f1f0 @ 00b1f1f0 body=[[00b1f1f0, 00b1f27d]]


undefined4 FUN_00b1f1f0(undefined4 *param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  char *pcVar4;
  int in_ECX;
  
  if (*(uint *)(in_ECX + 0x1c) < param_2) {
    if (*(int *)(in_ECX + 0x18) == 0) {
      uVar2 = (*(code *)PTR_FUN_00f01b08)(param_2,3,4,0,0,0);
    }
    else {
      uVar2 = (*(code *)PTR_FUN_00f01b0c)(*(int *)(in_ECX + 0x18));
    }
    *(undefined4 *)(in_ECX + 0x18) = uVar2;
    *(uint *)(in_ECX + 0x1c) = param_2;
  }
  param_1[1] = 0;
  if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
    *(undefined1 *)*param_1 = 0;
  }
  pcVar3 = _fgets(*(char **)(in_ECX + 0x18),param_2,*(FILE **)(in_ECX + 0x10));
  if (pcVar3 == (char *)0x0) {
    return 0;
  }
  pcVar3 = *(char **)(in_ECX + 0x18);
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  FUN_00b137d0(pcVar3,(int)pcVar4 - (int)(pcVar3 + 1));
  return 1;
}

