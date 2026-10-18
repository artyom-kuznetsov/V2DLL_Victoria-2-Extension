// FUN_00b0b5b0 @ 00b0b5b0 body=[[00b0b5b0, 00b0b69a]]


/* WARNING: Removing unreachable block (ram,0x00b0b604) */

undefined4 * FUN_00b0b5b0(undefined4 *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int *piVar4;
  int *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00b391a1;
  local_c = ExceptionList;
  uVar2 = DAT_00ef259c ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  if (*in_ECX != 0) {
    FUN_00b13660(in_ECX[1],0);
  }
  local_4 = 1;
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  piVar4 = (int *)FUN_00b13780(param_2,(int)pcVar3 - (int)(param_2 + 1));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (*piVar4 != 0) {
    FUN_00b13660(piVar4[1],0);
    if ((void *)*param_1 != (void *)0x0) {
      FID_conflict__memcpy((void *)*param_1,(void *)*piVar4,piVar4[1] + 1);
    }
  }
  local_4 = local_4 & 0xffffff00;
  FUN_00b13650(uVar2);
  ExceptionList = local_c;
  return param_1;
}

