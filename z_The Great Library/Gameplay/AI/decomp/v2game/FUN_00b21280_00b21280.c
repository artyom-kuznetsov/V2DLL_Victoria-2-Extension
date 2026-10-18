// PHYSFS_mkdir @ 00b21280 body=[[00b21280, 00b21360]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void PHYSFS_mkdir(char *param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
                    /* 0x721280  29  PHYSFS_mkdir */
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  if (param_1 == (char *)0x0) {
    FUN_00b1f840("Invalid argument");
    __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
    return;
  }
  pcVar3 = param_1;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if (pcVar3 + (1 - (int)(param_1 + 1)) < (char *)0x80) {
    pcVar4 = &stack0xffffffec;
  }
  else {
    pcVar4 = (char *)0x0;
  }
  bVar5 = pcVar4 == (char *)0x0;
  if (bVar5) {
    pcVar4 = (char *)(*DAT_013f3aa8)(pcVar3 + (2 - (int)(param_1 + 1)),
                                     (char *)0xfffffffe < pcVar3 + (1 - (int)(param_1 + 1)));
  }
  if (pcVar4 != (char *)0x0) {
    *pcVar4 = bVar5;
    if (pcVar4 + 1 != (char *)0x0) {
      FUN_00b20300(param_1,pcVar4 + 1);
      if (*pcVar4 != '\0') {
        (*DAT_013f3ab0)(pcVar4);
      }
      __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  FUN_00b1f840("Out of memory");
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

