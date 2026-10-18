// FUN_00a394a0 @ 00a394a0 body=[[00a394a0, 00a3951f]]


undefined1 * FUN_00a394a0(undefined1 *param_1)

{
  char cVar1;
  DWORD DVar2;
  char *pcVar3;
  CHAR local_108 [256];
  undefined4 local_8;
  
  local_8 = 0;
  DVar2 = GetModuleFileNameA((HMODULE)0x0,local_108,0x100);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (0 < (int)DVar2) {
    pcVar3 = local_108;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    FUN_00409350(local_108,(int)pcVar3 - (int)(local_108 + 1));
    return param_1;
  }
  FUN_00408ed0(&DAT_00f0ebb0,0,0xffffffff);
  return param_1;
}

