// FUN_00b23c30 @ 00b23c30 body=[[00b23c30, 00b23c98]]


undefined4 FUN_00b23c30(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)FUN_00b23b70(param_2);
  if (pcVar1 == (char *)0x0) {
    *param_3 = 0;
  }
  else {
    *param_3 = 1;
    iVar2 = FUN_00ab4790(pcVar1,0x2f);
    if ((iVar2 == 0) &&
       (((*pcVar1 == 'E' && (pcVar1[2] == 'M')) ||
        ((*pcVar1 == 'M' && (((pcVar1[1] == 'A' && (pcVar1[2] == 'P')) && (pcVar1[6] == '\0'))))))))
    {
      return 1;
    }
  }
  return 0;
}

