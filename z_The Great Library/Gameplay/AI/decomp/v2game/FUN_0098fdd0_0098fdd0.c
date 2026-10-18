// FUN_0098fdd0 @ 0098fdd0 body=[[0098fdd0, 0098fedb]]


uint * FUN_0098fdd0(int param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  longlong lVar7;
  char local_48 [68];
  
  pcVar6 = (char *)(param_1 + 4);
  uVar4 = FUN_00aaf0c5(pcVar6);
  cVar2 = *pcVar6;
  iVar3 = 0;
  while( true ) {
    if (cVar2 == '\0') {
      *param_2 = uVar4 << 0xf;
      param_2[1] = ((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11;
      return param_2;
    }
    if (pcVar6[iVar3] == '.') break;
    cVar2 = pcVar6[iVar3 + 1];
    iVar3 = iVar3 + 1;
  }
  local_48[0] = '0';
  local_48[1] = '.';
  local_48[2] = 0;
  _memset(local_48 + 3,0,0x3d);
  pcVar5 = (char *)(iVar3 + 5 + param_1);
  iVar3 = 2 - (int)pcVar5;
  do {
    cVar2 = *pcVar5;
    pcVar5[(int)(local_48 + iVar3)] = cVar2;
    pcVar5 = pcVar5 + 1;
  } while (cVar2 != '\0');
  _atof(local_48);
  lVar7 = FUN_00b31c36();
  if (*pcVar6 == '-') {
    lVar7 = __allmul(lVar7,0xffff8000,0xffffffff);
    lVar7 = lVar7 >> 0xf;
  }
  *param_2 = uVar4 << 0xf;
  uVar1 = *param_2;
  *param_2 = *param_2 + (uint)lVar7;
  param_2[1] = ((int)uVar4 >> 0x1f) << 0xf | uVar4 >> 0x11;
  param_2[1] = param_2[1] + (int)((ulonglong)lVar7 >> 0x20) + (uint)CARRY4(uVar1,(uint)lVar7);
  return param_2;
}

