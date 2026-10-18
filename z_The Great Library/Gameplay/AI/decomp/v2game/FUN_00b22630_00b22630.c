// FUN_00b22630 @ 00b22630 body=[[00b22630, 00b226fe]]


/* WARNING: Function: __alloca_probe_16 replaced with injection: alloca_probe */

void FUN_00b22630(undefined4 param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  
  uVar2 = DAT_00ef259c ^ (uint)&stack0xfffffffc;
  pcVar3 = (char *)PHYSFS_getRealDir(param_1);
  pcVar4 = pcVar3;
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar5 = param_3;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  pcVar4 = pcVar4 + (int)(pcVar5 + param_2 + (-(int)(param_3 + 1) - (int)(pcVar3 + 1)) + 1);
  if (pcVar4 < (char *)0x80) {
    pcVar5 = &stack0xffffffec;
  }
  else {
    pcVar5 = (char *)0x0;
  }
  bVar6 = pcVar5 == (char *)0x0;
  if (bVar6) {
    pcVar5 = (char *)(*DAT_013f3aa8)(pcVar4 + 1,(char *)0xfffffffe < pcVar4);
  }
  if (pcVar5 != (char *)0x0) {
    pcVar4 = pcVar5 + 1;
    *pcVar5 = bVar6;
    if (pcVar4 != (char *)0x0) {
      _sprintf(pcVar4,"%s%s%s",pcVar3,param_3,param_1);
      PHYSFS_mount(pcVar4,0,param_4 == 0);
      if (*pcVar5 != '\0') {
        (*DAT_013f3ab0)(pcVar5);
      }
    }
  }
  __security_check_cookie(uVar2 ^ (uint)&stack0xfffffffc);
  return;
}

